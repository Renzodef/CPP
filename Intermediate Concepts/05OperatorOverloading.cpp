// Most of the C++ built-in operators can be redefined or overloaded.
// Thus, operators can be used with user-defined types as well (for example, allowing you to add two objects together).Overloaded operators are functions, defined by the keyword operator followed by the symbol for the operator being defined.
// An overloaded operator is similar to other functions in that it has a return type and a parameter list.
// In our example we will be overloading the + operator. 
// It will return an object of our class and take an object of our class as its parameter.

#include <iostream>
using namespace std;

class MyClass
{
public:
    int var;
    MyClass() {}
    MyClass(int a)
        : var(a) {}

    MyClass operator+(MyClass &obj)
    {
        MyClass res;
        res.var = this->var + obj.var;
        return res;
    }
};

int main()
{
    MyClass obj1(12), obj2(55);
    MyClass res = obj1 + obj2;

    cout << res.var;
}