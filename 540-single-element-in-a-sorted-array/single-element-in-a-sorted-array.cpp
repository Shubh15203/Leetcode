class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // Initialize the left and right pointers
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            // Set the value of mid
            int mid = l + (r - l) / 2;

            // If mid is odd, decrement it to make it even
            if (mid % 2 == 1) {
                mid--;
            }

            // If the elements at mid and mid + 1 are the same,
            // then the single element must appear after the midpoint
            if (nums[mid] == nums[mid + 1]) {
                l = mid + 2;
            }
            // Otherwise, we must search for the single element before the
            // midpoint
            else {
                r = mid;
            }
        }

        return nums[l];
    }
};