class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(auto a:freq)
        {
            if(a.second%k==0)
            {
                ans+=(a.first*a.second);
            }
        }
        return ans;
    }
};