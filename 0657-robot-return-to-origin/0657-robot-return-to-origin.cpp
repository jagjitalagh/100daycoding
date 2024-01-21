class Solution {
public:
    bool judgeCircle(string moves) {
         short int countU = 0, countL = 0;
        for (char move : moves) {
            if (move == 'U') {
                countU++;
            } else if (move == 'D') {
                countU--;
            } else if (move == 'R') {
                countL++;
            } else if (move == 'L') {
                countL--;
            }
        }
        return (countU == 0 && countL == 0);
    }
};