#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const double pi = 4*atan(1);
  double horlicks, max_dist /*Maximum possible distance to run*/, dist;
  int r = 10, i;
  double circumference = 2*pi*r;
  int days = 5; // Number of days going to instructor
  int toffees = 0;
  
  for (i = 1; i < days; i++)
    {
      horlicks = i;
      cout << "Horlicks " << horlicks << "\n";
      max_dist = 100*horlicks;

      while (dist < max_dist)
	{
	  if (dist + circumference >= max_dist)
	    {
	      cout << "Aman may have " << toffees << " toffees.\n";
	      break;
	    }
	  else
	    {
	      dist = dist + circumference;
	      toffees++;
	      continue;
	    }
	}
    }
}
