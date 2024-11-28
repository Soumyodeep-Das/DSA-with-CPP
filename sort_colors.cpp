class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a=b;
        b=temp;
    }
    void sortColors(vector<int>& nums) {
        // Brute Force Approach || WORKING
        /*
        vector<int> result;
        int zeroCount=0, oneCount=0, twoCount=0;
        int n=nums.size(), i;
        for(i=0; i<n; i++){
            if(nums[i]==0)
                zeroCount++;
            else if(nums[i]==1)
                oneCount++;
            else
                twoCount++;
        }
        for(i=0; i<zeroCount; i++){
            nums[i]=0;
        }
        for(i=zeroCount; i<oneCount+zeroCount; i++){
            nums[i]=1;
        }
        for(i=zeroCount+oneCount; i<twoCount+oneCount+zeroCount; i++){
            nums[i]=2;
        }
        */


        // Better Approach || WORKING
        
        int firstPtr=0, lastPtr=0, currentVal=0;
        int n=nums.size();
        while(firstPtr<n){
            if(lastPtr==n){
                currentVal++;
                lastPtr=firstPtr;
            }
            if(currentVal>2) break;
            if(nums[lastPtr]==currentVal){
                swap(nums[firstPtr], nums[lastPtr]);
                firstPtr++;
            } 
            lastPtr++;
        }
        

        
        // Optimized Approach || WORKING

        /*
        int firstPtr=0, midPtr=0, lastPtr=nums.size()-1;
        while(midPtr<=lastPtr){
            if(nums[midPtr]==0){
                swap(nums[firstPtr], nums[midPtr]);
                midPtr++;
                firstPtr++;
            } else if(nums[midPtr]==1){
                midPtr++;
            } else {
                swap(nums[lastPtr], nums[midPtr]);
                lastPtr--;
            }
        }

        */
    }
};
