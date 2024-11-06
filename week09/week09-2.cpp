// week09-2.cpp
// LeetCode 1523
// 找low...high
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) /2;
        if(low%2==1 || high%2==1) ans++; //頭尾有奇數就要+1
        return ans;
    }
};