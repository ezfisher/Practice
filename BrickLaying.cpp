#include <cmath>
#include <iostream>
using namespace std;

int main()
{
  int i; // Counting which round it is
  int n_rounds = 0;
  int r; // Counts the round (one person going is defined as a round)
  int N; // Number of bricks
  int N_rem; // Number of remaining bricks
  string winner;

  cout << "Input number of bricks: ";
  cin >> N;
  cout << "\n";

  N_rem = N;

  for (i = 1; i <= N; i++)
    {
      if (i%2 != 0)
	{
	  N_rem = N_rem - i;
	}
      else
	{
	  N_rem = N - 3*(i-1);
	  N_rem = N_rem - 2*i;
	}

      if (N_rem < 3*i)
	{
	  break;
	}
      n_rounds++;
    }
  if (n_rounds%2 != 0)
    {
      winner = "Patlu";
    }
  else
    {
      winner = "Motu";
    }
  cout << "The winner is " << winner  << "\n";
}
