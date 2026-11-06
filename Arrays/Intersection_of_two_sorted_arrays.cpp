<! BRUTE APPROACH !>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {

        // Store common elements
        vector<int> ans;

        // Track visited elements of nums2
        vector<int> visited(nums2.size(), 0);

        // Traverse nums1
        for (int i = 0; i < nums1.size(); i++) {

            // Traverse nums2
            for (int j = 0; j < nums2.size(); j++) {

                // Check if elements match and are not visited
                if (nums1[i] == nums2[j] && visited[j] == 0) {

                    // Add common element
                    ans.push_back(nums2[j]);

                    // Mark as visited
                    visited[j] = 1;

                    // Stop inner loop
                    break;
                }

                // If nums2[j] is greater, stop searching
                else if (nums2[j] > nums1[i]) {
                    break;
                }
            }
        }

        // Return intersection
        return ans;
    }
};


<! OPTIMAL APPROACH !>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find intersection of two sorted arrays
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {

        // Store common elements
        vector<int> ans;

        // Initialize two pointers
        int i = 0, j = 0;

        // Traverse both arrays
        while (i < nums1.size() && j < nums2.size()) {

            // If first array element is smaller
            if (nums1[i] < nums2[j]) {
                i++;
            }

            // If second array element is smaller
            else if (nums2[j] < nums1[i]) {
                j++;
            }

            // If both elements are equal
            else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        // Return common elements
        return ans;
    }
};

