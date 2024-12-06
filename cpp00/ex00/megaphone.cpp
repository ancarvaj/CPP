#include <iostream>
#include <cstring>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	size_t j;
	for (int i = 1; i < argc; i++)
	{
		for (j = 0; j < std::strlen(argv[i]); j++)
			argv[i][j] = std::toupper(argv[i][j]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return (0);
}
