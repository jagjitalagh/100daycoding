class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            string say="1";
            return say;
        }
        else{
            string say=countAndSay(n-1);
            int count=0;
            string result;
        for(int i=0;i<say.size();i++){
            if(i + 1 < say.size() && say[i+1]==say[i]){
                count++;
            }
            else{
                result+= to_string(count+1) + say[i];
                count=0;
            }

        }
        return result;
        }
    }
};