#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
  int N;
  int num_floors = 7; // Total number of floors in the building
  char lift;
  int fl_A, fl_B; // Current floor lift A or B is on
  
  cout << "Enter current floor number: ";
  cin >> N;

  if (N > num_floors || N < 1)
    {
      cout << "Invalid floor number, select again: ";
      cin >> N;
    }
  
  fl_A = 1;
  fl_B = 7;

  int dist_A = abs(N - fl_A);
  int dist_B = abs(N - fl_B);

  if (dist_A < dist_B)
    {
      lift = 'A';
    }
  else if (dist_A > dist_B)
    {
      lift = 'B';
    }
  else
    {
      if (fl_A < N)
  	{
  	  lift = 'A';
  	}
      else
  	{
  	  lift = 'B';
  	}
    }

  cout << lift << "\n";
}
