#include <iostream>
#include <ctype.h>
#include <iomanip>
#include <string>
#include "C_Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->contact_count = 0;
	return ;
};

Phonebook::~Phonebook(void)
{
	return ;
};

int	Phonebook::getcontact_count(void)
{
	return this->contact_count;
}

void	push_back(void **array, void *element_to_add)
{
	int i = 0;

	while(array[i])
		i++;
	array[i] = element_to_add;
}

void	Phonebook::create_new_contact(void)
{
	Contact	*contact = new Contact();
	std::string	line;

	std::cout << "first name" << std::endl;
	std::getline(std::cin, line);
	contact->setfirstname(line);
	std::cout << "last name" << std::endl;
	std::getline(std::cin, line);
	contact->setlastname(line);
	std::cout << "nickname" << std::endl;
	std::getline(std::cin, line);
	contact->setnickname(line);
	while(1)
	{
		std::cout << "phone number" << std::endl;
		std::getline(std::cin, line);	
		if (line.find_first_not_of("0123456789") != std::string::npos)
			std::cout << "This is not a number" << std::endl;
		else
		{
			contact->setphone_number(line);
			break ;
		}
	}
	std::cout << "darkest secret" << std::endl;
	std::getline(std::cin, line);
	contact->setdarkest_secret(line);

	this->_contact_list[this->contact_count++] = *contact;
	std::cout << "Contact is added" << std::endl;
}

std::string	strlen_checker(std::string str)
{
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.append(".");
	}
	return str;
}

void	show_contacts(Contact contact, int index)
{

	std::cout << std::right << std::setw(10) << index << "|";
	std::cout << std::setw(10) << strlen_checker(contact.getfirstname()) << "|";
	std::cout << std::setw(10) << strlen_checker(contact.getlastname()) << "|";
	std::cout << std::setw(10) << strlen_checker(contact.getnickname()) << std::endl;
}

void	show_contact_information(Contact contact)
{
	std::cout << "First name : " << contact.getfirstname() << std::endl;
	std::cout << "Last name : " << contact.getlastname() << std::endl;
	std::cout << "Nickname : " << contact.getnickname() << std::endl;
	std::cout << "Phone number: " << contact.getphone_number() << std::endl;
	std::cout << "Darkest secret : " << contact.getdarkest_secret() << std::endl;
}

void	Phonebook::search_contact(void)
{
	std::string	line;
	std::cout << "index     |" << "first name|" << "last name |" << "nickname  " << std::endl;
	for (int i = 0; i < this->contact_count; i++)
		show_contacts(this->_contact_list[i], i);
	while (1)
	{
		std::cout << "Enter index of contact you want to see" << std::endl;
		std::getline(std::cin, line);
		int tmp = stoi(line);
		if (line.find_first_not_of("0123456789") != std::string::npos)
			std::cout << "This is not a number" << std::endl;
		else if (tmp >= this->contact_count)
			std::cout << "Index not valid" << std::endl;
		else
		{
			show_contact_information(this->_contact_list[tmp]);
			break ;
		}

	}
}
