//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
     int a=INT_MAX,b=INT_MAX;
    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            a=i;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            b=i;
        }
    }
    //cout<<a<<" "<<b;
    vector<int>v= {-1,-1};
    if(a==INT_MAX && b==INT_MAX) {
        return v;
    }
   v[0]=b;
   v[1]=a;
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends