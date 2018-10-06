#include<iostream>

using namespace std;

class base //base class
{
    string student_name,dept;
public:
    void setName(string name);
    void setDept(string dep);
    void show();
};

inline void base::setName(string name)//inline function
{
    student_name = name;
}

inline void base::setDept(string dep)//inline function
{
    dept = dep;
}
void base::show()
{
     cout << "Name : " << student_name << endl;
     cout << "Dept : " << dept << endl;
}
class data : public base //derived class
{
    static double sum;
    int id;
    double result;
public:
    data(){};//constructor
    ~data(){}//destructor
    friend void showAverage(data ob,int n);
    void set(int i);
    void set(double res);
    void showInf();
};

double data::sum;//define static member
void data::set(int i)
{
    id = i;
}

void data::set(double res)
{
    result = res;
    this->sum = this->sum+res;
}

void data::showInf()
{
    this->show();
    cout << "ID : " << id << endl;
    cout << "Result : " <<result << endl;
}
void showAverage(data ob,int n)//friendfunction
{
    cout << "Average result : " << ob.sum/n;
}

int main()
{
    data student[100];
    int n,i,tmp;
    double x;
    string s;
    cout << "Number of student : " ;
    cin >> n ;
    for(i=0;i<n;i++)
    {
        cout << "Name : ";
        cin >> s ;
        student[i].setName(s);
        cout << "Dept : " ;
        cin >> s;
        student[i].setDept(s);
        cout << "ID : ";
        cin >> tmp;
        student[i].set(tmp);
        cout << "Result : ";
        cin >> x;
        student[i].set(x);
        cout << endl;
    }

    for(i=0;i<n;i++)
    {
        student[i].showInf();
        cout << endl;
    }
    showAverage(student[0],n);
    return 0;
}
