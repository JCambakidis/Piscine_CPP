#ifndef C_CONTACT_H
# define C_CONTACT_H
#include <iostream>



class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		
	public:
		Contact(void);
		~Contact(void);

		void	setfirstname(std::string first_name);
		void	setlastname(std::string last_name);
		void	setnickname(std::string nickname);
		void	setphone_number(std::string phone_number);
		void	setdarkest_secret(std::string darkest_secret);

		std::string	getfirstname(void);
		std::string	getlastname(void);
		std::string	getnickname(void);
		std::string	getphone_number(void);
		std::string	getdarkest_secret(void);
};

#endif
