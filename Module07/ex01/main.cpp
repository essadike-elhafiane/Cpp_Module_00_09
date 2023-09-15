#include "iter.hpp"


template  <typename type>
void function(const type &s)
{
    std::cout << s << " ";
}

int main() {

  int intArray[] = {1, 2, 3, 4, 5};
  double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  char charArray[] = {'H', 'e', 'l', 'l', 'o'};

  std::cout << "intArray: ";
  iter(intArray, 5, function<int>);
  std::cout << std::endl;

  std::cout << "doubleArray: ";
  iter(doubleArray, 5, function<double>);
  std::cout << std::endl;

  std::cout << "charArray: ";
  iter(charArray, 5, function<char>);
  std::cout << std::endl;

  return 0;
}