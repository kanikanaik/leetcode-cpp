class Solution {
public:
    char kthCharacter(int k) {
        // string word = "a";

        // while (word.length() < k) {
        //     string temp = "";
        //     for (int i = 0; i < word.length(); i++) {

        //         temp += word[i] + 1;
        //     }
        //     word += temp;
        // }
        // return word[k - 1];

        if (k == 1)
            return 'a';

        int len = 1;

        while (len < k) {
            len *= 2;
        }

        int half = len / 2;

        if (k <= half)
            return kthCharacter(k);

        return kthCharacter(k - half) + 1;
    }
};
