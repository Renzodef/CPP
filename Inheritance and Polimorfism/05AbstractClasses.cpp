#include <iostream>
using namespace std;

// Abstract Class
class Enemy
{
public:
    // Pure Virtual Function
    virtual void attack() = 0;
};

class Ninja : public Enemy
{
public:
    void attack()
    {
        cout << "Ninja!" << endl;
    }
};

class Monster : public Enemy
{
public:
    void attack()
    {
        cout << "Monster!";
    }
};

int main()
{
    // The next line will result in an error because we cannot create an object from an abstract class 
    // Enemy e;
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->attack();
    e2->attack();

    return 0;
}