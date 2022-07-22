class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        vector<int> arr;
        for(int i = 0;i<m+n;i++)
            if(i<n)
                arr.push_back(a[i]);
            else
                arr.push_back(b[i-n]);
        sort(arr.begin(),arr.end());
        int c = 1;
        for(int i = 1; i<m+n; i++)
        {
            if(arr[i] != arr[i-1])
                c++;
        }
        return c;
    }
};
