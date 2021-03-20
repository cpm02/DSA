#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include<cstring>
#include<unordered_set>
using namespace std; 
// subarray with 0 sum
bool issubarraypresent(int arr[],int n)
{
    unordered_set<int> sum;
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=arr[i];// using prefix sum technique
        sum.insert(s);
        if(s==0||sum.find(s)!=sum.end())
        return true;
    }
    return false;
}
int main()
{
    int arr[]={4,2,-3,1,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<issubarraypresent(arr,len);
}