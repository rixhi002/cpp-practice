#include <unordered_map>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    unordered_map<long long, int> prefixSum; // Map to store prefix sums
    int maxLength = 0;
    long long currentSum = 0;

    for (int i = 0; i < a.size(); ++i) {
        currentSum += a[i];

        if (currentSum == k)
            maxLength = i + 1;
        else if (prefixSum.count(currentSum - k))
            maxLength = max(maxLength, i - prefixSum[currentSum - k]);

        if (!prefixSum.count(currentSum))
            prefixSum[currentSum] = i;
    }

    return maxLength;
}
int main()
{
    int n,a,k;
    cin>>n>>k;
    vector  <int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
 
    int max=longestSubarrayWithSumK(arr,k);
    cout<<max;
    return 0;
}
