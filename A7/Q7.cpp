//Q7
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
 void printStudent()
 {
 cout<<"Student Name: "<<studentName<<endl;
 cout<<"Student Number: "<<studentNumber<<endl;
 cout<<"Student Age: "<<age<<endl;
 } 
 string getStudentName()
 {
  return studentName;}

 string getStudentNumber()
 {
  return studentNumber;}
 int getStudentAge()
 {
  return age;}
};
 class KpuStudent : public Student
{
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
 }
 void PKpuStudent()	// print function for kpu student
 {
 cout<<"---------------------- Student Info --------------------"<<endl;
 printStudent();
 cout<<"Major: "<<major<<endl;
 cout<<"Campus: "<<campus<<endl;
 cout<<"Year: "<<year<<endl;
 cout<<"-----------------------------------------------------"<<endl;
 }
 string getMajor()
 {
  return major;
 }
 string getCampus()
 {
  return campus;
 }
 int getYear()
 {
  return year;
 }

 };
int main()
{
 cout << "An example student:\n";
  KpuStudent ks("Dave", "543921", 19, "IT", "Online", 1);
 //printing the function
 ks.PKpuStudent();
 cout << "Please enter the details of two students." << endl;
  for (int i = 0; i < 2; i++){
   KpuStudent KPUstd1;
   string stdName, stdNumber, kpuStdMajor, kpuStdCampus;
 int stdAge, kpuStdYear;

 cout<<"Enter Your Name: ";
 cin>>stdName; 
 cout<<"Enter Your Student Number: ";
 cin>>stdNumber;
 cout<<"Enter Your Age: ";
 cin>>stdAge;
 cout<<"Enter Your Major: ";
 cin>>kpuStdMajor;
 cout<<"Enter Your Campus: ";
 cin>>kpuStdCampus;
 cout<<"Enter Your Year: ";
 cin>>kpuStdYear;

 //input from function
 KPUstd1.setKpuStudent(stdName, stdNumber, stdAge, kpuStdMajor, kpuStdCampus, kpuStdYear);
 //printing the function
 KPUstd1.PKpuStudent();
}
}

