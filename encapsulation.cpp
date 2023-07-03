#include <bits/stdc++.h>
using namespace std;

class Employee
{
    private:  //data is private and only accessible to methods of this class
    int salary;
    string domain;

    public:
    void set(int sal, string dom)
    {
        salary = sal;
        domain = dom;
    }
    int getSalary()
    {
        return salary;
    }
    string getDomain()
    {
        return domain;
    }
  
};
int main()
{
    Employee emp;
    emp.set(100000, "Backend Engineer");
    cout<<emp.getDomain()<<" Salary = "<<emp.getSalary()<<" ";
}