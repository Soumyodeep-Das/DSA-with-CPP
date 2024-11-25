class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result=0, temp=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                result++;
                temp=max(result, temp);
            }
            else
                result=0;
        }
        return temp;
    }
};
