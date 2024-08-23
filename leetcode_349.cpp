#include <vector>
#include <algorithm>
#include <set>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
       
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());

       
        int i = 0, j = 0;
        std::set<int> result;  

      
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                result.insert(nums1[i]);
                ++i;
                ++j;
            } else if (nums1[i] < nums2[j]) {
                ++i;
            } else {
                ++j;
            }
        }

       
        return std::vector<int>(result.begin(), result.end());
    }
};
