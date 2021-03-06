/* 136. Single Number
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Input: nums = [2,2,1]
Output: 1

Input: nums = [4,1,2,1,2]
Output: 4

Input: nums = [1]
Output: 1
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 异或，两次的全抵消了
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (auto num : nums) 
            res ^= num;
        return res;
    }
};