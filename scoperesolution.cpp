#include <bits/stdc++.h>
using namespace std;

// Here we have 2 parents with same function and is inherited by child
// now if we try to call this fn using child class obj it will throw error since it is ambiguous
// so we make use of scope resolution operator ::
class Parent1
{
public:
    void show()
    {
        cout << "In Parent 1 show" << endl;
    }
};
class Parent2
{
public:
    void show()
    {
        cout << "In Parent 2 show" << endl;
    }
};

class Child : public Parent1, public Parent2
{
};
int main()
{
    Child obj;
    obj.Parent1 ::show();
    obj.Parent2 ::show();
}