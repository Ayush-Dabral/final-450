class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int a[n],l=0,r=0;
        for(int i=0;i<n;i++)
        {
            a[i] = arr[i];
            if(arr[i] > 0)
                r++;
        }
        for(int i = 0;i<n;i++)
        {
            if(a[i]>=0)
                arr[l++] = a[i];
            else
                arr[r++] = a[i];
        }
    }
};
