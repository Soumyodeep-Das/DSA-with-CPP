class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Brute Force Approach || WORKING

        /*
        int maxCount=0, count=0, i, j;
        int n=nums.size();
        vector<int> result(n,0);
        for(i=0; i<n; i++){
            count=0;
            for(j=i; j<n; j++){
                if(nums[i]==nums[j])
                    count++;
            }
            result[i]=count;
        }
        int maxElement=0;
        for(i=0; i<result.size(); i++){
            if(maxCount<result[i]){
                maxElement=i;
                maxCount=result[i];
            }
        }
        return nums[maxElement];
        */

        // Better Approach 0(nlogn) || WORKING
        // using Hashmap

        /*
        map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        for (auto ele : mpp){
            if(ele.second>nums.size()/2)
                return ele.first;
        }
        return -1;
        */

        // Best Approach O(n) || WORKING
        // Moore's Voting Algorithm
        int count=0, n=nums.size();
        int currentNum=0, i;
        for(i=0; i<n; i++){
            if(count==0){
                count++;
                currentNum=nums[i];
            }
            else if(currentNum==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int tempCount=0;
        for(i=0; i<n; i++){
            if(currentNum==nums[i])
                tempCount++;
        }
        if(tempCount>n/2)
            return currentNum;
        return -1;
        
    }
};
