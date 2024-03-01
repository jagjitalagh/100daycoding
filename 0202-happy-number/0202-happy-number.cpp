class Solution {
public:
    bool isHappy(int n) {
        std::unordered_set<int> info;
        int temp = 0;
        while (n != 1) {
            int t = 0;
            temp = 0;
            while (n != 0) {
                t = n % 10;
                temp += t * t;
                n /= 10;
            }
            n = temp;
            if (info.contains(temp) && temp != 1) {
                return false;
            }
            info.insert(temp);
        }
        if (n == 1) {
            return true;
        }
        return false;
    }
};