#include <iostream>
using namespace std;


int main()
{
  int i;
  int N;
  int W;
  int H;
  int L;

  cout << "Enter number of pictures: " << "\n";
  cin >> N;
  L = 200;
  
  for (i = 1; i <= N; i++)
    {
      cout << "Enter width" << "\n";
      cin >> W;
      cout << "Enter height" << "\n";
      cin >> H;
      
      if (W < L || H < L)
	{
	  cout << "UPLOAD ANOTHER" << "\n";
	}
      else if (W >= L && H >= L && W == H)
	{
	  cout << "ACCEPTED" << "\n";
	}
      else
	{
	  cout << "CROP IT" << "\n";
	}
    }
}
