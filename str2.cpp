#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include<cstring>
#include<unordered_set>
using namespace std; 
int main()
{
    string s;
    cin>>s;
    //reverse the string
    string s1=s;
    char temp;
    int n=s.size();
   for(int i=0;i<n/2;i++)
        {
            temp=s[i];
            s[i]=s[n-1-i];
            s[n-1-i]=temp;
        }
    if(s1==s)
    {
        cout<<1;
    }
    else cout<<0;

}