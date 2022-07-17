//Find the "Kth" max and min element of an array

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    vector<int> sol;
	    priority_queue<int> p;
	    for(int i = 0; i < n; i++)
	        p.push(arr[i]);
	    for(int i= 0;i<k;i++)
	    {
	        sol.push_back(p.top());
	        p.pop();
	    }
	    return sol;
	}

};
