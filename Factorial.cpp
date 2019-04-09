#include <iostream>
using namespace std;

int main()
{
  int N; // Number to take the factorial of
  int i; // Indexing
  int Prod = 1; // Product of all numbers less than the user input
  cout << "Choose an integer: " << "\n";
  cin >> N;
  for(i = 1; i<=N; i++)
    {
      Prod = Prod*i;
    }
  cout << Prod << "\n";
}
