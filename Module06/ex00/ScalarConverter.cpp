#include "ScalarConverter.hpp"

void	ScalarConverter::convert(std::string const & str)
{
	if (str == "nan" || str == "nanf")
		this->nan = true;
	else if (str == "-inf" || str == "-inff") 
		this->inf_ = true;
	else if (str == "inf" || str == "inff") 
		this->inf = true;
	else{
		if(isInt(str))
		{
			double max_int = atof(str.c_str());
			if (2147483647 < max_int || max_int < -21474836478)
				throw "Error overflow in int !";
			intValue = static_cast<int>(atoi(str.c_str()));
			doubleValue = static_cast<double>(intValue);
			floatValue = static_cast<float>(intValue);
			charValue = static_cast<char>(intValue);
		}
		else if (ischar(str))
		{
			charValue = str[0];
			intValue = static_cast<int>(charValue);
			doubleValue = static_cast<double>(charValue);
			floatValue = static_cast<float>(charValue);
		}
		else if(isDouble(str))
		{
			doubleValue = static_cast<double>(atof(str.c_str()));
			intValue = static_cast<int>(doubleValue);
			floatValue = static_cast<float>(doubleValue);
			charValue = static_cast<char>(doubleValue);
		}
		else if(isFlaot(str))
		{
			floatValue = static_cast<float>(atof(str.c_str()));
			charValue = static_cast<char>(floatValue);
			doubleValue = static_cast<double>(floatValue);
			intValue = static_cast<int>(floatValue);
		}
		else 
			throw "Error input not valide !";
	}
}

ScalarConverter:: ScalarConverter()
{
	charValue = 0;
	intValue = 0;
	doubleValue = 0.0;
	floatValue = 0.0;
	inf = false;
	inf_ = false;
	nan = false;
}

ScalarConverter::~ ScalarConverter()
{

}
bool ScalarConverter::ischar(std::string const &str)
{
    if (str.length() < 2)
        return true;
    return false;
}

bool ScalarConverter::isInt(std::string const & str)
{
    for(int i = 0; str[i]; i++)
    {	
        if(i == 0 && (str[0] == '-' || str[0] == '+'))
            i++;
        if(str[i] && (str[i] < '0' || str[i] > '9'))
            return false;
    }
    return true;
}

bool ScalarConverter::isFlaot(std::string const & str)
{
    int nump = 0;
    int numf = 0;
    int j = -1;

    while (str[++j])
    {
        if (str[j] == 'f')
            numf++;
        if (str[j] == '.')
            nump++;
    }
    if (nump != 1 || numf != 1 || str[str.length() -  1] != 'f' || str[0] == '.')
        return false;
    for(int i = 0; str[i]; i++)
    {	
        if(i == 0 && (str[0] == '-' || str[0] == '+'))
            i++;
        if (str[i] == '.' || str[i] == 'f')
            i++;
        if (str[i] && (str[i] < 48 || str[i] > '9'))
            return false;		
    }
    return true;
}

bool ScalarConverter::isDouble(std::string const & str)
{
    int nump = 0;
    int j = -1;

    while (str[++j])
    {
        if (str[j] == '.')
            nump++;
    }
    if (nump != 1 || str[0] == '.')
        return false;
    for(int i = 0; str[i]; i++)
    {	
        if(i == 0 && (str[0] == '-' || str[0] == '+'))
            i++;
        if (str[i] == '.')
            i++;
        if (str[i] && (str[i] < 48 || str[i] > '9'))
            return false;		
    }
    return true;
}

bool ScalarConverter::isnan() const
{
    if (this->nan)
        return true;
    return false;
}

bool ScalarConverter::isinf() const
{
    if (this->inf)
        return true;
    return false;
}

bool ScalarConverter::isinf_() const
{
    if (this->inf_)
        return true;
    return false;
}

int ScalarConverter::getIntValue() const
{
    return intValue;
}

char ScalarConverter::getCharValue() const
{
    return charValue;
}

float ScalarConverter::getFloatValue() const
{
    return floatValue;
}

double ScalarConverter::getDoubleValue() const
{
    return doubleValue;
}

std::ostream& operator << (std::ostream& os, ScalarConverter const & Sc)
{
	if (Sc.isinf())
	{
		os << "char value : impossible" << std::endl;
		os << "int value : impossible" << std::endl;
		os << "float value : +inff" << std::endl;
		os << "double value : +inf" << std::endl;
	}
	else if (Sc.isinf_())
	{
		os << "char value : impossible" << std::endl;
		os << "int value : impossible" << std::endl;
		os << "float value : -inff" << std::endl;
		os << "double value : -inf" << std::endl;
	}
	else if (Sc.isnan())
	{
		os << "char value : impossible" << std::endl;
		os << "int value : impossible" << std::endl;
		os << "float value : nanf" << std::endl;
		os << "double value : nan" << std::endl;
	}
	else{
		os << "int value : " << Sc.getIntValue() << std::endl; 
		if ((Sc.getCharValue() >= 0 && Sc.getCharValue() < 32) || Sc.getCharValue() == 127)
			os << "char value : " << "Non displayable" << std::endl; 
		else if (std::isprint(Sc.getCharValue()))
			os << "char value : " << Sc.getCharValue()<< std::endl;
		else
			os << "char value : " << "impossible" << std::endl;
		if (Sc.getFloatValue() - static_cast<int>(Sc.getFloatValue()) == 0)
			os << "float value : " << Sc.getFloatValue() <<".0f"<< std::endl;
		else
			os << "float value : " << Sc.getFloatValue() <<"f"<< std::endl;
		if (Sc.getDoubleValue() - static_cast<int>(Sc.getDoubleValue()) == 0)
			os << "double value : " << Sc.getDoubleValue()  << ".0" << std::endl; 
		else
			os << "double value : " << Sc.getDoubleValue()  << std::endl; 
	}
	return os;
}

ScalarConverter::ScalarConverter(ScalarConverter const & Sc)
{
	*this = Sc; 
}
ScalarConverter& ScalarConverter::operator = (ScalarConverter const & Sc)
{
	if (this != &Sc)
	{
		charValue = Sc.charValue;
		intValue = Sc.intValue;
		doubleValue = Sc.doubleValue;
		floatValue = Sc.floatValue;
		inf = false;
		inf_ = false;
		nan = false;
	}
	return (*this);
}
