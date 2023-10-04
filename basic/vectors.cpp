/*static dynamic

static memory allocation ->

int a,b;   8 bytes -> 2 block

 vector<int>arr;     2   3
                     0   1

 push_back(2);
 push_back(3)

 arr.size();  arr[i]
 arr.front();
 arr.back();

 arr ->2 size */
 #include<bits/stdc++.h>
 using namespace std;
 
 void printing(vector<int>&arr){
     int n=arr.size();
 }
 int main(){
     int n;
     cin>>n;
     vector<int>arr(n);
    for(int i=0;i<n;++i) cin>>arr[i];
     cout<<arr[0]<<" "<<endl;
     cout<<arr.capacity()<<" ";
     printing(arr);
     return 0;

     //      size ->2      1      4     8 
     //  capacity ->2    
     //     new vector<int>   capacity ->4  
     // n=3        0 0 0
     //            0 1 2
 }
 
 

