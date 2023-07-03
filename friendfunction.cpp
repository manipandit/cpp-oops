#include<bits/stdc++.h>
using namespace std;

class A 
{
    private:
    int  x;
    
    public:
    A(int y)
    {
        x=y;
    }

    friend void print(A &obj);

};

void print(A &obj)
{
    cout<<obj.x<<endl;
}

int main()
{
    A obj(10);

    // cout<<obj.x<<endl; since x is private we can't access directly this will throw error
    print(obj); //so we are accessing private member through friend function
}