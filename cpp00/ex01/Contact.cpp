/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienneduplessix <etienneduplessix@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:18:31 by etiennedupl       #+#    #+#             */
/*   Updated: 2024/01/18 13:20:34 by etiennedupl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::istream& operator>>(std::istream& in, Contact& contact) {
    std::cout << "Enter First Name: ";
    in >> contact.firstName;

    std::cout << "Enter Last Name: ";
    in >> contact.lastName;

    std::cout << "Enter Nickname: ";
    in >> contact.nickname;

    std::cout << "Enter Phone Number: ";
    in >> contact.phoneNumber;

    std::cout << "Enter Darkest Secret: ";
    in.ignore(); // Consume newline left in the buffer
    std::getline(in, contact.darkestSecret);

    return in;
}

std::ostream& operator<<(std::ostream& out, const Contact& contact) {
    out << "First Name: " << contact.firstName << std::endl;
    out << "Last Name: " << contact.lastName << std::endl;
    out << "Nickname: " << contact.nickname << std::endl;
    out << "Phone Number: " << contact.phoneNumber << std::endl;
    out << "Darkest Secret: " << contact.darkestSecret << std::endl;

    return out;
}
