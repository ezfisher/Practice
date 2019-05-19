#include <iostream>

int main()
{
  int N;

  std::cout << "Number of rungs on the ladder: \n";
  std::cin >> N;

  for (int i = 0; i < N; i++)
    {
      std::cout << "*  *\n";
      std::cout << "****\n";
      std::cout << "*  *\n";
    }
}
