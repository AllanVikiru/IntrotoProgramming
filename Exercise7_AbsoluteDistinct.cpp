
#include <iostream>
#include <vector>
#include <cstdlib>  // For abs()
using namespace std;

// Optimized function to count distinct absolute values
// Time Complexity: O(N) - linear time, single pass with duplicate skipping
// Space Complexity: O(1) - constant space
int solution(vector<int> &A) {
    int n = A.size();
    
    // Edge cases
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Two-pointer approach: left points to negatives, right to positives
    int left = 0;           // Start from most negative
    int right = n - 1;      // Start from most positive
    int count = 0;          // Counter for distinct absolute values
    
    // Process until pointers meet or cross
    while (left <= right) {
        // Get absolute values at both ends
        int absLeft = abs(A[left]);
        int absRight = abs(A[right]);
        
        // Compare absolute values and count
        if (absLeft < absRight) {
            // Right absolute value is greater and distinct
            count++;
            int val = absRight;
            right--;
            // CRITICAL: Skip all duplicates of this absolute value on the right side
            while (right >= left && abs(A[right]) == val) {
                right--;
            }
        } 
        else if (absLeft > absRight) {
            // Left absolute value is greater and distinct
            count++;
            int val = absLeft;
            left++;
            // CRITICAL: Skip all duplicates of this absolute value on the left side
            while (left <= right && abs(A[left]) == val) {
                left++;
            }
        } 
        else {
            // Both have same absolute value - count it once
            count++;
            int val = absLeft;  // Store the value we're counting
            
            // Skip duplicates on the left side
            left++;
            while (left <= right && abs(A[left]) == val) {
                left++;
            }
            
            // Skip duplicates on the right side
            right--;
            while (left <= right && abs(A[right]) == val) {
                right--;
            }
        }
    }
    
    return count;
}
