Q15. Rewrite the function below so that so it uses pointers instead of reference variables, and then demonstrate the function in a complete program.

#include <iostream>
using namespace std;

int doSomething(int *x, int *y)
{

int temp=*x;
*x= *y * 5;
*y = temp * 3;
return *x+*y;
}

int main()
{
int y,x;
cout << "Please enter a number" << endl;
cin >> x;
cout << "Please enter another number" << endl;
cin >> y;


doSomething(&x, &y);
cout << (x + y) << " = x(" << x << ") + y(" << y << ")" << endl;
system("Pause");
return 0;
}
