#include <iostream>
#include <string>
using namespace std;

int main()
{
  int flag = 0;
  string s1;
  string s2;
  string verdict; // Yes or no indicating equivalent or nonequivalent strings

  cout << "Enter first string: \n";
  cin >> s1;

  cout << "Enter second string: \n";
  cin >> s2;

  for (int i = 0; i < s1.length(); i++)
    {
      for (int j = 0; j < s2.length(); j++)
	{
	  if (s1[i] == s2[j])
	    {
	      flag++;
	      continue;
	      
	      if (flag == s1.length())
		{
		  break;
		}
	    }
	}
    }
  if (flag == s1.length())
    {
      verdict = "Yes";
    }
  else
    {
      verdict = "No";
    }
  
  cout << verdict << "\n";
}
