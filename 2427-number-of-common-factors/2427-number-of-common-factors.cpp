class Solution {
public:
    int commonFactors(int a, int b) {
         int s=0;
        int n=max(a,b);
        for(int i=1;i<=n;i++)
        {
            if(a%i==0 && b%i==0)
            s++;
        }
        return s;
    }
};