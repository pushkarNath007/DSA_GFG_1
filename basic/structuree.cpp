
/*
DATATYPES -> Primitive ->
                int  ->4 bytes 
                float -> 4 bytes
                char ->1 bytes
                bool ->1 bytes( true or false (  1 0)
            Derived ->
                 Array , pointer , reference

             User defined ->
             class, structure,union ,enum

 Input / Output ->
  cout<<"hello my name is";
  int a=8;
  int b =6;
  cout<<a<<" "<<b<<" "<<"hi th";
  cout<<"there is a number"<<endl;

     << - > insetion
    int a;
    Input->
     cin>>a;

     int a,b;
     cin>>a>>b

     cout, cin
      local , global 

      local -> 
      global -> std::cout    cin
      cout<<"hi"endl;


          long long ->8 bytes  ( long integer)
          double->8 bytes (  1.236458563527)     


    local  variables->  under any function

*/
/*
    cmath

    round()   1.2   1    1.8
    doube a=sqrt() ;

    unary operator ->  which only works on one operand
int a=10;
    ++,--
    post increment->  a++  // 8+1 =9
    pre increment  ->  ++a  // 9+1 =10         

    int a=6;
    a++ + ++a - a--  + a++ + a-- 
    6  +  8  -  8   +  7   + 8
 a= 7     8     7      8     7

  if(statemnt){
      cout
  }
  else if(condition)

  else {

  }

  Type conversion ->   1 -implicit
                       2 - Explicit

    Implicit ->  when your convert it itself

     float a;
    int b =8;
    a=b   8.0000;
    float -> 4 bytes 
    float a=3.4;
    double c;
    c=a

    explicit ->
    int a=5;

    float(a);
    function ->
*/
/*  arr -> 1 2 3 4 5 1 2 2 1
             lr l  l  l  l    r    r  r
  index    0 1  2  3  4  5  6  7  8 9 
    arr    1 2  2  2  3  3  3  4  4 5
new arr    1 2  3  4  5  2  3  3  2 4       left 

    left=0  right  =n-1;
    left =1 right=1;
     left -> its work is to find repeated element
    right -> it will point to that index 

    if(arr[left]!=arr[left-1] && arr[left]>arr[left-1]) ++left,++right;
    else if(arr[right]<=arr[left]) ++right
    else swap(arr[left],arr[right]);
*/
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<cmath>
//using namespace std;

void stock_buy_sell(int *arr,int n){
    int buy,flag=0;
    for(int i=1;i<=n;++i){
        if(flag==0 && arr[i]>arr[i-1]){
            buy=i-1;
            flag=1;
        }
        else if(flag==1 &&(arr[i]<arr[i-1] || i==n)){
            std::cout<<" ( "<<buy<<" "<<i-1<<" )"<<" ";
            flag=0;
        }
    }
    return ;
}
int main(){
    int n;  
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) std::cin>>arr[i];
    stock_buy_sell(arr,n);
    return 0;
}
