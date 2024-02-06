class Solution {
public:
    string defangIPaddr(string address) {
        string str1="";
        string str="[.]";
        for(int i = 0; address[i] != '\0'; i++)
        {
            if(address[i]=='.')
            {
                str1 = str1 + str;
            }
            else
                str1 = str1 + address[i];
        }
        return str1;
    }
};