class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int ans;
        unordered_map<int,int> n;
        for(int i=0;i<nums.size();i++)
        {
            n[nums[i]]++;
        }
        for(auto a: n)
        {
            if(a.second>1)
            {
                ans=a.first;
            }
        }
        return ans;
    }
};