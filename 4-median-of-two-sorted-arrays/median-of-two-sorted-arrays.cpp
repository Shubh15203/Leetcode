class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i=0,j=0,k=0;
        int x=n+m;
        int arr[x];
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                arr[k]=nums1[i];
                k++;
                i++;
            }
            else if (nums1[i]>nums2[j]){
                arr[k]=nums2[j];
                k++;
                j++;
            }
        }
        while(i<n){
            arr[k]=nums1[i];
            i++;
            k++;
        }
        while(j<m){
            arr[k]=nums2[j];
            j++;
            k++;
        }
        if(x%2){
            return float(arr[x/2]);
        }
        else{
    double median = ((double)arr[x / 2] + (double)arr[(x / 2) - 1]) / 2.0;
            return median; 
        }
    }
};