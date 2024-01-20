#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int>a{1,3,4,5,7,8,9,10,12};
     int i= 0;
     int s=a.size();
    for(auto k:a)
    {
       if (k+1!=a[i+1] and s-1!=i)
       {
         cout<<k+1;
         cout<<endl;
       }
       i++;
    }
      
    return 0;
}