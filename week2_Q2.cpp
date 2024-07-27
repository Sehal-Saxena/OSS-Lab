#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int len=s.length();
    int i=0,j=len-1;
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<"Reversed string is : "<<s;
    return 0;
}
