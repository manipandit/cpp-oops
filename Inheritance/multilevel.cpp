#include <bits/stdc++.h>
using namespace std;

// Multilevel Inheritance 

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

class Child2 : public Child1
{
public:
    Child2()
    {
        cout << "Child 2 Class" << endl;
    }
};
int main()
{
    Child2 obj;
}