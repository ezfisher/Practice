#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  vector<int> V;
  int i; // Address of array element
  int j;
  int Prod = 1;
  
  cout << "Enter the size of the array" << "\n";
  cin >> n;
  for (i = 0; i < n; i++)
    {
      cout << "Enter a number" << "\n";
      cin >> j;
      V.push_back (j);
      j = V[i];
      Prod = Prod*V[i];
    }
  cout << "V = " << "{";
  for (i = 0; i < V.size(); i++)
    {
      cout << V[i];
    }
  cout << "}";
  cout << "\n";
  cout << "The product of the elements of the vector is "<< Prod << "\n";
}
