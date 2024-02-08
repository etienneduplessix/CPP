/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienneduplessix <etienneduplessix@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:18:02 by etiennedupl       #+#    #+#             */
/*   Updated: 2024/02/08 19:32:09 by etiennedupl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();

    void addContact();
    void searchContact();

private:
    static const int maxContacts = 2;
    Contact contacts[maxContacts];
    int numContacts;

    void displayContactsList() const;
};

#endif 
