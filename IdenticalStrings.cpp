#include <iostream>
#include <cstring>

int main()
{
  std::string s1;
  std::string s2;
  std::string result;
  int i;
  int j = 0;

  std::cout << "input any string of characters" << "\n";
  std::cin >> s1;

  std::cout << "input another string of characters" << "\n";
  std::cin >> s2;

  if (s1.length() != s2.length())
    {
      result = "Not identical";
    }

  for (i = 0; i < s1.length(); i++)
    {
      if (s1[i] == s2[i])
  	{
  	  j++;
  	}
      else
  	{
  	  break;
  	}
    }
  if (j == s1.length())
    {
      result = "Identical";
    }
  else
    {
      result = "Not identical";
    }
  std::cout << result << "\n";
}
