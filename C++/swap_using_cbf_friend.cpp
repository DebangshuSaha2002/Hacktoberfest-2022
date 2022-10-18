#include<iostream>
using namespace std;
class B;
class A
{
    private:
    int a;
    public:
    void input()
    {
        cin>>a;
    }
    friend void swap(A,B);
};

class B
{
    public:
    int b;
    public:
    void input()
    {
        cin>>b;
    }
    friend void swap(A,B);
};

void swap( A t , B y)
{
    int c;
    c=t.a;
    t.a=y.b;
    y.b=c;
    cout<<t.a<<endl;
    cout<<y.b;
}

int main()
{
    A a;
    a.input();
    B b;
    b.input();
    swap(a,b);
    return 0;
}