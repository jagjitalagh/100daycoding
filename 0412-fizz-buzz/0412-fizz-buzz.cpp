class Solution {
public:
    vector<string> fizzBuzz(int n) {
         string s1="Fizz";
        string s2="Buzz";
        string s3="FizzBuzz";
        vector<string> s;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                s.push_back(s3);
                continue;
            }
            else if(i%3==0)
            {
                s.push_back(s1);
            }
            else if(i%5==0)
            {
                s.push_back(s2);
            }
            else
            {
                string stri = to_string(i);
                s.push_back(stri);
            }
        }
        return s;
    }
};