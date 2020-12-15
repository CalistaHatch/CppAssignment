//Q7. 
#include <iostream>
#include <fstream>
using namespace std;

int main()
 {
  /*make a object*/
  ifstream finish;
  /*declare the variable*/
  string line,file;
int n;
  /*take input from user*/
  cout<<"Enter file name:";
   cin>>file;
  cout<<"Enter the number of line:";
   cin>>n;
/*open a file*/
 finish.open(file);
  while(finish && n>0) 
  {
  // Read a Line from file
    getline(finish, line);
    // Write line in Console
     cout << line << endl;
       n--;
   }
finish.close();

if(n!=0)

{
cout<<endl<<"The complete file has been displayed \n";

}
return 0;
}
