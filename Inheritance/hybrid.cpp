#include <bits/stdc++.h>
using namespace std;

// Hybrid Inheritance = more than 1 inheritance
// in this code there is hierarchical and single level inheritance
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

class Child3 : public Child2
{
public:
    Child3()
    {
        cout << "Child 3 Class" << endl;
    }
};

 int main()
{
    Child3 obj;
}