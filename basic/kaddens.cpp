/* kadanes   
       
       
        2 -3 1 0 -1 -2 3   add all elements 
           i
        3 
        1 -> ith elemt
        2 ->before ith elemt
        3 -> sum 
        int maxi = arr[0];
        int res=arr[0];
        for(int i=1;i<n;++i){
            maxi=max(maxi+arr[i],arr[i]);
            res=max(res,maxi);
        }
        res;
*/