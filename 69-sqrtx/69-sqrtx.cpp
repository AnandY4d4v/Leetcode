class Solution {
    private:
    int binarySearch(int n){
    int s=0;
    int e=n;
    int ans=-1;
    unsigned long long int mid=s+(e-s)/2;

    while(s<=e){
        unsigned long long int square=mid*mid;
           cout<<square<<" "<<mid;
        if(square==n)
            return mid;
       else if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
            e=mid-1;

    mid=s+(e-s)/2;
    }

return ans;
    }
public:
    int mySqrt(int x) {
            return binarySearch(x);
    }
};