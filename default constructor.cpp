#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo() //default constructor
    {
        a=3;
        b=4;
    }
    demo(int x,int y) //perametrized constructor
    {
        //++x;
        //++y;
        a=x;
        b=y;
    }
    ~demo()
    {
        cout<<"destructor!!!";
    }
   
    void putdata () // display function 
    {
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    }
    
};
int main() // main function
{
demo s;
demo d(2,3);
s.putdata();
d.putdata();
return 0;
}