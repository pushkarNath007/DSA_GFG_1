/*#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>>arr,int r,int c){
    int low=1,high=2000;
    int n=(r*c)/2;
    while(low<=high){
        int median=(low+high)/2;//1000//3
        int count=0;
        for(int i=0;i<r;++i){
            int left=0,right=c-1;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(arr[i][mid]<=median) left=mid+1;
                else right=mid-1;
            }
            count+=left;

        }
        if(count<=n) low=median+1;
        else high=median-1;
    }
    return low;
}
int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>>arr(r,vector<int>(c));
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>arr[i][j];
        }
    }
    cout<<median(arr,r,c);
    return 0;
}
 n=4
 ind   0 1 2 3
 val   2 3 4 5
 1  2  3  4  4  4  5  5 6
*/



#include <bits/stdc++.h>
using namespace std;
long power(long a, long b)
{
long r = 1, i;
for (i = 1; i <= b; i++)
r = r * a;
return r;
}

int main()
{
long p, q, n, z, d, e;
long i, j, count = 0, sum, k;
char s[25], ch[25], c[25];
long v[25], res;

cout<<"Enter 2 prime numbers:";
cin>>p>>q;
n = p * q;
z = (p - 1)*(q - 1);
printf("The value of n is %d", n);
printf("\nThe value of z is %d", z);
for (i = p; i <= q; i++)
{
count = 0;
for (j = 1; j <= z; j++)
{
if (i % j == 0 && z % j == 0)
count++;
}
if (count == 1)
{
d = i;
break;
}
}
printf("\nThe values of d is %d", d);

sum = 1+z;
if (sum % d == 0)
{
e = sum / d;
k = 1;
}
else
{
k = 2;
while ((sum *k) % d != 0)
{
k++;
}
e = (sum *k) / d;
}
printf("\nThe e value is %d", e);
printf("\nEnter the string in Capital::");
cin>>s;
for (i = 0; s[i] != '\0'; i++)
v[i] = (s[i]) - 64;
printf("The string is %s", s);
cout<<"\nThe string in numbers is\n";
for (j = 0; j < i; j++)
printf("%d\t", v[j]);
printf("\n");

for (j = 0; j < i; j++)
{
res = power(v[j], e);
c[j] = res % n;
}

printf("The Cipher text is\n");
for (j = 0; j < i; j++)
printf("%d\t", c[j]);
printf("\n");


for (i = 0; i < j; i++)
{

ch[i] = c[j] + 64;

}


for (j = 0; j < i; j++)
{
res = power(c[j], d);
v[j] = res % n;
}

printf("The Original text is\n");
for (j = 0; j < i; j++)
printf("%d\t", v[j]);
cout<<"\n";
return 0;
}
