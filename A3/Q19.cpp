Q19. Modify the program from Q18 so that it also finds the average number of hours per day that a given student studies biology as well as programming. 
For each given student include two prompts, one for each subject. Have the program print out which subject the student, on average, spent the most time on.

// CALISTA HATCH

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average;
  float numBHours, Btotal, Baverage;
	int student, day = 0;	// these are the counters for the loops
  int n {};
  int nb {};
	
  cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;
  cout << "how many days spent programming?"<< endl;
  cin >> n;
  cout << "how many days spent on biology?"<< endl; 
  cin >> nb;

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;

		 for (day = 1; day <= n; day++)
		 {
			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << day << " for programming." << endl;
			cin >> numHours;

			total = total + numHours;
		 }
    average = total / n;

    
    for (day = 1; day <= nb; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << day << " for biology." << endl;
			cin >> numBHours;

			Btotal = Btotal + numBHours;
		}

		Baverage = Btotal / nb;

		cout << endl;
		cout << "The average number of hours per day spent programming by "
			 << "student " << student << " is " << average
       
			 << endl << endl << endl;
    
    cout << "The average number of hours per day spent on biology by "
			 << "student " << student << " is " << Baverage
	         << endl << endl << endl;
    if (Baverage > average){
      cout << "On average biology had more time spent on it" << endl;
    }
   else if ( Baverage == average){
   cout << "On average the time spent on both programming and biology were the same" << endl;
                              }
   
    else   
      cout << "on average more time was spent on programming." << endl;
      }
    
    return 0;
}
