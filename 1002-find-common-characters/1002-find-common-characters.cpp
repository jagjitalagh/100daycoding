class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq(26, 0);
        
        // Count the frequency of characters in the first word
        for (int i = 0; i < words[0].size(); i++) {
            freq[words[0][i] - 'a']++;
        }
        
        // Iterate through the rest of the words to update the frequency
        for (int i = 1; i < words.size(); i++) {
            vector<int> freq2(26, 0);
            string st = words[i];
            for (int j = 0; j < st.size(); j++) {
                freq2[st[j] - 'a']++;
            }
            
            // Update the frequency array with the minimum occurrences
            for (int i = 0; i < 26; i++) {
                freq[i] = min(freq[i], freq2[i]);
            }
        }
        
        // Build the result vector based on the final frequency array
        vector<string> ans;
        for (int i = 0; i < 26; i++) {
            char letter = i + 'a';
            string str(1, letter);
            while (freq[i]--) {
                ans.push_back(str);
            }
        }
        
        return ans;
    }
};