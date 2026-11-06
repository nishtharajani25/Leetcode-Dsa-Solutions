<! BRUTE APPROACH !>
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

        // Using set for storing unique elements
        set<int> s;
        vector<int> Union;

        // Insert all elements of nums1 into the set
        for (int num : nums1) {
            s.insert(num);
        }

        // Insert all elements of nums2 into the set
        for (int num : nums2) {
            s.insert(num);
        }

        // Convert the set to vector to get the union
        for (int num : s) {
            Union.push_back(num);
        }

        return Union;
    }
};

<! OPTIMAL APPROACH !>
  class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

        vector<int> Union;
        int i = 0, j = 0;
        int n = nums1.size();
        int m = nums2.size();

        while (i < n && j < m) {

            // Case 1 and 2
            if (nums1[i] <= nums2[j]) {
                if (Union.size() == 0 || Union.back() != nums1[i])
                    Union.push_back(nums1[i]);

                i++;
            }

            // Case 3
            else {
                if (Union.size() == 0 || Union.back() != nums2[j])
                    Union.push_back(nums2[j]);

                j++;
            }
        }

        // If any element left in arr1
        while (i < n) {
            if (Union.empty() || Union.back() != nums1[i])
                Union.push_back(nums1[i]);
            i++;
        }

        // If any elements left in arr2
        while (j < m) {
            if (Union.empty() || Union.back() != nums2[j])
                Union.push_back(nums2[j]);
            j++;
        }

        return Union;
    }
};

