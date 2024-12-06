#ifndef PHONEBOOK_H
#define PHONEBOOK_K

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
	public:
		PhoneBook() {};
		Contact	getContact(size_t index){ return (contact[index]); };
		void	setContact(Contact con, size_t index) {contact[index] = con; };
};

#endif
