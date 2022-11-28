//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    int i=0;
	    int j=0;
	    int start=0,end=-1;
	    int ms=0;
	    while(j<n){
	        int sum=0;
	       
	        while(a[j]>=0 && j<n){
	            sum+=a[j];
	            //cout<<j<<" ";
	            j++;
	        }
	        //cout<<sum<<" ";
	        if(sum>ms){
	            ms=sum;
	            start=i;
	            end=j-1;
	            i=j+1;
	        }
	        
	        j++;
	        i=j;
	    }
	    vector<int>ans;
	    if(end==-1) {
	        ans.push_back(-1);
	        return ans;
	    }
	    for(start;start<=end;start++){
	        ans.push_back(a[start]);
	    }
	    //cout<<endl;
	    return ans;
	    
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends