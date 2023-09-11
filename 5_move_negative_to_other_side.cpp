//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        queue <int> po,ne;
        for(int i=0;i<n;i++)
        if(arr[i]<0)
        ne.push(arr[i]);
        else
        po.push(arr[i]);
        
        
        
        int b=ne.size();
        int a=po.size();
        
        // cout<<a<<b<<"end"<<endl;
        
        
        for(int i=0;i<a;i++)
        {
        arr[i]=po.front();
        po.pop();
        }
        for(int i=a;i<a+b;i++)
        {
        arr[i]=ne.front();
        ne.pop();
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends