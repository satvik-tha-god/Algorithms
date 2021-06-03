Problem Link:https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1#
Solution:
class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
    int n=a^b;
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;// Your logic here
        
    }
};