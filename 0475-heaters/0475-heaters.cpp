class Solution {
public:
    bool isPossible(const vector<int>& houses, const vector<int>& heaters, int radius) 
    {
        int c = 0; 
        for (int i = 0, j = 0; i < houses.size() && j < heaters.size(); ++j) {
            while (i < houses.size() && abs(heaters[j] - houses[i]) <= radius) {
                ++c; 
                ++i; 
            }
        }
        return c == houses.size(); 
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());

        int start = 0, 
        end = max(houses.back(), heaters.back());

        int result = -1;
        
        while (start <= end) 
        {
            int mid = start + (end - start) / 2;

            if (isPossible(houses, heaters, mid)) 
            {
                result = mid;
                end = mid - 1;
            } 
            else 
            {
                start = mid + 1;
            }
        }
        
        return result;
    }
};