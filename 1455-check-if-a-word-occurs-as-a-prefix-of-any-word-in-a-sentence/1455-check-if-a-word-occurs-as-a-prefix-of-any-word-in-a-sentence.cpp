class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int sz=sentence.length();
        int pos = sentence.find(searchWord);
        
        int i=0;
        if(pos == std::string::npos) return -1;
        else {
            while(pos<sz){
            i= pos-1;
            if(i<-1) return -1;
            
            if(pos==0 || sentence[i] == ' ') {
                int sp=0;
                for(int j=0;j<pos;j++) if(sentence[j]==' ') sp++;
                return sp+1;
            }
           
            if(pos<sz-1)pos = sentence.find(searchWord, pos+1);}
            
        }
        return -1;
    }
};