class Solution {
public:
    void reverse(vector<int>& nums, int start, int end){
        int temp;
        for(; start<end; start++, end--){
            temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int temp, n=nums.size();
        k = k % n;

        // reverse the array
        /*
        for(int start=0, end=n-1; start<end; start++, end--){
            temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
        }
        */
        reverse(nums, 0, n-1);

        // reverse the first k'th numbers
        /*
        for(int start=0, end=k-1; start<end; start++, end--){
            temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
        }
        */
        reverse(nums, 0, k-1);

        // reverse the remaining array elements
        /*
        for(int start=k, end=n-1; start<end; start++, end--){
            temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
        }
        */
        reverse(nums, k, n-1);

    }
    
};
