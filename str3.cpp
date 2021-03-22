#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include<cstring>
#include<unordered_set>
using namespace std; 
//using map
//using 26 bool array
int main()
{
    bool arr[26]={0};
    string s;
    cin>>s;
    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[int(s[i])-95]==0)
        {
            arr[int(s[i])-95]=1;
        }
        else
        count++;
    }
    cout<<count;

}