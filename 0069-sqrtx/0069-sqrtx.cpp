class Solution {
public:
   
long long int helper(int n){
    int s=0;
    int e = n;
    long long int mid = s+(e-s)/2;
    long long int ans=-1;
    
    while(s<=e){
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid>n){
            e = mid-1;
        }
        else{
            ans = mid;
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans; 
}
    
    
    
    
int mySqrt(int n) {
    return helper(n);
    }
};