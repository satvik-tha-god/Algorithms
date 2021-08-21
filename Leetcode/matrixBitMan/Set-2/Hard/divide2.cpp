Problem link: https://leetcode.com/problems/divide-two-integers/
Solution1://normal
class Solution {
public:
    int divide(int dividend, int divisor) {
        int quotient=0;
        while(dividend>divisor){
            dividend=dividend-divisor;
            quotient++;
        }
        return quotient;
    }
};
Solution2://bitm
class Solution {
public:
    int divide(int dividend, int divisor) {
        
        int sign = ((dividend < 0) ^(divisor < 0)) ? -1 : 1;
        dividend = abs(dividend);
        divisor = abs(divisor);
        long long quotient = 0, temp = 0;
        for (int i = 31; i >= 0; --i) {
        if (temp + (divisor << i) <= dividend) {
            temp += divisor << i;
            quotient |= 1LL << i;
                }
            }
 
        return sign * quotient;
        }
    };