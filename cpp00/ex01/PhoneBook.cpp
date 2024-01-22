/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienneduplessix <etienneduplessix@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:17:54 by etiennedupl       #+#    #+#             */
/*   Updated: 2024/01/18 14:33:40 by etiennedupl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : numContacts(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() {
    if (numContacts == maxContacts) {
        // Replace the oldest contact
        for (int i = 0; i < maxContacts - 1; ++i) {
            contacts[i] = contacts[i + 1];
        }
        --numContacts;
    }

    Contact newContact;
    std::cin >> newContact;
    contacts[numContacts++] = newContact;

    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::() {
    if (numContacts == 0) {
        std::cout << "Phonebook is empty. Add contacts first." << std::endl;
        return;
    }

    displayContactsList();

    int index;
    std::cout << "Enter index of the entry to display: ";
    std::cin >> index;

    if (index < 0 || index >= numContacts) {
        std::cout << "Invalid index. Try again." << std::endl;
    } else {
        std::cout << contacts[index] << std::endl;
    }
}

void PhoneBook::displayContactsList() const {
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|"
              << std::endl;

    for (int i = 0; i < numContacts; ++i) {
        std::cout << std::setw(10) << i << "|" << std::setw(10) << contacts[i].getFirstName() << "|"
                  << std::setw(10) << contacts[i].getLastName() << "|" << std::setw(10)
                  << contacts[i].getNickname() << "|" << std::endl;
    }
}
