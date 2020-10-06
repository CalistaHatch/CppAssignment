# Bug 1

1. **The incorrect original code or code snippit that you wrote:**

``` cpp
//#include <iostream>
using namespace std;

int main()
{
        int numStudents;
        int numDays;
        float numHours, total, average;
    int student,day = 0;     

        cout << "This program will find the average number of hours a day 
         << " that a student spent programming over a long weekend\n\n;
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents; 

        cout << "Enter the number of days in the long weekend" << endl;
        cin >> numDays;
        cout << endl;
       
    for( student = 1; student <= numStudents; student++)
    {
                total = 0;
                for(day = 1; day <= numDays; day++)
                {
                        cout << "Please enter the number of hours worked by student " 
                                 << student <<" on day " << day << "." << endl;
            cin >> numHours;

            total = total + numHours;
                }

        average = total / numDays;

                cout << endl;
                cout << "The average number of hours per day spent programming by "
                     << "student " << student << " is " << average
                         << endl << endl << endl;
        }

    return 0;   
}


```

2. **What bug does the original code have?**
The bug that this code has is error: missing terminating " character x2
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
I should code like cout<<""; then type the sentense that I need

4. **How to correct the bug?**
Add " character for them

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>
using namespace std;

int main()
{
        int numStudents;
        int numDays;
        float numHours, total, average;
    int student,day = 0;     

        cout << "This program will find the average number of hours a day" 
         << " that a student spent programming over a long weekend\n\n";
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents; 

        cout << "Enter the number of days in the long weekend" << endl;
        cin >> numDays;
        cout << endl;
       
    for( student = 1; student <= numStudents; student++)
    {
                total = 0;
                for(day = 1; day <= numDays; day++)
                {
                        cout << "Please enter the number of hours worked by student " 
                                 << student <<" on day " << day << "." << endl;
            cin >> numHours;

            total = total + numHours;
                }

        average = total / numDays;

                cout << endl;
                cout << "The average number of hours per day spent programming by "
                     << "student " << student << " is " << average
                         << endl << endl << endl;
        }

    return 0;   
}

```

6. **What is the take-away message from this bug?**
Without " character, it will affect the next sentense, which will say expected primary-expression before << token
---

# Bug 2

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>

using namespace std;

int main()
{
    string sentence, word = "", translated = "";                               
    cout<<"Please enter the original sentence: ";                               
    getline(cin, sentence);                                                   
    for(int i=0; i<sentence.length();i++){                                     
        if(sentence[i] == ' '){                                              
            translated = translated + word.substr (1,string::npos)+ word[0] + "KPU ";   
            word = "";                                                          
        }
        if else{                                                                 
            word = word + (char)toupper(sentence[i]);                          
        }
    }
    translated = translated + word.substr (1,string::npos)+ word[0] + "KPU ";   
    cout<<"\nTranslated: "<<translated;                                         
    return 0;
}

```

2. **What bug does the original code have?**
for sentense 138, shouldn't use if else but else
  
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
If and else if blocks are mutually exclusive in nature

4. **How to correct the bug?**
change else if to if

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>

using namespace std;

int main()
{
    string sentence, word = "", translated = "";                               
    cout<<"Please enter the original sentence: ";                               
    getline(cin, sentence);                                                   
    for (int i=0; i<sentence.length(); i++) {                                     
        if(sentence[i] == ' '){                                              
            translated = translated + word.substr (1,string::npos)+ word[0] + "KPU ";   
            word = "";                                                          
        }
        else{                                                                 
            word = word + (char)toupper(sentence[i]);                          
        }
    }
    translated = translated + word.substr (1,string::npos)+ word[0] + "KPU ";   
    cout<<"\nTranslated: "<<translated;                                         
    return 0;
}



```

6. **What is the take-away message from this bug?**
If the first one is false, then the second one which is "else if" will be made.
---

# Bug 3

1. **The incorrect original code or code snippit that you wrote:**

```
#include <iostream>

using namespace std;

int main()
{
    string sentence, word = "", translated = "";                               
    cout<<"Please enter the original sentence: ";                               
    getline(cin, sentence);                                                   
    for (int i=0; i<sentence.length(); i++) {                                     
        if(sentence[i] == ' '){                                              
            translated = translated + word.substr (1,string::npos)+ word[0] + "KPU ";   
            word = "";                                                          
        }
        else{                                                                 
            word = word + (char)toupper(sentence[i]);                          
        }
    }
    translated = translated + word.substr (1,string::npos)+ word[0] + "KPU ";   
    cout<<"\nTranslated: "<<translated;                                         
    return 0;
}

```

2. **What bug does the original code have?**
It will show the warning:comparison between signed and unsigned integer expressions [-Wsign-compare]
  
  

3. **What misunderstanding of C++ concepts lead you to this incorrect code?**
I didn't think of the relationship between Unsigned integer and signed integer


4. **How to correct the bug?**
change int i=0 to unsigned int i=0

5. **The corresponding bug-free code or code snippet is:**

```
#include <iostream>

using namespace std;

int main()
{
    string sentence, word = "", translated = "";                               
    cout<<"Please enter the original sentence: ";                               
    getline(cin, sentence);                                                   
    for (unsigned int i=0; i<sentence.length(); i++) {                                     
        if(sentence[i] == ' '){                                              
            translated = translated + word.substr (1,string::npos)+ word[0] + "KPU ";   
            word = "";                                                          
        }
        else{                                                                 
            word = word + (char)toupper(sentence[i]);                          
        }
    }
    translated = translated + word.substr (1,string::npos)+ word[0] + "KPU ";   
    cout<<"\nTranslated: "<<translated;                                         
    return 0;
}



```

6. **What is the take-away message from this bug?**
An unsigned integer should not compared with a signed integer
