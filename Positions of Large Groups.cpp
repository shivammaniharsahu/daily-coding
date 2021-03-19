// Leetcode solution of problem no.830. Positions of Large Groups
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> v;
        int st=0,e=0;
        if(s.length()<=2)
            return v;
        for(int i=0;i<s.length()-2;i++)
        {
            if(s[i]==s[i+1]&&s[i+1]==s[i+2])
            {
                st=i;
                char ch=s[i];
                while(i<s.length()&&s[i]==ch)
                {
                    i++;
                }
                e=i-1;
                v.push_back({st,e});
                if(i!=s.length())
                    i--;
            }
        }
        return v;
    }
};
