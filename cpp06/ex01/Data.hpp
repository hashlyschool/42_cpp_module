#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	public:
		// Constructors
		Data();
		Data(const Data &copy);
		Data(std::string value);

		// Destructor
		~Data();

		// Operators
		Data & operator=(const Data &assign);

		// Getters / Setters
		std::string getValue() const;

	private:
		std::string _value;

};

#endif
