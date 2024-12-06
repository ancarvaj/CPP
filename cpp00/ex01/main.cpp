#include "PhoneBook.hpp"

Contact	ft_add_contact()
{
	Contact cont;
	std::string str;

	std::cout << "name of the contact: ";
	std::cin >> str;
	std::cout << std::endl;
	cont.setName(str);
	std::cout << "last name of the contact: ";
	std::cin >> str;
	std::cout << std::endl;
	cont.setLastName(str);
	std::cout << "nickname of the contact: ";
	std::cin >> str;
	std::cout << std::endl;
	cont.setNickname(str);
	std::cout << "dark secret of the contact: ";
	std::cin >> str;
	std::cout << std::endl;
	cont.setDarkSecret(str);
	return (cont);
}

void display(std::string str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	std::string	str;
	PhoneBook	book;

	while (str.compare("EXIT"))
	{
		std::cin >> str;
		if (!str.compare("ADD"))
		{
			book.setContact(ft_add_contact(), 0);
			display(book.getContact(0).getName());
		}
		//if (!str.compare("SEARCH"))
		//	ft_search();
	}
	return (0);
}
