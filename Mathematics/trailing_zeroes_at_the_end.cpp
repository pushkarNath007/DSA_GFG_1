//  5! = 120     1 *2*3*4*5=120
// 30!= 430550000  =4
// n =5   = 120   = 1
// 10!= 3628800
// n =5 120 =1 =  
//  120
//  %   120 %10    12    0
//   123 %10 =3
//    12354
// 12354%10 = 4
//
//12354/10 = 1235 %10 = 5
//n =5  = 120 =1
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; //  n =5
    long long temp=1;// 1//2//6
    /*for(int i=1;i<=n;++i){   // 1+1 = 2+1 = 3+1=4+1=5+1=6
        temp*=i; // temp=temp*i;
    }
    /*
        temp =1*1 =1  
        temp = 1 *2=2
        temp = 2 * 3=6
        temp= 6*4 =24
        temp = 24*5 =120
    
   int count=0;
    while(temp!=0){
       if(temp%10==0){//   120 %10 =0{
           ++count; // count=1;
       }
       else  break;
        temp/=10;// 120/10 = 12 temp= temp/10
    }*/
    //int temp=1;
    for(int i=1;i<=n;++i){
        temp*=i;
    }
    cout<<temp<<endl;
    int count=0;
    for(int i=5;i<=n;i=i*5){// 5 *5 = 25
        count=count+(n/i);
       // count =0 +(30/5) =6;
       // count =6 +(30/25) =7;
    }
    /*
        n =30 
        i =5
    */
    cout<<count<<endl;
    return 0;
}
// 2 /8 =

//
/*
    n = 5!
    1 *2 *3 *4*5  = 120  = 1
     12 !  = 430025000 = 3

     n =5, temp=1;
     
     
     for( int i=1;i<=n;i++){  i =i+1; 2+1 =3   6
    temp= temp*i;  1 *2 =2   2 *3= 6  24 *5 = 120

     }
     120 
     12345%10  = 5;
     12345/10  = 1234/10 = 123/10 = 12/10 = 1/10 =0
     int count =0;
     while(n!=0){    10000000
         if(n%10==0) ++count;   1200  0   count =2
         else break;

         n=n/10;   1200/10 = 120/10 = 12
     }
     n =5
    temp =1
`      1 *1 = 1
       2 *1 = 2
       3 *2 =6
       4 *4 =24
       5 *24 = 120

       n =12!   1 * 2 *3 * 4 * 5 * 6 *7 *8 *9 *  10 * 11 * 12  = 431200 
                                                 5*2
       n = 5!   1 * 2 *3 * 4 *5    =  120   = 12
                1   2  3  2*2  * 5   1
    n/ 5 =  2
     n = 130!   =  5  10  15  20  25  30  = 30 / 5  =6
                                5 *5 
                                125
                                5 *5 *5 

     n /25  = 0  50/25  =2
     30 /25 = 1
      n =30 
      int count =0;
      for( int i =5; i<=n; i=i*5){  25  125
          count = count +(n/i);   30 /25  =  7 
      }

      5 ! = 1 *     2 *     3 *    4 *   5         10
       
            1 *1   2 *1    3*1    2*2   5 *1     5 *2
        2 -> 4   1     
        5 ->3

         5 * 2 = 10

         arm strong number 
           1 = 3
          3 ^ 3 + 5 ^3  + 1 ^3 =  27 + 125 + 1 = 152 +1 =153 
           25
           2 ^2 + 5 ^2

           1 to 1000
            int total_count(int n){
                int count =0;
                while(n!=0){
                    n=n/10;
                    ++count;
                }
                123 /10 = 1/10    3
            }
        pow(3,2)  9

        int val =0;
            for( int i=1 ; i<=n; ++i){
                int digit=total_count(i);
                    int val = val +pow(i%10,digit)   1^2   =2
            } 
        27          2 3 4 5     2 to 26
            2  sqrt(n)  5
          2
*/

