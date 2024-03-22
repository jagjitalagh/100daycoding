class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
         string ans;
        if(numerator*1LL*denominator<0)ans+="-";
        numerator=abs(numerator);
        denominator=abs(denominator);
        ans+=to_string(numerator/denominator);
        long long remainder=numerator%denominator;
        if(!remainder)return ans;
        ans+=".";
        map<int,int>m;
        while(remainder!=0){
            if(m.find(remainder)!=m.end()){
                ans.insert(ans.begin()+m[remainder],'(');
                ans.push_back(')');
                break;
            }else{
                m[remainder]=ans.size();
                remainder*=10;
                ans+=to_string(remainder/denominator);
                remainder%=denominator;
            }
        }
        return ans;
    }
};