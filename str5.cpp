#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include<cstring>
#include<unordered_set>
using namespace std; 
int main()
{
    string s,s1;
    cin>>s>>s1;
    string t=s+s;
    if(t.find(s1)!=string::npos)
    {
        cout<<"yes";
    }
    else
    cout<<"no";
    

}