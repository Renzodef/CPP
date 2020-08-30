#include <iostream>
using namespace std;

class Enemy
{
public:
    // It needs to be overridden
    virtual void attack() {}
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
    Ninja n;
    Monster m;
    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->attack();
    e2->attack();
}