class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        int k = 0;

        // Step 1: skip trailing spaces
        while(i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: count last word
        while(i >= 0 && s[i] != ' ') {
            k++;
            i--;
        }

        return k;
    }
};