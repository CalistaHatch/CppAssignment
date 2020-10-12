//Q23
// Calista Hatch

#include<iostream>

using namespace std;

void function(int arr[ ], int size, int n)
{
    for (int i = 0; i<size; i++)
    {
        if (arr[ i ] > n)
        {
           cout << arr[ i ] << " ";
        }
    }
    cout << endl;
}

int main(){

    int arr[ ] = {10,20,30,40,50,60,70,80,99};
    int size = 9;
    int n;
    
    cout << "The arrays are given below: \n"<<endl;
    
    for (int i = 0; i<size; i++){
        cout << arr[ i ]<<"  ";
    }
    cout << endl;

    cout << "Please enter a number : ";
    cin >> n;
    cout<<endl;
    function(arr,size,n);  
}
