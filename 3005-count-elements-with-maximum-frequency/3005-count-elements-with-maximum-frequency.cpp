class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> n;
        for(int i=0;i<nums.size();i++)
        {
            n[nums[i]]++;
        }
        int maxfreq=0;
        for(auto a:n)
        {
            maxfreq=max(maxfreq,a.second);
        }
        for(auto a:n)
        {
            if(a.second==maxfreq)
            {
                ans+=a.second;
            }
        }
        return ans;
    }
};