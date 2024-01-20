#include<iostream>
using namespace std;
#include<vector>

int main(){
    int a,a1,a2;
     vector<int>v1{2,5,67,8,5},v2{3,9,7,6,4};
     swap(v1,v2);
     for(auto k:v1)
     {
         cout<<k<<"\t";
     }
     for(auto k:v2)
     {
         cout<<k<<"\t";
     }
     
     
     
    return 0;
}