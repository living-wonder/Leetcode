#include <vector>
#include <algorithm>  // for std::reverse

class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // handle cases where k > n
        if (k == 0 || n <= 1) return; // no rotation needed
        
        // Ensure the iterators are within bounds
        std::reverse(nums.begin(), nums.begin() + n - k);
        std::reverse(nums.begin() + n - k, nums.end());
        std::reverse(nums.begin(), nums.end());
    }
};
