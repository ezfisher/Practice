#include <iostream>
#include <cmath>

int main()
{
  std::string string;
  std::cout << "Enter a string of letters: \n";
  std::cin >> string;

  for (int i = 0; i < string.size(); i++)
    {
      if (islower(string[i]))
	{
	  toupper(string[i]);
	}
    }
}
