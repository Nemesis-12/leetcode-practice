/*
LEETCODE 739. Daily Temperatures
Given an array of integers temperatures represents the daily temperatures, return 
an array answer such that answer[i] is the number of days you have to wait after 
the ith day to get a warmer temperature. If there is no future day for which this 
is possible, keep answer[i] == 0 instead.

Example 1:
Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]

Example 2:
Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]

Example 3:
Input: temperatures = [30,60,90]
Output: [1,1,0]

Constraints:
1 <= temperatures.length <= 105
30 <= temperatures[i] <= 100
*/

// Time Complexity: O(n)

#include <iostream>
#include <vector>
#include <stack>

std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {

    std::vector<int> rs(temperatures.size(), 0);
    std::stack<int> st;

    for (int i = 0; i < temperatures.size(); i++) {

        // if the stack is not empty and the current temperature is greater than
        // the top of the stack, then we have found the next warmer day
        while (!st.empty() && temperatures.at(i) > temperatures.at(st.top())) {
            // get the index of the top of the stack
            int idx = st.top();
            st.pop();
            rs[idx] = i - idx;
        }

        // push the index of the current temperature
        st.push(i);
    }

    return rs;
}

int main() {
    std::vector<int> temperatures = { 73,74,75,71,69,72,76,73 };
    std::vector<int> rs = dailyTemperatures(temperatures);

    for (int i = 0; i < rs.size(); i++) {
        std::cout << rs[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}