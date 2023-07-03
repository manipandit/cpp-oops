#include <bits/stdc++.h>
using namespace std;

/*
class Parent
{
    public:
    virtual void print() //by making this virtual now it's elgiible to be overided
    {
        cout<<"In Print of Parent Class"<<endl;
    }
    void show()
    {
        cout<<"In Show of Parent Class"<<endl;
    }
    
};
class Child: public Parent
{
    public:
    void print()
    {
        cout<<"In Print of Child Class"<<endl;
    }
    void show()
    {
        cout<<"In Show of Child Class"<<endl;
    }
    
};

int main()
{
    Parent *p;
    Child c;
    
    p =  &c; //during runtime we r assigining child class obj to parent
    p->print(); //it is overriden by child class
    p->show(); // it is not overrided since we haven't used virtual keyword
}*/

// Function Overriding
class A
{
    public:
    void show()
    {
        cout<<"In A Show"<<endl;
    }
};
class B: public A
{
    public:
    void show()
    {
        cout<<"In B Show"<<endl;
    }
};

int main()
{
    B obj;
    obj.show();
}
