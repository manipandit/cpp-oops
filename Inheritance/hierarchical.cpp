#include <bits/stdc++.h>
using namespace std;

// Hierarchical Inheritance 

class Parent
{
public:
    Parent()
    {
        cout << "Parent Class" << endl;
    }
};

class Child1 : public Parent
{
public:
    Child1()
    {
        cout << "Child 1 Class" << endl;
    }
};

class Child2 : public Parent
{
public:
    Child2()
    {
        cout << "Child 2 Class" << endl;
    }
};
int main()
{
    Child1 obj1;
    Child2 obj2;
}