class Solution {
public:
    int reverseDigits(int num) {
        int rev_num = 0;
        while (num > 0) {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
        }
        return rev_num;
    }
    bool isSameAfterReversals(int num) {
        // int temp = num;
        int reverse1 = reverseDigits(num);
        int reverse2 = reverseDigits(reverse1);

        if (num == reverse2) {
            return true;
        }
        return false;
    }
};