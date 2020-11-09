# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

```
{
  protected:
   string studentName
   string studentNumber
 int age;
  public:
   Student(){}
   Student(string name, string number, int age)
 {
  this -> studentName = name;
  this -> studentNumber = number;
  this -> age = age;
 }

```

2. **What bug does the original code have?**
In both classes i did not put terminating statement at the end of class
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
I think like functions definition we do not put semicolon at the last of class.


4. **How to correct the bug?**
Just put semicolon at the end of both classes.
5. **The corresponding bug-free code or code snippet is:**

```
{
  protected:
   string studentName;
   string studentNumber;
 int age;
  public:
   Student(){}
   Student(string name, string number, int age)
 {
  this -> studentName = name;
  this -> studentNumber = number;
  this -> age = age;
 }

```

6. **What is the take-away message from this bug?**
Classes have to end with a semicolon.
---
# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
#include <iostream>
using namespace std;
class Student
{
 int age;
  public:
   string studentName;
   string studentNumber;
   Student(){}
   Student(string name, string number, int age)
  {
 this -> studentName = name;
 this -> studentNumber = number;
 this -> age = age;
  }
void setStudent(string name, string number, int age)
  {
 this -> studentName = name;
 this -> studentNumber = number;
 this -> age = age;
  }
#include <iostream>

int main() {
    std:cout << "Hello World!";
  
  return 0;
}

```

2. **What bug does the original code have?**
I put all the strings under public whereas it should have been in the protected head.
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
I thought that putting it in public would make it easier for me to access it later when I needed it.
4. **How to correct the bug?**
Remove strings from public and into protected header.
5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;
class Student
 {
  protected:
   string studentName;
   string studentNumber;
 int age;
  public:
   Student(){}
   Student(string name, string number, int age)
 {
  this -> studentName = name;
  this -> studentNumber = number;
  this -> age = age;
 }
 void setStudent(string name, string number, int age)
 {
  this -> studentName = name;
  this -> studentNumber = number;
  this -> age = age;
 }

```

6. **What is the take-away message from this bug?**

 To get my concepts clear and know the privledges of them so I can know when the protected files are to be used.

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
protected:
   string major;
  string campus;
 int year;
  public:
   KpuStudent():Student{}
   KpuStudent(string name, string number, int age, string m, string c,
int year) : Student(name, number, age)
 {
  this -> major = m;
  this -> campus = c;
  this -> year = year;
 }
 void setKpuStudent(string name, string number, int age, string m,
string c, int year;)
 {
  this -> major = m;
  this -> campus = c;
  this -> year = year;
   setStudent(name, number, age);
```

2. **What bug does the original code have?**
In the above code for both classes i am trying to acess private memeber of class by class object.
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
I had a misunderstanding that like other public members private members can be access through class object.
4. **How to correct the bug?**
Private members of a class can be accessed by public members of a class that is how to get access for private members.

5. **The corresponding bug-free code or code snippet is:**

```
protected:
   string major;
  string campus;
 int year;
  public:
   KpuStudent():Student(){}
   KpuStudent(string name, string number, int age, string m, string c,
int year) : Student(name, number, age)
 {
  this -> major = m;
  this -> campus = c;
  this -> year = year;
 }
 void setKpuStudent(string name, string number, int age, string m,
string c, int year)
 {
  this -> major = m;
  this -> campus = c;
  this -> year = year;
   setStudent(name, number, age);

```

6. **What is the take-away message from this bug?**
Private members cannot be access through class object they need public functions for accessing.
---

