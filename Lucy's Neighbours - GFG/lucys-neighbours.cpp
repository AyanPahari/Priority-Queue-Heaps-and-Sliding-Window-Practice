// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<int> Kclosest(vector<int>arr, int n, int x, int k) 
    { 
        priority_queue<pair<int,int>>maxh;
        for(int i=0;i<n;i++){
            maxh.push({abs(arr[i] - x), arr[i]});
            if(maxh.size() > k) maxh.pop();
        }
        vector<int>res;
        while(!maxh.empty()){
            res.push_back(maxh.top().second);
            maxh.pop();
        }
        sort(res.begin(),res.end());
        return res;
    }
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k;
		cin>>n>>x>>k; 
		vector <int> array(n);
		for (int i = 0; i < n; ++i)
			cin>>array[i];
        
        Solution obj;
		vector <int> result = obj.Kclosest(array, n, x, k); 
		for (int i = 0; i < result.size(); ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}

	return 0; 
} 



  // } Driver Code Ends