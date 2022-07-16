//Find minimum and maximum element in an array

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> sol;
    sol.first = sol.second = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<sol.first)  sol.first = a[i];
        if(a[i]>sol.second) sol.second = a[i];
    }
    return sol;
}
