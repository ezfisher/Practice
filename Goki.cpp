#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
  int N = 1, Y;
  int skill_level;
  vector<int> skills;
  string outcome;
  char applicant;
  vector<char> applicants;
  string hobby;
  vector<string> hobbies;
  vector<char> winners;
  vector<char> losers;
  int app_skills;

  cout << "Number of applicants \n";
  cin >> Y;

  for (int i  = 1; i <= Y; i++)
    {
      cout << "Applicant: ";
      cin >> applicant;
      cout << "\n";
      applicants.push_back(applicant);
    }

  for (int i = 0; i < N; i++)
    {
      cout << "Hobby: ";
      cin >> hobby;
      hobbies.push_back(hobby);
    }
  
  for (int i = 0; i < applicants.size(); i++)
    {
      for (int j = 0; j < hobbies.size(); j++)
	{
	  cout << "Enter skill level for each hobby (1=worst, 3=best) \n";
	  cin >> skill_level;
	  skills.push_back(skill_level);
	}
    }
  
  for (int i = 0; i < applicants.size(); i++)
    {
      for (int j = 1; j <= skills.size(); j++)
	{
	  app_skills = accumulate(skills.begin(), skills.end(), 0.0);
	  if (app_skills >= 3*skills.size()/2)
	    {
	      winners.push_back(i);
	    }
	  else
	    {
	      losers.push_back(i);
	    }
	}
    }
  cout << "Winners: {";
  for (int i = 0; i < winners.size(); i++)
    {
      cout << winners[i];
    }
  cout << "}\n";
  
  cout << "Losers: {";
  for (int i = 0; i < losers.size(); i++)
    {
      cout << losers[i];
    }
  cout << "}\n";
}
