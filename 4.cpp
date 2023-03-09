#include <bits/stdc++.h>
using namespace std;
bool pal(string str,int i)
{
    if(i>str.size()/2)
    {
        return true ;
    }
    return str[i]==str[str.size()-i-1] && pal(str,i+1);
}
int main()
{
    string a;
    cin>>a;
    if (pal(a,0))
    {
        cout <<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
