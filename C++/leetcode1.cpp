/*
LEETCODE 1. Two Sum
Given an array of integers nums and an integer target, return indices of the two 
numbers such that they add up to target. You may assume that each input would have
exactly one solution, and you may not use the same element twice. You can return
the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:
2 <= nums.length <= 103
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
*/

#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> result;
    for (auto i : nums) {
        for (auto j : nums) {
            if (i + j == target) {
                result.push_back(i);
                result.push_back(j);
                // This return statement is here to prevent the program from
                // going through the entire loop.
                return result;
            }
        }
    }
    return result;
}

int main() {
    std::vector<int> nums{ 2, 7, 11, 15 };
    int target = 9;
    std::vector<int> result = twoSum(nums, target);
    for (auto i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}