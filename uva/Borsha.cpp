#include<iostream>

using namespace std;

class Nothing
{
    int a,b;
    public:
    Nothing()//constructor
    {
        a=0;
        b=0;
        cout << "ConStructor with no parameter" << endl;
    }

    Nothing(int x,int y)
    {
        a=x;
        b=y;
        cout << "Constructor with parameter" << endl;
    }

    ~Nothing()
    {
        cout << "Distructing..." << endl;
    }

    inline void show();//inline function
    friend void print(Nothing ob);//friend function
};

inline void Nothing::show()//defination of mmeber finction show()
{
    cout << "In show() function" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}


void print(Nothing ob)//defination of friend finction print()
{
    cout << "In print() function" << endl;
    cout << "a = " << ob.a << endl;
    cout << "b = " << ob.b << endl;
}

int main()
{
    Nothing ob1;//creat a object
    ob1.show();
    print(ob1);

    Nothing ob2(10,20);//creat another object
    ob2.show();
    print(ob2);

    return 0;
}


