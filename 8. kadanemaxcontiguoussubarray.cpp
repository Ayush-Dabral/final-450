class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        int sum = 0, ms = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            sum += arr[i];
            if(sum > ms)
                ms = sum;
            if(sum < 0)
                sum = 0;
        }
        return ms;
    }
};
