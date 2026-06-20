#include<iostream>
using namespace std;
class A
{
    public:
    int x,y,z;
    void read()
    {
        cin>>x>>y;
    }
};
class B:virtual public A
{
    public:
    void sum()
    {
        z=x+y;
    }
};
class C:public B
{
    public:
    void display()
    {
        cout<<"sum="<<z;
    }
};
int main()
{
    C obj;
    obj.read();
    obj.sum();
    obj.display();
}