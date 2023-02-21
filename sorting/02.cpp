// Given an array Arr of N positive integers. Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).
// Note: There can be more than one element in the array which have the same value as its index. You need to include every such element's index. Follows 1-based indexing of the array.



public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> ans;
	    for(int i=1;i<=n;i++)
	    {
	        if(arr[i-1]==i) ans.push_back(i);
	    }
	    
	    return ans;
	}
};
