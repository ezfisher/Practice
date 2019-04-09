#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  string ins;
  char L;
  char R;
  char D;
  char U;
  int i;
  int x = 0;
  int y = 0;

  cout << "Enter combination of directions (left = L, right = R, up = U, down = D" << "\n";
  cin >> ins;

  for (i = 0; i < ins.size(); i++)
    {
      if (ins[i] == 'L')
	{
	  x--;
	}
      else if (ins[i] == 'R')
	{
	  x++;
	}
      else if (ins[i] == 'D')
	{
	  y--;
	}
      else if (ins[i] == 'U')
	{
	  y++;
	}
      else
	{
	  continue;
	}
    }
  cout << x << " " << y << "\n";
}
