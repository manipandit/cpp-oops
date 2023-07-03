#include <bits/stdc++.h>
using namespace std;

class Fruit
{
public:
// name and color represents data/properties of class Fruit
    string name;
    string color;
};
int main()  
{
    Fruit apple; // first way to create obj
    apple.color = "Red";
    apple.name = "Apple";

    cout << "Fruit Name : " << apple.name << " and Color : " << apple.color << endl;

    Fruit *mango = new Fruit(); //second way to create obj , new keyword will give pointer to the obj
    mango->color = "Yellow";
    mango->name = "Mango";
    cout << "Fruit Name : " << mango->name << " and Color : " << mango->color << endl;

}