//Q16.
//Calista Hatch

  #include <iostream>
using namespace std;

void showArray(const int[], int);
int *reverseArray(const int[], const int);

int main(){
    // declaring the size of the array
    const int size = 10;
    // entering the preset contents of the array
    int elements[size] = {1,2,3,4,5,6,7,8,9,10};
    cout << "--------------------------------------------------------------\n";
    cout << "The original array is\n";
    // printing out the contents of the array with element number
    showArray(elements, size);
    // initializing reversing the array
    int *reverse = reverseArray(elements, size);
    cout << "The reversed array is \n";
    // printing the reversed array
    showArray(reverse, size);
    return 0;
}

void showArray(const int arr[], int size){
    for (unsigned i = 0; i < size; i++){
        cout << "Element [" << i+1 << "] : " << arr[i] << endl;
    }
    cout << "--------------------------------------------------------------\n";
}

int *reverseArray(const int arr[], const int size){
    int *reverseArr = new int [size];
    for (unsigned i = 0; i < size; i++){
        *(reverseArr + i) = *( arr + size -1 -i);
    }
    return reverseArr;
}
