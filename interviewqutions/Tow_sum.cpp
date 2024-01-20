 #include<iostream>
 #include<vector>
 #include<string>
 #include<algorithm>
 using namespace std;
 string issum(vector<int> &p, int n, int t)
 {
    int left = 0;
    int right = n-1;
    sort(p.begin(),p.end());
    while (left<right)
    {
        int sum =p[left]+p[right];
        if (sum==t)
        {
           return "yes";
        }
        else if (sum<t)
        {
           left++;
        }
        else{
         right--;
        }
        
        
    }
    return "no";
     
 }
 
 int main(){
     vector<int> v{2,3,11,1,5,7};
     int n=6;
     int t=12;
     cout<<issum(v,n,t);

    return 0;
 }