#include<bits/stdc++.h>
using namespace std;
int maxx(int n, int a[])
{
    if(n==1) return a[0];
    return max(a[n-1], maxx(n-1, a));
}
int main()
{
    int a;
    cin>>a;
    int ar[a];
    for(int i=0; i<a; i++)
    {
        cin>>ar[i];
    }
    cout<<maxx(a,ar)<<"\n";
}
