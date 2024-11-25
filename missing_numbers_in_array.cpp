class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // so the range is 0 to n
        int xor1=0, xor2=0;
        for(int i=0; i<=n; i++)
            xor1^=i;
        for(int j=0; j<n; j++){
            xor2^=nums[j];
        }
        int result = xor1^xor2;
        return result;
    }
};
