//PROBLEM LINK
https://leetcode.com/problems/integer-break/

//DO NOT SUBMIT THIS CODE, THIS IS TO LOOK, IF YOU GET STUCK SOMEWHERE

class Solution {
public:
    int integerBreak(int n) {
    if (n == 2)
        return 1;
    if (n == 3)
        return 2;
    int prod = 1;
    while (n > 4)
    {
        prod *= 3;
        n = n - 3;
    }
    prod *= n;
    return prod;
    }
};
