/*
int digitalRoot(int n)
    {
        if(n==0){
            return 0;
        }
        int ans = n%10 + digitalRoot(n/10);//99999 = 45
        return (ans%10 + digitalRoot(ans/10));
    }
*/