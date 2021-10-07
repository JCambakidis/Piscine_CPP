#include "C_Contact.hpp"



Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::setfirstname(std::string first_name)
{
	this->_first_name = first_name;
};

void	Contact::setlastname(std::string last_name)
{
	this->_last_name = last_name;
};

void	Contact::setnickname(std::string nickname)
{
	this->_nickname = nickname;
};

void	Contact::setphone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
};

void	Contact::setdarkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
};

std::string	Contact::getfirstname(void)
{
	return _first_name;
};

std::string	Contact::getlastname(void)
{
	return _last_name;
};

std::string	Contact::getnickname(void)
{
	return _nickname;
};

std::string	Contact::getphone_number(void)
{
	return _phone_number;
};

std::string	Contact::getdarkest_secret(void)
{
	return _darkest_secret;
};