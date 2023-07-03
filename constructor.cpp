#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int l;
    int b;

    Rectangle() // default constructor - no args passed
    {
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y) // parameterised constructor - args passed
    {
        l = x;
        b = y;
    }

    Rectangle(Rectangle &r) // copy constructor - initialise an obj by an existing obj
    {
        l = r.l;
        b = r.b;
    }

    ~Rectangle() // destructor
    {
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    Rectangle *r1 = new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;

    delete r1; //delete keyword works only with pointers and is used here as destructor for r1

    Rectangle r2(10,20);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3 = r2; //copy 
    cout<<r3.l<<" "<<r3.b<<endl;

}