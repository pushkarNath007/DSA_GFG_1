#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i) cin>>arr[i];
    {
        
    }
    return 0;
}
/*           
    1 to N;
      3 1 2 5 2 =13
       2 tech can be there 
       Bit Xor
         2 ^ 1 = 3
         3 ^2 =1
            2 1 2 = 1


            1 2 3 4 5
            1 2 2 3 5 =   2^4= 5  
            2 ^ 4 = 6

              1
              0
              1


            0 0 0 0 0 0 0 0 0 0 1 0
            0 0 0 0 0 0 0 0 0 1 0 0
            right side set bit
            1s   -> 0 - 1 , 1 - 0 
            2s   -> 1s +1 ->2s compliment 

            0 0 0 0 0 1 1 0 



                      0 1 0 1
            & 0 0 0 0 0 0 1 0
                            
            
            a ^ b->  1  0  1
                     0  1
        
         1 1
         1 0

         a    3 2 2  !=0
         b    1 5    = = 0

         1  2  3  4  5

         2 4 3   d ^ 3  2 2 4
         1 4 5   e 1 5   = 4

         for loop

         
         15
         13
        x +y +z = 15
        x +x +z=  13
          x -y = 2

            1^2 +2^2 +3^2 +4^2 +5^2= 55
            1^2 +2^2+2^2 +3^2 + 5^2= 43
            x^2 - y^2 =12
            x+y x-y =12
            x-y       2
            x -  y = 2
            x + y = 6
            2x= 8
            x= 4
            y =2;

// 
1 to N 
      1 2 3 4 5
      -1 -2 -3 -4 -5

      [abs (2-1)]  2
        -3 -1  -2    5 -2
    

     1  3  3
     -1  2  -3
*/
