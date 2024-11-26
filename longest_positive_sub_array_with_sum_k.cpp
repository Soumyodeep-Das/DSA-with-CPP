class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        int firstPtr=0, lastPtr=-1, n=arr.size(), sum=0;
        int len=0;
        while(lastPtr<n){
            if(sum<k){
                sum+=arr[++lastPtr];
            } else if (sum==k){
                len=max(len, lastPtr-firstPtr+1);
                sum+=arr[++lastPtr];
            }
            else {
                sum-=arr[firstPtr++];
            }
        }
        return len;
    }
};
