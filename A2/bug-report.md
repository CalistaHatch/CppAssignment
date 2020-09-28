# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
//code with bugs or code snippet with bug goes here

#include <iostream>
using namespace std;
int main()
{
  int selection {};
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n";
  cout << "4. None of them!\n";
  cin >> selection;
  
  switch (selection)
  
  case 1 : cout << "Pi times radius squared\n";
  break;
  case 2 : cout << "Length times width\n";
  break;
  case 3 : cout << "Pi times radius squared times height\n";
  break;
  case 4 : cout << "Well okay then, good bye!\n";
  break;
  default : cout << "Not good with numbers, eh?\n";
  break;
  return 0;
  
}
```

2. **What bug does the original code have?** 
 The bug that this code has is error: 'case' statement not in switch statement.
 I am missing the curly brackets {} for the switch statement.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
I forgot to encapsulate the switch statement with curly brackets which lead to this code failing and the program wouldnt run.

4. **How to correct the bug?**
To correct this bug I will put { before case 1 and } after the last break in the switch statement.

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;
int main()
{
  int selection {};
  cout << "Which formula do you want to see?\n\n";
  cout << "1. Area of a circle\n";
  cout << "2. Area of a rectangle\n";
  cout << "3. Area of a cylinder\n";
  cout << "4. None of them!\n";
  cin >> selection;
  
  switch (selection)
  {
  case 1 : cout << "Pi times radius squared\n";
  break;
  case 2 : cout << "Length times width\n";
  break;
  case 3 : cout << "Pi times radius squared times height\n";
  break;
  case 4 : cout << "Well okay then, good bye!\n";
  break;
  default : cout << "Not good with numbers, eh?\n";
  break;
  return 0;
  }
}
  
```

6. **What is the take-away message from this bug?**
The takeaway message from this bug is that without defining the parameters of the switch statement the compiler couldn't understand this code.
---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
using namespace std;

int main(){

 int USD  {};
 int CAD {};
 int selection {};
  
  cout << "Please enter 1 for USD to CAD conversion or 2 for CAD to USD conversion" << endl;
  cin >> selection;
  
if (selection== 1){
    cout << "Enter amount of US dollars"<< endl;
    cin >> USD;
    cout << "USD amount converted to CAD is " << (USD * 1.32) << endl;
    }

else if (selection == 2){
  cout << "enter amount of Canadian dollars" <<endl;
  cin >> CAD;
  cout << "CAD amount converted to USD is " << (CAD / 1.32) << endl;
  }
 
else {
  cout << "Please enter 1 for USD to CAD conversion or 2 for CAD to USD conversion" << endl;
  cin >> selection;
  }
  
return 0;
}

```

2. **What bug does the original code have?**
The bug that this code has is that it uses "int" for the USD and CAD variables which if the user enters a decimal number for example 2.2, 
then the calculations for the conversion would be inaccurate.  
  
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
The missunderstanding was that assuming the user wouldn't enter a decimal instead of a whole number is why the variable int instead of double or float was chosen.

4. **How to correct the bug?**
To correct this bug the variable type of both USD and CAD will be changed to double instead of int.
5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;

int main(){

 double USD  {};
 double CAD {};
 int selection {};
  
  cout << "Please enter 1 for USD to CAD conversion or 2 for CAD to USD conversion" << endl;
  cin >> selection;
  
if (selection== 1){
    cout << "Enter amount of US dollars"<< endl;
    cin >> USD;
    cout << "USD amount converted to CAD is " << (USD * 1.32) << endl;
    }

else if (selection == 2){
  cout << "enter amount of Canadian dollars" <<endl;
  cin >> CAD;
  cout << "CAD amount converted to USD is " << (CAD / 1.32) << endl;
  }
 
else {
  cout << "Please enter 1 for USD to CAD conversion or 2 for CAD to USD conversion" << endl;
  cin >> selection;
  }
  
return 0;
}
  
  
```

6. **What is the take-away message from this bug?**
The takeaway message from this bug is that when choosing the variable types they must be the best fit for what is needed to be accurate. 
---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>;
using namespace std;

int main(){

  double USD  {};
  double CAD {};
  int selection {};
  cout << "Please enter 1 for USD to CAD conversion or 2 for CAD to USD conversion" << endl;
  cin >> selection;
  
if (selection== 1){
    cout << "Enter amount of US dollars"<< endl;
    cin >> USD;
    cout << "USD amount converted to CAD is " << (USD * 1.32) << endl;
  }

else if (selection == 2){
  cout << "enter amount of Canadian dollars" <<endl;
  cin >> CAD;
  cout << "CAD amount converted to USD is " << (CAD / 1.32) << endl;
  
  }
  else {
  cout << "Please enter 1 for USD to CAD conversion or 2 for CAD to USD conversion" << endl;
  cin >> selection;
  }
 
  return 0;
}
  
  


```

2. **What bug does the original code have?**
The bug that is in this code is warning: extra tokens at end of #include directive.
There is a ; (semicolon) after #include iostream.
  
3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
The misunderstanding of C++ concepts was that after every expression it is necesary to put ; a semicolon, but it does not need to be put after the #include iostream.

4. **How to correct the bug?**
To fix the bug I will remove the semi colon from after iostream

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;

int main(){

  double USD  {};
  double CAD {};
  int selection {};
  cout << "Please enter 1 for USD to CAD conversion or 2 for CAD to USD conversion" << endl;
  cin >> selection;
  
if (selection== 1){
    cout << "Enter amount of US dollars"<< endl;
    cin >> USD;
    cout << "USD amount converted to CAD is " << (USD * 1.32) << endl;
  }

else if (selection == 2){
  cout << "enter amount of Canadian dollars" <<endl;
  cin >> CAD;
  cout << "CAD amount converted to USD is " << (CAD / 1.32) << endl;
  
  }
  else {
  cout << "Please enter 1 for USD to CAD conversion or 2 for CAD to USD conversion" << endl;
  cin >> selection;
  }
 
  return 0;
}

```

6. **What is the take-away message from this bug?**
The take away message from this bug is that there are always exceptions to rules, and to be mindful of syntax errors.
