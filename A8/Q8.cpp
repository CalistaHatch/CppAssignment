Q8. Design a Studentclass that has the following members:

A member variable for the name of the student (a string)
A member variable for the year that the student was enrolled (a string)
A constructor and appropriate accessors and mutators
A virtual print function that displays the student's name and the year he/she was enrolled.
Design a KpuStudent class that is derived from the Student class. The KpuStudent class should have the following members:

A member variable for the campus location (a string, could be "Surrey", "Richmond" or "Langley")
A constructor and appropriate accessors and mutators
A print function that overrides the print function in the base class. The KpuStudent class’s print function should display only the student's name and his/her campus location.
Design a HogwartsStudent class that is derived from the Student class. The HogwartsStudent class should have the following members:

A member variable for the house affiliation of the student (a string, could be "Hufflepuff", "Ravenclaw", "Gryffindor" or "Slytherin").
A constructor and appropriate accessors and mutators.
A print function that overrides the print function in the base class. The HogwartsStudent class’s print function should display only the student’s name and the student's house 
affiliation.
Demonstrate the classes in a program that has an array of Student pointers. The array elements should be initialized with the addresses of dynamically allocated Student , 
KpuStudent , and HogwartsStudent objects. (See Program 15-14 on Page with Page No. 937 of the uploading reading task , lines 17 through 22, for an example of how to do this.)
The program should then step through the array, calling each object’s print function.
