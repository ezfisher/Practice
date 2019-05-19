#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool isVowel(char c)
{
  return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main()
{
  string testString = "baceb";
  int flag = 0;
  char c[testString.length()];
    
  for (int i = 0; i < testString.length(); i++)
    {
      c[i] = testString[i];
      if (islower(c[i]))
	{
	  c[i] = toupper(c[i]);
	}
      
      if (isVowel(c[i]))
	{
	  flag += (testString.length() - i)*(i + 1);
	}
    }
  cout << "Vowel score = " << flag << endl;
}
