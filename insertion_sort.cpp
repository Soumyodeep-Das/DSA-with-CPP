class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
        int temp;
        for(;i>0;i--){
            if(arr[i]>arr[i-1])
                break;
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for(int i=0; i<n; i++){
            insert(arr, i);
        }
    }
};
