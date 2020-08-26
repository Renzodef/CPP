#include <iostream>
#include "01Destructors.h"
using namespace std;

// The double colon in the source file (.cpp) is called the scope resolution operator, 
// and it's used for the constructor definition.
// The scope resolution operator is used to define a particular class' member functions, which have already been declared. 
// Remember that we defined the constructor prototype in the header (.h) file.
// So, basically, MyClass::MyClass() refers to the MyClass() member function - or, in this case, constructor - of the MyClass class.
MyClass::MyClass()
{
    cout << "Constructor" << endl;
}

MyClass::~MyClass()
{
    cout << "Destructor" << endl;
}

int main()
{
    MyClass obj;
}