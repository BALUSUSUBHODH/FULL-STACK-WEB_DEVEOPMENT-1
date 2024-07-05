#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void solve(int a[],int n)
{
    int zero =0,zi=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            zero++;
            zi=i;
        }
    }
    long long int lp[n],rp[n];
    long long int b[n]={0};
    if(zero==0)
    {
        lp[0]=a[0];
        rp[n-1]=a[n-1];
        for(int i=1;i<n;i++)
        {
            lp[i]=lp[i-1]*a[i];
            cout<<lp[i]<<" ";
        }
        cout<<endl;
        for(int i=n-2;i>=0;i--)
        {
            rp[i]=rp[i+1]*a[i];
            cout<<rp[i]<<" ";
        }
        cout<<endl;
        b[0]=rp[1];
        cout<<b[0]<<endl;
        b[n-1]=lp[n-2];
        cout<<b[n-1]<<endl;
        for(int i=1;i<n-1;i++)
        {
            b[i]=(lp[i-1]*rp[i+1])/a[i];
        }
    }
    if(zero==1)
    {
        b[zi]=lp[zi]*rp[zi];
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        solve(a,n);
    }
    return 0;
}
