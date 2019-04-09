#include <iostream>
#include <typeinfo>

bool isVowel(char ch)
{
  switch(toupper(ch))
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
      return true;
    default:
      return false;
    }
}

int main()
{
  std::string plateNum;
  int i;
  int even = 0;
  int odd = 0;
  int cons = 0;
  int vowel = 0;
  std::cout << "enter plate number: " << "\n";
  std::cin >> plateNum;
  
  for (i = 0; i < plateNum.size(); i++)
    {
      if (isalpha(plateNum[i]))
	{
	  if (islower(plateNum[i]))
	    {
	      toupper(plateNum[i]);
	    }
	  if (isVowel(plateNum[i]))
	    {
	      vowel++;
	      continue;
	    }
	  else
	    {
	      cons++;
	      continue;
	    }
	}
      if (isdigit(plateNum[i]))
	{
	  if (plateNum[i]%2 == 0)
	    {
	      even++;
	    }
	  else
	    {
	      odd++;
	    }
	}
    }
  if (cons == 0 && even == 0 || odd == 0)
    {
      std::cout << "Valid" << "\n";
    }
  else
    {
      std::cout << "Invalid" << "\n";
    }
}
