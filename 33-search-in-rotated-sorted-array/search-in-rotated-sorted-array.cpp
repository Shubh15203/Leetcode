class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if mid points the target
        if (arr[mid] == target) return mid;

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target <= arr[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (arr[mid] <= target && target <= arr[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return -1;
    }
};