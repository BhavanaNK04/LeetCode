class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        int ans=0;
        for(auto a:nums)
        {
            freq[a]++;
        }
        for(auto a:freq)
        {
            int n=a.second-1;
            ans=ans+(n*(n+1)/2);
        }
        return ans;
    }
};