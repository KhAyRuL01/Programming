#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    cin >> str; // without space
    cin.ignore();
    cout << str << endl;
    getline(cin,str); // with space
    cout << str << endl;
    return 0;
}
