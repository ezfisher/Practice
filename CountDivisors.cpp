#include<iostream>
using namespace std;

int main()
{
  int l;
  int r;
  int k;
  int i;
  int j = 0;
  cout << "Enter random integer l (1 <= l <= 1000): " << "\n";
  cin >> l;
  cout << "Enter random integer r (l <= r <= 1000): " << "\n";
  cin >> r;
  cout << "Enter random integer k (1 <= k <= 1000): " << "\n";
  cin >> k;

  for (i = l; i <= r; i++)
    {
      if (i % k == 0)
	{
	  j++;
	}
    }
  cout << "There are " << j << " numbers between " << l << " and " << r << " that are evenly divisible by " << k << "\n";
}
