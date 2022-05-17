#include "HarlFilter.hpp"

int	main(int argc, char **argv){
	Harl	Harl;

	if (argc != 2)
	{
		std::cout << "wrong number of parameters. Expected 1" << std::endl;
		return (1);
	}
	Harl.setLevel(argv[1]);
	Harl.complain("DEBUG");
	Harl.complain("INFO");
	Harl.complain("WARNING");
	Harl.complain("ERROR");
	// std::cout << "--------ALL--------" << std::endl;
	// {
	// 	Harl.complain("DEBUG");
	// 	Harl.complain("INFO");
	// 	Harl.complain("WARNING");
	// 	Harl.complain("ERROR");
	// }
	// std::cout << "--------Level ERROR--------" << std::endl;
	// {
	// 	Harl.setLevel("ERROR");
	// 	Harl.complain("DEBUG");
	// 	Harl.complain("INFO");
	// 	Harl.complain("WARNING");
	// 	Harl.complain("ERROR");
	// }
	// std::cout << "--------Level WARNING--------" << std::endl;
	// {
	// 	Harl.setLevel("WARNING");
	// 	Harl.complain("DEBUG");
	// 	Harl.complain("INFO");
	// 	Harl.complain("WARNING");
	// 	Harl.complain("ERROR");
	// }
	// std::cout << "--------Level INFO--------" << std::endl;
	// {
	// 	Harl.setLevel("INFO");
	// 	Harl.complain("DEBUG");
	// 	Harl.complain("INFO");
	// 	Harl.complain("WARNING");
	// 	Harl.complain("ERROR");
	// }
	// std::cout << "--------Level DEBUG--------" << std::endl;
	// {
	// 	Harl.setLevel("DEBUG");
	// 	Harl.complain("DEBUG");
	// 	Harl.complain("INFO");
	// 	Harl.complain("WARNING");
	// 	Harl.complain("ERROR");
	// }
	// std::cout << "--------Level SWITCH_OFF--------" << std::endl;
	// {
	// 	Harl.setLevel("SWITCH_OFF");
	// 	Harl.complain("DEBUG");
	// 	Harl.complain("INFO");
	// 	Harl.complain("WARNING");
	// 	Harl.complain("ERROR");
	// }
	// std::cout << "--------Level WARNING--------" << std::endl;
	// {
	// 	Harl.setLevel("WARNING");
	// 	Harl.complain("DEBUG");
	// 	Harl.complain("INFO");
	// 	Harl.complain("WARNING");
	// 	Harl.complain("ERROR");
	// }
	return (0);
}
