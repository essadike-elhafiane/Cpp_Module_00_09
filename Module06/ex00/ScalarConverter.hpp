#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>
class  ScalarConverter
{   
	private:    
		char    charValue;
		int     intValue;
		float	floatValue;
		double	doubleValue;
		bool	nan;
		bool	inf;
		bool	inf_;
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & Sc);
		ScalarConverter& operator = (ScalarConverter const & Sc);
		void	convert(std::string const & str);

		bool ischar(std::string const &str);

		bool isInt(std::string const & str);

		bool isFlaot(std::string const & str);

		bool isDouble(std::string const & str);

		bool isnan() const;
		bool isinf() const;
		bool isinf_() const;
		int getIntValue() const;
		char getCharValue() const;
		float getFloatValue() const;
		double getDoubleValue() const;
		~ ScalarConverter();
};
std::ostream& operator << (std::ostream& os, ScalarConverter const & Sc);




#endif