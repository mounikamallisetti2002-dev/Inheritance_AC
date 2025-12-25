
#include<iostream>
using namespace std;
class B
{
    int x=5;
protected:
    int y=10;
public:
    int z=15;
    void display()
    {
        cout<<"B.x= "<<x<<endl;
        cout<<"B.y= "<<y<<endl;
        cout<<"B.z= "<<z<<endl<<endl;
	cout<<"Annaya"<<endl;
    }
};
class D1:virtual public B
{
public:
    void display()
    {
        y=150;
//        cout<<"D1.x= "<<x<<endl;
        cout<<"D1.y= "<<y<<endl;
        cout<<"D1.z= "<<z<<endl<<endl;
    }
};
class D2:virtual private B
{
public:

    void display()
    {
        z=200;
//        cout<<"D2.x= "<<x<<endl;
//        cout<<"D2.y= "<<y<<endl;
        cout<<"D2.z= "<<z<<endl;
    }
};

class X:public D1,protected D2
{
public:
    void display()
    {
//        y=150;
        //        cout<<"B.x= "<<x<<endl;
//        cout<<"D.y= "<<y<<endl;
        cout<<"X.z= "<<z<<endl<<endl;
    }

};

int main()
{
    B b;
    D1 d1;
    D2 d2;
    X x;
    b.display();
    d1.display();
    d2.display();
    x.display();

}




















/*

#include <iostream>

using namespace std;

class B
{
    int a;
public:
    int b;
    void set_data();
    int get_A(void);
    void show_a(void);
};
class D: private B
{
    int c;
public:
    void mul(void);
    void display(void);
};

void B:: set_data()
{
    a=5,b=10;
}
int B::get_A()
{
    return a;
}

void B::show_a()
{
    cout<<"a= "<<a<<endl;
}
void D::mul()
{
    set_data();
    // b=20;
    c=b*get_A();

}
void D::display()
{
    show_a();
    cout<<"a= "<<get_A()<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;
}
int main()
{
    D d;
    // d.set_data();
    d.mul();
    // d.show_a();
    d.display();

//    d.b=20;
    d.mul();
    d.display();
    return 0;
}

*/
