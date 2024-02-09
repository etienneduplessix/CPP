#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "Contact.hpp"

class PhoneBook {

public:

   static const int maxContacts = 8;
    Contact contacts[maxContacts];
    void add_contact(Contact contact); 
    void print_contacts(void);


};

#endif