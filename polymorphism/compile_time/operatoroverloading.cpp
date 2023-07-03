#include <bits/stdc++.h>
using namespace std;

// overloading + operator , adding 2 complex numbers

class Complex{
    public:
    int real;
    int img;

    Complex(int x, int y)
    {
        real=x;
        img=y;
    }

    Complex operator+ (Complex &c) //arg passed here is right number or 2nd number
    {
        Complex ans(0,0);
        ans.real = real + c.real; // here real is C1 and c.real is C2
        ans.img = img + c.img ;
        return ans;
    }
};
int main()
{
    Complex c1(1,2);
    Complex c2(2,3);

    Complex c3 = c1+c2;
    cout<<c3.real<<" "<<c3.img<<"i";
}