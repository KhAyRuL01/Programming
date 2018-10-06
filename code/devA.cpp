#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string bin;
    cin >> t;
    while(t--)
    {
        cin >> bin;
        long long sum = 0, tmp, i = 0;
        while(i<bin.size())
        {
            tmp = 0;
            while(i < bin.size() && bin[i] == '0') i++;
            while(i < bin.size() && bin[i] == '1')
            {
                tmp++;
                i++;
            }
            //cout  << tmp << endl;
            sum += tmp*(tmp+1)/2;
        }
        cout << sum << endl;
    }
    return 0;
}