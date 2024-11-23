class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int firstPtr=0, lastPtr, k=0;
        for(lastPtr=1; lastPtr<nums.size(); lastPtr++){
            if(nums[firstPtr]!=nums[lastPtr]){
                nums[++firstPtr]=nums[lastPtr];
            }
        }
        return firstPtr+1;
    }
};
