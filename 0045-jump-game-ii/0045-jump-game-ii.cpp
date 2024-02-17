class Solution {
public:
    int jump(vector<int>& arr) {
      int n = arr.size();
        if (n == 1) return 0;
        int k = n - 1;
        int cnt = 0;
        
        for (int i = 0; i < n;) {
            if (i + arr[i] >= k) {
                cnt++;
                break;
            }

            int maxJump = 0;
            int nextIndex = i;

            // Find the maximum reachable index in a single jump
            for (int j = i + 1; j <= i + arr[i]; j++) {
                if (j + arr[j] >= maxJump) {
                    maxJump = j + arr[j];
                    nextIndex = j;
                }
            }

            cnt++;
            i = nextIndex;
        }

        return cnt;  
    }
};