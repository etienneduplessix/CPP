#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat test1("titi", 30);
        Bureaucrat test2(test1); // Copy constructor
        // Bureaucrat test3; // Remove this line, as you don't have a default constructor
        // test3 = test1; // This line will be an error until you implement the assignment operator
        Bureaucrat test4("kiki", 0); // Grade 0 is invalid, so an exception will be thrown here
    } catch (const std::exception &exc) {
        std::cout << exc.what() << std::endl;
    }

    try {
        Bureaucrat test1("titi", 30);
        test1.incrementGrade();
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat test1("titi", 30);
        test1.decrementGrade();
    } catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << "Name: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade();
    return os;
    }   
    return 0;
}


#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 12345
#define MAX_CONNECTIONS 5
#define BUFFER_SIZE 1024

void handleClient(int clientSocket) {
    char buffer[BUFFER_SIZE];
    ssize_t bytesReceived;

    // Receive file name from client
    bytesReceived = recv(clientSocket, buffer, BUFFER_SIZE, 0);
    if (bytesReceived < 0) {
        perror("Error receiving file name");
        return;
    }
    buffer[bytesReceived] = '\0';
    std::cout << "Received file name: " << buffer << std::endl;

    // Open file for writing
    FILE* file = fopen(buffer, "wb");
    if (!file) {
        perror("Error opening file for writing");
        return;
    }

    // Receive file data and write to file
    while ((bytesReceived = recv(clientSocket, buffer, BUFFER_SIZE, 0)) > 0) {
        fwrite(buffer, 1, bytesReceived, file);
    }
    if (bytesReceived < 0) {
        perror("Error receiving file data");
        fclose(file);
        return;
    }

    std::cout << "File received successfully." << std::endl;

    // Clean up
    fclose(file);
    close(clientSocket);
}

int main() {
    int serverSocket, clientSocket;
    struct sockaddr_in serverAddr, clientAddr;
    socklen_t clientLen = sizeof(clientAddr);

    // Create socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket < 0) {
        perror("Error creating socket");
        return 1;
    }

    // Set up server address
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    serverAddr.sin_port = htons(PORT);

    // Bind socket to address
    if (bind(serverSocket, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) < 0) {
        perror("Error binding socket");
        return 1;
    }

    // Listen for connections
    if (listen(serverSocket, MAX_CONNECTIONS) < 0) {
        perror("Error listening for connections");
        return 1;
    }

    std::cout << "Server listening on port " << PORT << std::endl;

    // Accept incoming connections
    while (1) {
        clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddr, &clientLen);
        if (clientSocket < 0) {
            perror("Error accepting connection");
            continue;
        }

        std::cout << "Connection accepted from " << inet_ntoa(clientAddr.sin_addr) << std::endl;

        // Handle client in a separate thread or process
        handleClient(clientSocket);
    }

    // Close server socket
    close(serverSocket);

    return 0;
}
