class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int max=0, secMax=-1;
        for(int i=0; i<arr.size(); i++){
            if(max<arr[i]){
                secMax=max;
                max=arr[i];
            } else if (max>arr[i] && secMax<arr[i]){
                secMax=arr[i];
            } else{
               // return -1;
            }
        }
        return secMax==0 ? -1 : secMax;
    }
};
