//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool possible(int arr[],int n,int m,int mid){
           
            int sum=0;
            int sudent=1;
            for(int i=0; i<n; i++){
              if(sum+arr[i]<=mid)
           {
               sum+=arr[i];
           }
             
              else {
                    sudent++;
                  if (sudent>m || arr[i]>mid) return false;
                  sum=arr[i];
            }
        }
         return true;
        }
    int splitArray(int A[] ,int n, int m) {
        // code here
        int sum=0;
       int ans=-1;
       for (int i=0;i<n;i++){
           sum+=A[i];
       }
       int s=0;
       int e=sum;
       int mid=s+(e-s)/2;
       //cout<< mid<<" ";
       while(s<=e){
           if(possible(A,n,m,mid)){
               ans=mid;
               e=mid-1;
           }
           else s=mid+1;
            mid=s+(e-s)/2;
            //cout<< mid<<" ";
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends