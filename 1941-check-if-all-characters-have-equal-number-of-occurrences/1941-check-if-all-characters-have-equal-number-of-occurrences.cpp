class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]]++;
        }
        int f=freq[s[0]];
        for(auto a:freq)
        {
            if(a.second!=f)
                return false;
        }
        return true;
    }
};