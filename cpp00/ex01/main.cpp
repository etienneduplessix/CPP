/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienneduplessix <etienneduplessix@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:18:18 by etiennedupl       #+#    #+#             */
/*   Updated: 2024/02/08 19:33:23 by etiennedupl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main() {
    PhoneBook phonebook;
    std::string command;

    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            Contact newContact;
            std::cin >> newContact;  // This should work now
            phonebook.addContact(newContact);
        } else if (command == "SEARCH") {
            phonebook.searchContact();
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command. Try again." << std::endl;
        }
    }

    return 0;
}
