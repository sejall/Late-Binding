#include <iostream>
#include<conio.h>
using namespace std;
class base
{
public:
    virtual void sound()
    {
        cout<<"this is base class"<<endl;

    }
};
class derived:public base()
{
private:
   virtual void sound()
    {
        cout<<"this is derived class"<<endl;
    }
};
int main()
{
    base *b;
    derived d;
    b=&d;
    b->sound();

    return 0;
}
