#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int>v{2,-1,1,2,1,-1,28,2};
     int sum=0, mx=v[0];
     for (int i = 0; i <v.size(); i++)
     {
         sum+=v[i];
         mx=max(mx, sum);
         if (sum<0)
         {
             sum=0;
         }
         if (sum>mx)
         {
            mx=sum;
         }
    }
     cout<<"max_Sum : "<<mx;
     
    return 0;
}