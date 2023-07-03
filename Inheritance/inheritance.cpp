#include <bits/stdc++.h>
using namespace std;


class Parent
{
    public:
    int x;
    
    protected:
    int y;

    private:
    int z;


};

class Child1 : public Parent
{
    // x will be public here
    // y will be protected here
    // z will be inaccessible
};

class Child2 : protected Parent
{
    // x will be protected here
    // y will be protected here
    // z will be inaccessible
};

class Child3 : private Parent
{
    // x will be private here
    // y will be private here
    // z will be inaccessible
};

int main()
{
    
}