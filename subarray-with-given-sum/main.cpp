#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector<int> v;
        int first=0;
        int last=0;
        int sum=0;
        int flg=0;

        while(first<=n)
        {
            if(sum==s)
                {
                    flg=1;
                    break;
                }  // 1 based indexing

            else if(sum<s)
            {
                sum+=arr[first];
                first++;
            }

            else if(sum>s && last<n)
            {
                sum-=arr[last];
                last++;
            }

        }

        if(flg==1)
        {
            v.push_back(last+1);
            v.push_back(first);
        }
        else
            v.push_back(-1);

        return v;
    }



};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);

        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;

    }
	return 0;
 }
