class Solution {
public:
    int calcWaviness(string s) {
        int tots = 0;
        for (int i = 1; i < s.length() - 1; i++) {

            // for peak i , i -1 and i +1 should be less
            if (s[i] > s[i - 1] && s[i] > s[i + 1]) {
                tots++;
            }
            if (s[i] < s[i - 1] && s[i] < s[i + 1]) {
                tots++;
            }
            // for valley i , i -1 and i +1 should be greater
        }
        return tots;
    }

    int totalWaviness(int num1, int num2) {
        int waviness = 0;
        for (int i = num1; i <= num2; i++) {
            // cout << i << " ";
            string s = to_string(i);
            waviness += calcWaviness(s);
        }
        return waviness;
        // totalWaviness(num1, num2);
    }
};
