class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> c;
        int vs=0,cs=0;
        for(int i=0;i<s.size();i++)
        {
            c[s[i]]++;
        }
        for(auto a:c)
        {
            if(a.first=='a' || a.first=='e' || a.first=='i' || a.first=='o' || a.first=='u')
            {
                vs=max(vs,a.second);
            }
            else
            {
                cs=max(cs,a.second);
            }
        }
        return vs+cs;
    }
};