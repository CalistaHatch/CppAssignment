# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
//code with bugs or code snippet with bug goes here

#include<iostream>
#include<string.h> 

using namespace std;


class Student {  // defining a base student class
  private:
    string name;
    string e_year; //enrollment year is private member
  public:
  
   inline Student(){   // constructor use for assigning values to class members
        setname(name);
    }
    
    void setname (string n){ // mutator for assigning value to private member
         name = "Bob";
        e_year = "2020";
    }
    
    string getname () // accessor for acessing private member of class
    {
        return name;
    }
    
    string get_e_year(){
        return e_year;
    }
    
     void print_f(){ // function for printing data memeber'values
        cout<<" student name is "<<Student::getname()<<endl;
        cout<<" student enrollment year is "<<Student::get_e_year()<<endl;
    }
    
};


class KpuStudent : public Student //derived class from student
{ // a derived class from Student base class is construct for adding more variables
  private:
    string campus;
  public:
    
    KpuStudent() 
     {
         setcampus(campus);
     }
     
     void setcampus (string camp){  //mutator 
         campus = "Surrey";
     }
     
     string getcampus (){ //acessor
         return campus;
     }
     
// Online C++ compiler to run C++ online.
// Write C++ code in this online editor and run it.

#include <iostream>

int main() {
    std:cout << "Hello World!";
  
  return 0;
}

```

2. **What bug does the original code have?**
In the above code in every print_f did not include virtual that is why it displayed same information in the first class.
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
Actually i know it but forget to make virtual print_f function.

4. **How to correct the bug?**
Make every overridden function virtual by adding virtual keyword before function data type
5. **The corresponding bug-free code or code snippet is:**

```
#include<iostream>
#include<string.h> 

using namespace std;


class Student {  // defining a base student class
  private:
    string name;
    string e_year; //enrollment year is private member
  public:
  
   inline Student(){   // constructor use for assigning values to class members
        setname(name);
    }
    
    void setname (string n){ // mutator for assigning value to private member
        name = "Bob";
        e_year = "2020";
    }
    
    string getname () // accessor for acessing private member of class
    {
        return name;
    }
    
    string get_e_year(){
        return e_year;
    }
    
    virtual void print_f(){ // function for printing data memeber'values
        cout<<" student name is "<<Student::getname()<<endl;
        cout<<" student enrollment year is "<<Student::get_e_year()<<endl;
    }
    
};


class KpuStudent : public Student //derived class from student
{ // a derived class from Student base class is construct for adding more variables
  private:
    string campus;
  public:
    
    KpuStudent() 
     {
         setcampus(campus);
     }
     
     void setcampus (string camp){  //mutator 
         campus = "Surrey";
     }
     
     string getcampus (){ //acessor
         return campus;
     }
     
```

6. **What is the take-away message from this bug?**
In overridden function put virtual before it other wise you will get unexpected output.
---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
 class HogwartsStudent: public Student{  //another derived class
    private:
        string house_aff;
    public:
       HogwartsStudent(){
           sethouse(house_aff);
       }
       
      void sethouse(string house){
          house_aff ="Ravenclaw";
      }
      
      string gethouse_aff(){
          return house_aff;
      }
      
      virtual void print_f(){
          cout<<"Student name is "<< info.getname()<<endl;
          cout<<" Student house affilation is "<< HogwartsStudent::gethouse_aff()<<endl;
      }
      };

```

2. **What bug does the original code have?**

  In the above code in print_f function i called the getname function with object info.

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
Actually I had a misunderstanding that like in main function I can call public 
function with class object in the class but it shows info is not declared in this scope.

4. **How to correct the bug?**
In class it is easy to use scope resolution operator with class name to call the class functions inside the class.

5. **The corresponding bug-free code or code snippet is:**

```
class HogwartsStudent: public Student{
    private:
        string house_aff;
    public:
       HogwartsStudent(){
           sethouse(house_aff);
       }
       
      void sethouse(string house){
          house_aff ="Ravenclaw";
      }
      
      string gethouse_aff(){
          return house_aff;
      }
      
      virtual void print_f(){
          cout<<"Student name is "<< Student::getname()<<endl;
          cout<<" Student house affilation is "<< HogwartsStudent::gethouse_aff()<<endl;
      }


```

6. **What is the take-away message from this bug?**
Always call the function inside the class with scope resolution.

---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```

int main() // main function
{
   Student info; //object for acessing variables of classes but first base class constructor will be called
   Student *array[3] = {p1,p2,p3}; //array of pointers
   for(int i = 0; i<3; i++){ 
       array[i]-> print_f();
   }
   return 0;
}
```

2. **What bug does the original code have?**

  In the above code i forget to initialize pointer.


3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
Not a misunderstanding but I forgot in hurry.
4. **How to correct the bug?**
Initialize each pointer before using it.

5. **The corresponding bug-free code or code snippet is:**

```

int main() // main function
{
   Student info; //object for acessing variables of classes but first base class constructor will be called
   Student *p1 = new Student();
   Student *p2 = new KpuStudent(); //pointer initializer
   Student *p3 = new HogwartsStudent();
   Student *array[3] = {p1,p2,p3}; //array of pointers
   for(int i = 0; i<3; i++){ 
       array[i]-> print_f();
   }
   return 0;
}

```

6. **What is the take-away message from this bug?**
Write code very carefully and avoid silly mistakes.
