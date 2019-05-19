#include <iostream>
#include <vector>
#include <numeric>
#include <array>
using namespace std;

int main()
{
  int N = 2 /*Hobbies*/, Y = 1 /*Applicants*/;
  int skill_level;
  string outcome;
  char applicant;
  vector<char> applicants;
  string hobby;
  vector<string> hobbies;
  vector<char> winners;
  vector<char> losers;
  int total_skill;

  for (int i = 1; i <= Y; i++)
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
    
  vector<vector<int> > skills;
  vector<int> temp;

  for (int i = 0; i < applicants.size(); i++)
    {
      for (int j = 0; j < hobbies.size(); j++)
	{
	  cout << "Enter skill level for each hobby between 1 and 3: \n";
	  cin >> skill_level;
	  temp.push_back(skill_level);
	}
      skills.push_back(temp);
    }


  cout << "{";
  for (int i = 0; i < Y; i++)
    {
      cout << "{";
      for (int j = 0; j < skills.size(); j++)
	{
	  cout << skills[i][j];
	}
      cout << "}";
    }
  cout << "}\n";

			      
  // for (int i = 0; i < skills.size(); i++)
  //   {
  //     cout << skills[i] << " ";
  //   }
  // cout << "\n";

  
  
  // for (int j = 1; j <= skills.size(); j++)
  //   {
  //     total_skill = accumulate(skills.begin(), skills.end(), 0.0);
  //   }
  
  // if (total_skill >= 3*skills.size()/2)
  //   {
  //     winners.push_back(i);
  //   }
  // else
  //   {
  //     losers.push_back(i);
  //   }

			      
  // cout << "Winners: {";
  // for (int i = 0; i < winners.size(); i++)
  //   {
  //     cout << winners[i];
  //   }
  // cout << "}\n";
  
  // cout << "Losers: {";
  // for (int i = 0; i < losers.size(); i++)
  //   {
  //     cout << losers[i];
  //   }
  // cout << "}\n";
}
