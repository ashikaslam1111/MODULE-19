#include<bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int>a)
{
    if(a.size()<=1)return a;
    int pivot=rand()%(a.size());
    vector<int>b,c;
    for(int i=0; i<a.size(); i++)
    {
        if(i==pivot)continue;
        else if(a[i]>=a[pivot])b.push_back(a[i]);
        else c.push_back(a[i]);
    }
    vector<int>sorted_a,sorted_b,sorted_c;
    sorted_b=quick_sort(b);
    sorted_c=quick_sort(c);
    for(int i=0; i<sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[pivot]);
    for(int i=0; i<sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }
    return sorted_a;
}
int main()
{
    int n;
    vector<int>a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    vector<int>sorted_a1=quick_sort(a);
    for(int i=0; i<sorted_a1.size(); i++)
    {
        cout<<sorted_a1[i]<<" ";
    }
    return 0;
}

