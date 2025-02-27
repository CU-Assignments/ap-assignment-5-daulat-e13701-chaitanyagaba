//108. Convert Sorted Array to Binary Search Tree(You'll find the solved on my leet id with link following- https://leetcode.com/u/22bcs15984/
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return constructBST(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* constructBST(const vector<int>& nums, int left, int right) {
        if (left > right) {
            return nullptr;
        }
        int mid = left + (right - left) / 2;
        return new TreeNode(nums[mid], constructBST(nums, left, mid - 1), constructBST(nums, mid + 1, right));
    }
};
