class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
      sort(tokens.begin(),tokens.end());
        if (tokens.size() == 0 || power < tokens[0]) return 0;
        int left = 0, right = tokens.size() - 1, points = 0;
        while (left <= right) {
            if (power >= tokens[left]) {
                points++;
                power -= tokens[left];
                left++;
            } else {
                if (right - left > 1) {
                    power += tokens[right];
                    right--;
                    points--;
                } else break;
            }
        }
        return points;

    }
};