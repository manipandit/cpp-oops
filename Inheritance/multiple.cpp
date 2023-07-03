#include <bits/stdc++.h>
using namespace std;

// Multiple Inheritance 

class Parent1
{
public:
    Parent1()
    {
        cout << "Parent 1 Class" << endl;
    }
};
class Parent2
{
public:
    Parent2()
    {
        cout << "Parent 2 Class" << endl;
    }
};

class Child : public Parent1, public Parent2
{
public:
    Child()
    {
        cout << "Child  Class" << endl;
    }
};


int main()
{
    Child obj;
}