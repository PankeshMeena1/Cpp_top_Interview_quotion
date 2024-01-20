#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v{3,4,5,1,9,23,1,68};
    int k=3,j=0,mx=0,s=0, p=0;
    for (int i = 0; i <3; i++)
    {
        s=s+v[i];
    }
    mx=s;
    j=k;

    while (j<v.size())
    {       
        s=s-v[p];
        s=s+v[j];
        mx=max(mx, s);
        j++;
        p++;
    }
    cout<<"max_sum = "<<mx;
    
    
    return 0;
}