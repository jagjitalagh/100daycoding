class Solution {
public:
    bool isEqual(int arr1[], int arr2[]){
        for(int i = 0; i < 26; i++){
            if(arr1[i] != arr2[i]){
                return 0;
            }
        }
        return 1;
    }
    vector<int> findAnagrams(string s, string p) {
       int ns = s.length();
        int np = p.length();
        vector<int> v;

        if(np > ns){
            return v;
        }

        int freqMap[26] = {};
        int hashMap[26] = {};
        for(int i = 0; i < np; i++){
            freqMap[p[i] - 'a']++;
            hashMap[s[i] - 'a']++;
        }

        if(isEqual(freqMap, hashMap)){
            v.push_back(0);
        }

        for(int i = 1; i <= ns - np; i++){
            hashMap[s[i - 1] - 'a']--;
            hashMap[s[i + np - 1] - 'a']++;
            if(isEqual(freqMap, hashMap)){
                v.push_back(i);
            }
        }

        return v; 
    }
};