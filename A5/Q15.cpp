//Q15
//Calista Hatch

  
#include<iostream>
using namespace std;


int doSomething(int *x,int *y);
int main()
{
        int x,y,z;
        cout<<"Enter the values for x and y: ";
        cin>>x>>y;
        z = doSomething(&x,&y);
        cout<<"The Answer is :"<< z ;
        return 0;
}

        int doSomething(int *x,int *y) 
{
        int temp=*x;
        temp=*y*5;
        *y=temp*3;
        return *x + *y;
}
