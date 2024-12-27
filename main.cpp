#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string a  ;
    cin >> a ;
    string b = "hello";
    int c = 0 ;
    for(int i = 0 ; i < a.size();i++)
    {
        if(a[i]==b[c])
        {
            c++;
        }
    }
    if(c==b.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


    return 0;
}
