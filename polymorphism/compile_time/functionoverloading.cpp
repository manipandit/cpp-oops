#include <bits/stdc++.h>
using namespace std;

// Function Overloading - Different fns with same name varies in no of args or type of args
class Sum{
    public:
    
    void add(int x, int y)
    {
        cout<<x+y<<endl;
    }

    void add(int x,int y, int z)
    {
        cout<<x+y+z<<endl;
    }

    void add(float x, float y)
    {
        cout<<x+y<<endl;
    }
};

int main()
{
    Sum s1;
    s1.add(2,3);

    s1.add(1,2,3);

    s1.add(float(1.2), float(3.4));
}