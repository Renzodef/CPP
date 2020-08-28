// Every object in C++ has access to its own address through an important pointer called the this pointer.
// Inside a member function this may be used to refer to the invoking object.

#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass(int a) : var(a)
    {
    }
    // The printInfo() method offers three alternatives for printing the member variable of the class.
    void printInfo()
    {
        cout << var << endl;
        cout << this->var << endl;
        cout << (*this).var;
    }
    
    // You may be wondering why it's necessary to use the this keyword, 
    // when you have the option of directly specifying the variable.
    // The this keyword has an important role in operator overloading, which will be covered in the following file.

private:
    int var;
};

int main()
{
    MyClass obj(42);
    obj.printInfo();
}