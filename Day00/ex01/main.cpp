#include <iostream>
#include <ctype.h>
#include "C_Phonebook.hpp"

int main(void)
{
	std::string		line = "";
	Phonebook *phonebook = new Phonebook;

	while(1)
	{
		std::cout << "Waiting for instruction" << std::endl;
		std::getline(std::cin, line);
		if (line == "EXIT")
			exit(1);
		if (line == "ADD")
		{
			if (phonebook->getcontact_count() == 8)
				std::cout << "Contact List is Full" << std::endl;
			else
				phonebook->create_new_contact();
		}
		if (line == "SEARCH")
		{
			if (phonebook->getcontact_count() == 0)
				std::cout << "No contact in book" << std::endl;
			else
				phonebook->search_contact();
		}
	}
}
