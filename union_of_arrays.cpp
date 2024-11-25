class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        vector<int> result;
        int firstPtr=0, lastPtr=0;
        int n1=a.size(), n2=b.size();
        
        for(;firstPtr<n1 && lastPtr<n2;){
            if(a[firstPtr]<=b[lastPtr]){
                if(result.size()==0 || result.back() != a[firstPtr]){
                   
                    result.push_back(a[firstPtr]);
                }
                firstPtr++;
            }
            else{
                if(result.size()==0 || result.back() != b[lastPtr]){
                    
                    result.push_back(b[lastPtr]);
                }
                lastPtr++;
            }
        }
        while(firstPtr<a.size()){
            if(result.size()==0 || result.back() != a[firstPtr]){
                   
                    result.push_back(a[firstPtr]);
                }
                firstPtr++;
        }
        
        while(lastPtr<b.size()){
            if(result.size()==0 || result.back() != b[lastPtr]){
                    
                    result.push_back(b[lastPtr]);
                }
                lastPtr++;
        }
        return result;
        
    }
};
