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
 error: 'case' statement not in switch statement
 Missing {} for the switch statement

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**


4. **How to correct the bug?**


5. **The corresponding bug-free code or code snippet is:**

```
bug-free code or code snippet goes here
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

---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
code with bugs or code snippet with bug goes here

```

2. **What bug does the original code have?**

  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

4. **How to correct the bug?**

5. **The corresponding bug-free code or code snippet is:**

```
bug-free code or code snippet goes here

```

6. **What is the take-away message from this bug?**

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
code with bugs or code snippet with bug goes here

```

2. **What bug does the original code have?**

  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

4. **How to correct the bug?**

5. **The corresponding bug-free code or code snippet is:**

```
bug-free code or code snippet goes here

```

6. **What is the take-away message from this bug?**
