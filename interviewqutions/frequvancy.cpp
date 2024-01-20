#include<iostream>
using namespace std;
#include <map>

int main(){
    int n;
    string s;
    map<string, int> mp;
    cin>>n;
    for (int i = 0; i<n; ++i)
    {
       cin>>s;
       mp[s]++;
    }
    for(auto p:mp)
    {
        cout<<p.first<<"="<<p.second<<"\n";
    }
    return 0;
}