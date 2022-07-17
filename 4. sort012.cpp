//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

class Solution
{
    public:
    void sort012(int a[], int n)
    {   int c1=0,c2=0,c3=0;
        for(int i=0;i<n;i++)
            if(a[i]==0)
                c1++;
            else if(a[i]==1)
                c2++;
            else
                c3++;
        for(int i=0;i<n;i++)
            if(c1!=0)
            {
                a[i]=0;
                c1--;
            }
            else if(c2!=0)
            {
                a[i]=1;
                c2--;
            }
            else
            {
                a[i]=2;
            }
    }
    
};
