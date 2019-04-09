#include <iostream>
#include <cmath>
#include <vector>

int main()
{
  int SH, SM, EH, EM; // Starting hour and ending hours and minutes
  int N = 1; // Number of tasks
  int i;
  int sTrueTime;
  /* Starting true time - midnight is 0 and iterates up by minute*/
  int eTrueTime;
  /* Ending true time - midnight is 0 and iterates up by minute*/
  char AP; // Differentiates AM from PM
  double D[i]; // Vector of individual task durations
  int TDm = 0; // Total amount of time to do all tasks in minutes
  double Hours[i]; // Total amount of time to do all tasks in hours
  int Mins[i];

  /*std::cout << "Number of tasks:" << "\n";
    std::cin >> N;*/

  for (i = 0; i < N; i++)
    {
      std::cout << "Task beginning hour:" << "\n";
      std::cin >> SH;
      std::cout << "AM (a or A) or PM (p or P)" << "\n";
      std::cin >> AP;

      if (islower(AP))
	{
	  AP = toupper(AP);
	}

      if (AP = 'P')
	{ 
	  if (SH == 12)
	    {
	      SH = SH - 12;
	    }
	  else
	    {
	      SH = SH + 12;
	    }
	}
      
      std::cout << "Task beginning minute:" << "\n";
      std::cin >> SM;
      
      std::cout << "Task ending hour:" << "\n";
      std::cin >> EH;
      std::cout << "AM (a or A) or PM (p or P)" << "\n";
      std::cin >> AP;

      if (islower(AP))
	{
	  AP = toupper(AP);
	}

      if (AP = 'P')
	{
	  if (EH == 12)
	    {
	      EH = EH - 12;
	    }
	  else
	    {
	      EH = EH + 12;
	    }
	}
      
      std::cout << "Task ending minute:" << "\n";
      std::cin >> EM;

      sTrueTime = SH*60 + SM;
      eTrueTime = EH*60 + EM;
      D[i] = eTrueTime - sTrueTime;
      Hours[i] = floor(D[i]/60);
      Mins[i] = (D[i]/60 - floor(D[i]/60))*60;

      // Doesn't yet account for tasks that span over midnight.
    }
}
