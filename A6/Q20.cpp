//Q20. 
//Calista Hatch

#include<iostream>

using namespace std;


    class cylinder // defining  a class
    {
    private:
        double height, radius;
    public:
      void set_values (double, double);
      double getvolume ()
      { 
          return 3.14 * radius * radius * height; // calculating volume of cylinder in class as we cannot access private function outside of class
      
      }
  
    };
    
    void cylinder:: set_values ( double r, double h) // accessing the private variables of class by public function
    {
        radius = r;
        height = h;
    }
    
  
    int main(){
    
    cylinder cyl; // creating object of class
    cyl.set_values (4.8, 6.7); // testing case
    cout<< "The volume of the test cylinder is " <<cyl.getvolume();
    cyl.set_values (5, 2.99);
    cout<<"\nThe volume of another test cylinder is " <<cyl.getvolume();
    return 0;
 
}
