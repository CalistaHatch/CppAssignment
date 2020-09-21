Bug 1

#include <iostream>
using namespace std;

int main(){
  int speed {20};
  int time {10};
  int distance {speed * time};
  cout << distance << endl;
  return 0
  }
  
  line 11 is missing ; after return 0
  This bug was a syntax error
  Have to add ; after return 0 
 
int main(){
  int speed {20};
  int time {10};
  int distance {speed * time};
  cout << distance << endl;
  return 0;
  }
  
  Always double check that the right syntax is there
  
  Bug 2 
  #include <iostream>

int main(){
  int speed {20};
  int time {10};
  int distance {speed * time};
  cout << distance << endl;
  return 0;
  }
  
  cout and endl was not declared
  Without std:: program will not run
  Adding std:: or using namespace std;
  
  #include <iostream>
using namespace std;

int main(){
  int speed {20};
  int time {10};
  int distance {speed * time};
  cout << distance << endl;
  return 0;
  }
  
  take away message is that I have to declare the all commands, like cout or endl
  
  Bug 3
  #include <iostream>
using namespace std;

int main(){
  int force {172.5};
  int area {27.5};
  int pressure {area / force};
  cout << pressure << endl;
  return 0;
  }
  
error: narrowing conversion 
int cannot hold a decimal number so the calculations wouldnt be accurate.
Need to use double in place of int

#include <iostream>
using namespace std;

int main(){
  double force {172.5};
  double area {27.5};
  double pressure {area / force};
  cout << pressure << endl;
  return 0;
  }
  
  Take away message from this bug is that it is important to check that the variable that is used will be the best fit.
  
  
  
