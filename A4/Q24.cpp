//Q24
//Calista Hatch
  
  #include <iostream>
using namespace std;
 
int main()
{
  int n, i;
  bool Num_is_Prime = true;
 
  cout << "Enter a positive number:  ";
  cin >> n;
 
  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          Num_is_Prime = false;
          break;
      }
  }
  if (Num_is_Prime)
      cout <<n<<" is a prime number "<<endl;
  else
      cout <<n<<" is not a prime number"<<endl;
 
  return 0;
}
