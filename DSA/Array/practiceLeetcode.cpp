#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void heapify(vector<int>& nums, int n, int i) {
        int largest = i;          // Initialize largest as root
        int left = 2 * i + 1;     // Left child index
        int right = 2 * i + 2;    // Right child index

        // If left child is larger than root
        if (left < n && nums[left] > nums[largest])
            largest = left;

        // If right child is larger than the largest so far
        if (right < n && nums[right] > nums[largest])
            largest = right;

        // If largest is not root
        if (largest != i) {
            swap(nums[i], nums[largest]);
            // Recursively heapify the affected subtree
            heapify(nums, n, largest);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Build max heap
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(nums, n, i);

        // Step 2: Extract elements one by one from heap
        for (int i = n - 1; i > 0; i--) {
            // Move current root to end
            swap(nums[0], nums[i]);

            // Call heapify on reduced heap
            heapify(nums, i, 0);
        }

        return nums;
    }
};

int main() {
    Solution sol;

    // Example 1
    vector<int> nums1 = {5, 2, 3, 1};
    vector<int> sorted1 = sol.sortArray(nums1);
    cout << "Output 1: ";
    for (int num : sorted1) cout << num << " ";
    cout << endl;

    // Example 2
    vector<int> nums2 = {5, 1, 1, 2, 0, 0};
    vector<int> sorted2 = sol.sortArray(nums2);
    cout << "Output 2: ";
    for (int num : sorted2) cout << num << " ";
    cout << endl;

    return 0;
}
