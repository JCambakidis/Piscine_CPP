#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "C_Contact.hpp"

class Phonebook
{
	private:
		Contact _contact_list[8];
		int		contact_count;
	public:
		Phonebook(void);
		~Phonebook(void);
		void	create_new_contact(void);
		void	search_contact(void);
		int	getcontact_count(void);
};

#endif