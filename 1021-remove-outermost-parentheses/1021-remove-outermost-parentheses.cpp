class Solution {
public:
    string removeOuterParentheses(string s) {
        int c = 0,j = 0;
        string a;

        for(int i = 0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                c++;
                if(c>1)
                a.push_back(s[i]);
            }

            else 
            {
                c--;
                if(c>0)
                a.push_back(s[i]);
            }
        }
        return a;
    }
};