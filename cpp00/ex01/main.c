#include "PhoneBook.hpp"

void	display_string(std::string str)
{
	std::cout << str << std::endl;
}

int main(int ac, char *av[])
{
	PhoneBook phone_book;
	Contact cont;
	if (ac != 1)
		return (1);
	std::cout << av[0] << std::endl;

	cont.setName("pedro");
	phone_book.setContact(cont, 0);
	display_string(phone_book.getContact(0).getName());
	return (0);
}
