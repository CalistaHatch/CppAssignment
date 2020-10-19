# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#include <iostream>
using namespace std;
 
int main()
{
  int n, i;
  bool Num_is_Prime = true;
 
  cout << "Enter a positive number:  ";
  cin >> n;
 
  for(i = 2; i <= n / 2; i++)
  {
      if(n % i == 0)
      {
          NumisPrime = false;
          break;
      }
  }
  if (Num_is_Prime)
      cout <<n<<" is a prime number "<<endl;
  else
      cout <<n<<" is not a prime number"<<endl;
 
  return 0;
}



```

2. **What bug does the original code have?**

'NumisPrime' was not declared in this scope
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
The thing I have defined was 'Num_is_Prime'

4. **How to correct the bug?**

change NumisPrime into Num_is_Prime

5. **The corresponding bug-free code or code snippet is:**


 for(i = 2; i <= n / 2; i++)
  {
      if(n % i == 0)
      {
          Num_is_Prime = false;
          break;
      }
  }

```
bug-free code or code snippet goes here

```

6. **What is the take-away message from this bug?**

Check the name of what you've defined

---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>
using namespace std;
 
int main()
{
  int n, i;
  bool Num_is_Prime = true;
 
  cout << "Enter a positive number:  ";
  cin >> n;
 
  for(i = 2; i <= n / 2; i++)
  {
      if(n % i = 0)
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


```

2. **What bug does the original code have?**

Lvalue required ad left operand of assignment
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

In c++ we use double equal symbol to describe equal

4. **How to correct the bug?**

change '=' into '=='

5. **The corresponding bug-free code or code snippet is:**

```
 for(i = 2; i <= n / 2; i++)
  {
      if(n % i = 0)
      {
          Num_is_Prime == false;
          break;
      }
  }

```

6. **What is the take-away message from this bug?**

Don't take things for granted in the usual way, what we believe in real life is not true for program sometimes.

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
#include<iostream>

using namespace std;

void type9(int arr[ ], int size, int n)
{
    for (int c = 0; c<size; c++)
    {
        if (arr[ c ] > n)
        {
           cout << arr[ c ] << " ";
        }
    }
    cout << endl;
}

int main(){

    int arr[ ] = {10,20,30,40,50,60,70,80,99};
    int size = 9;
    int n;
    
    cout << "The arrays are given below: \n"<<endl;
    
    for (int c = 0; c<size; c++){
        cout << arr[ c ]<<"  ";
    }
    cout << endl;

    cout << "Please enter a number : ";
    cin >> n;
    cout<<endl;
    type8(arr,size,n);  
}


```

2. **What bug does the original code have?**

'type8' was not declared in this scope
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**

I was going to use 8 arrays which is without 99, so the name was type8 not type9


4. **How to correct the bug?**

Change type8 to type0

5. **The corresponding bug-free code or code snippet is:**

```
    cout << "The arrays are given below: \n"<<endl;
    
    for (int c = 0; c<size; c++){
        cout << arr[ c ]<<"  ";
    }
    cout << endl;

    cout << "Please enter a number : ";
    cin >> n;
    cout<<endl;
    type9(arr,size,n);  
}


```

6. **What is the take-away message from this bug?**

I should take care to unify the names， or just use some simple names such as function 1 or 2.

