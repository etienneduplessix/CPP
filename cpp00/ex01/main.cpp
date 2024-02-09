#include "Contact.hpp"
#include "PhoneBook.hpp"

void	add_contact (PhoneBook *phone_book)
{
	Contact	contact;
	std::string	secret;

	std::cout << "\tFirst Name : ";
		std::cin >> contact.first_name;
	std::cout << "\tLast Name : ";
		std::cin >> contact.last_name;
	std::cout << "\tNickname : ";
		std::cin >> contact.nickname;
	std::cout << "\tPhone Number : ";
		std::cin >> contact.number;
	std::cout << "\tDarkest Secret : ";
		std::cin >> secret;
	phone_book->add_contact(contact);
}

void	search_contacts (PhoneBook phone_book)
{
	int index_i;
	std::string index_s;

	std::cout << "\n";
	phone_book.print_contacts();
	std::cout << "\n\t index : ";
	std::cin >> index_s;
	index_i = atoi(index_s.c_str());
if (index_i < 0 ||phone_book.contacts[index_i].exists != 1|| index_i >= phone_book.maxContacts) {
        std::cout << "Invalid index. Try again." << std::endl;
    } else {
        phone_book.contacts[index_i].print_contact();
    }
}
int main(void)
{
	PhoneBook	phonebook;
	std::string		cmd;
	Contact		contact;

	contact.exists = 0;
	for (int i = 0; i < PhoneBook::maxContacts; i++)
		phonebook.contacts[i] = contact;

	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> cmd;
		if (cmd == "ADD")
			add_contact(&phonebook);
		else if (cmd == "SEARCH")
			search_contacts(phonebook);
		else if (cmd == "EXIT")
			break;
	 	else 
            std::cout << "Invalid command. Try again." << std::endl;
	}

	return 0;
}