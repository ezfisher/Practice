#include <iostream>
#include <cmath>
#include <sstream>

int main()
{
  std::string ISBN;
  std::string verdict;
  int N;
  int num;
  int i;
  std::cout << "Enter 10 digit ISBN:" << "\n";
  std::cin >> ISBN;
  
  if (ISBN.size() != 10)
    {
      std::cout << "Illegal ISBN" << "\n";
    }
  for (i = 0; i < ISBN.size(); i++)
    {
      num = ISBN[i] - '0';
      N = N + (i + 1)*num;
    }
  std::cout << "N = " << N << "\n";
  if (N % 11 == 0)
    {
      verdict = "Legal ISBN";
    }
  else
    {
      verdict = "Illegal ISBN";
    }
  std::cout << verdict << "\n";
}

