Q24. Write a function that accept one positive integer argument and returns true if the argument is a prime number, or false otherwise. Write two test cases in the main function to verify the function you wrote.

For the definition of prime number, you can refer to the wikipedia: https://en.wikipedia.org/wiki/Prime_number

Further explanation of the prime number:

7 is prime because it can only be evenly divided by 1 and 7.
4 is not prime because it can be divided evenly by 1, 2, 4.
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
