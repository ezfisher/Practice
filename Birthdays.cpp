#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
  int n;
  int birth[n];
  int i;
  cout << "Enter number of people: ";
  cin >> n;
  
  for (i = 1; i <= n; i++)
    {
      srand(time(NULL));
      birth[i] = rand() % 366;
      cout << birth[i] << "\n";
    }
}
