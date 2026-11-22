#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int n=nums.size();
    int ans=0;
    for(int n:nums){
        ans^=n;
    }
    return ans;
        // Write your solution here
    }
};