class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute Force Approach

        /*
        int i=0, j=0, sum=0, n=nums.size();
        vector<int> result;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(j!=i){
                    sum=nums[i]+nums[j];
                    if(sum==target){
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
                }
            }
        }
        return result;
        */

        // Optimal Approach
        
        int firstPtr=0, lastPtr=1, sum, n=nums.size();
        vector<int> result;
        while(firstPtr<n){
            if(firstPtr!=lastPtr){
                sum=0;
                sum=nums[firstPtr]+nums[lastPtr];
                if(sum==target){
                    result.push_back(firstPtr);
                    result.push_back(lastPtr);
                    return result;
                }
                lastPtr=(lastPtr+1)%n;
            } 
            else {
                firstPtr++;
                lastPtr=0;
            }
        }
        return result;
        
    }
};
