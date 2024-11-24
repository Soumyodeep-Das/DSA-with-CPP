class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int firstPtr=0, lastPtr=0, temp, n=nums.size();
        
        
        while(lastPtr<n){
            if(nums[lastPtr]!=0){
                temp=nums[lastPtr];
                nums[lastPtr]=nums[firstPtr];
                nums[firstPtr]=temp;
                firstPtr++;
            } 
            lastPtr++;
        }
        
        /*
        while(lastPtr<nums.size()){
            if(nums[lastPtr]==0 && lastPtr>=0){
                for(int i=lastPtr+1; i<nums.size(); i++){
                    temp=nums[i];
                    nums[i]=nums[i-1];
                    nums[i-1]=temp;
                }
                lastPtr=firstPtr;
                firstPtr++;
            } else {
                lastPtr++;
            }
        }
        */

        
        /*
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                for(int j=i+1; j<nums.size(); j++){
                    temp=nums[j];
                    nums[j]=nums[j-1];
                    nums[j-1]=temp;
                }
            }
            
        }
        */
    }
};
