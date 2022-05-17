#include <iostream>
#include <string.h>
#include <fstream>

std::string	ft_replace(std::string line, std::string s1, std::string s2)
{
	size_t	len_s1 = s1.length();
	size_t i = 0;

	if (s1 == s2)
		return (line);
	for (i = line.find(s1, i); i != std::string::npos; i = line.find(s1, i))
	{
		line.erase(i, len_s1);
		line.insert(i, s2);
	}
	return (line);
}

void	check_argv(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong number of parameters. Expected 3" << std::endl;
		exit(1);
	}
	if (argv[2][0] == 0)
	{
		std::cout << "s1 is empty" << std::endl;
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	fin;
	std::ofstream	fout;
	std::string		tmp;

	check_argv(argc, argv);
	fin.open(argv[1]);
	if (fin.fail())
	{
		std::cout << "Error, opening file" << std::endl;
		return (1);
	}
	tmp.append(argv[1]).append(".replace");
	fout.open(tmp.c_str());
	if (fout.fail())
	{
		std::cout << "Error, opening file" << std::endl;
		return (1);
	}
	while (!fin.eof())
	{
		getline(fin, tmp);
		tmp = ft_replace(tmp, argv[2], argv[3]);
		fout << tmp;
		if (!fin.eof())
			fout << std::endl;
	}
	return (0);
}
