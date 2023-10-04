#include<bits/stdc++.h>
using namespace std;


void printing(vector<int>&arr,int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void even_number_elements(int *ans,int n){
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        arr[i]=ans[i];
    }
    int right=n/2;
    int left=right-1;
    while(arr[left]==arr[right] &&left>=0 &&right<=n-1){
        left--;
        right++;
    }
    if(left<0 && right>n-1){
        right=n/2;
        if(arr[right]==9){
            arr[0]=1;
            for(int i=1;i<n;++i){
                arr[i]=0;
            }
            arr.push_back(1);
        }
        else{
            right=n/2,left=right-1;
            arr[left]+=1;
            arr[right]+=1;
        }
    }
    else{
        if(arr[left]>arr[right]){
            while(left>=0 &&right<=n-1){
                arr[right++]=arr[left--];
            }
        }
        else{
            arr[left]+=1;
            right=n/2,left=right-1;
            while(left>=0 &&right<=n-1){
                arr[right++]=arr[left--];
            }
        }
    }

   printing(arr,arr.size());
   
}
void odd_length_elements(int *ans,int n){
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        arr[i]=ans[i];
    }
    int mid=n/2;
    int left=mid-1,right=mid+1;
    while(arr[left]==arr[right]){
        left--;
        right++;
    }
    if(left<0){
        if(arr[mid]==9 &&arr[left]==9){
            arr[0]=1;
            for(int i=1;i<n;i++){
                arr[i]=0;
            }
            arr.push_back(1);
        }
        else arr[mid]+=1;
    }
    else{
        if(arr[left]>arr[right]){
            while(left>=0 &&right<=n-1){
                arr[right++]=arr[left--];
            }
        }
        else{
            int m=mid;
            while(arr[m]==9){
                arr[m]=0;
                m--;
            }
            arr[m]+=1;
            left=mid-1;
            right=mid+1;
            while(left>=0 &&right<=n-1){
                arr[right++]=arr[left--];
            }
        }
    }
    printing(arr,arr.size());
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    if((n&1)==0) even_number_elements(arr,n);
    else odd_length_elements(arr,n);
     
    return 0;
}
