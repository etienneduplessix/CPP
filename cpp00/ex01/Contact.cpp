/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienneduplessix <etienneduplessix@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:18:31 by etiennedupl       #+#    #+#             */
/*   Updated: 2024/02/08 19:32:06 by etiennedupl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

void Contact::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}

void Contact::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Contact::setNickname(const std::string& nickname) {
    this->nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string& darkestSecret) {
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::istream& Contact::input(std::istream& in) {
    std::cout << "Enter First Name: ";
    in >> firstName;

    std::cout << "Enter Last Name: ";
    in >> lastName;

    std::cout << "Enter Nickname: ";
    in >> nickname;

    std::cout << "Enter Phone Number: ";
    in >> phoneNumber;

    std::cout << "Enter Darkest Secret: ";
    in.ignore(); // Consume newline left in the buffer
    std::getline(in, darkestSecret);

    return in;
}

std::ostream& Contact::display(std::ostream& out) const {
    out << "First Name: " << getFirstName() << std::endl;
    out << "Last Name: " << getLastName() << std::endl;
    out << "Nickname: " << getNickname() << std::endl;
    out << "Phone Number: " << phoneNumber << std::endl;
    out << "Darkest Secret: " << darkestSecret << std::endl;

    return out;
}

std::istream& operator>>(std::istream& in, Contact& contact) {
    return contact.input(in);
}

std::ostream& operator<<(std::ostream& out, const Contact& contact) {
    return contact.display(out);
}
