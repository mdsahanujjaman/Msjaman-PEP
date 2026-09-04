/*
Binary Search:
======================================
1 2 3 4 5 - Elements
0 1 2 3 4 - Indexes

Take two pointers, first pointing to 0th index and last pointing to the last index.
Take a while loop and repeat it until left > right.
In every iteration, find the middle element.
If target is less than the middle element, search the left half.
If target is greater than the middle element, search the right half.

Example Diagram:
======================================
Array:  [1] [2] [3] [4] [5] [6]
Indexes:   0   1   2   3   4   5

Left -> 0        Right -> 5
             ^
            
           Middle

If target = 4:
- middle = 2 (value 3)
- 4 > 3, so search right half

New range:
Left -> 3        Right -> 5

Additional Example:
======================================
Transform array: [1, 0, 3, 0, 4]
Result:          [1, 3, 4, 0, 0]
- Move nonzero values to the left while preserving their order.
- Push zeros to the right side.
#code------------------------------------------------------------

void moveZeroes(std::vector<int>& nums) {
    int insertPos = 0;
    for (int num : nums) {
        if (num != 0) {
            nums[insertPos++] = num;
        }
    }
    while (insertPos < nums.size()) {
        nums[insertPos++] = 0;
    }
}


#by Swapping-------------------------------------------------

void moveZeroes(std::vector<int>& nums) {
    int lastNonZeroFoundAt = 0;
    for (size_t i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            std::swap(nums[lastNonZeroFoundAt], nums[i]);
            lastNonZeroFoundAt++;
        }
    }
}
-----------------------------------------------------------
*/  

/*
#Now all zero will be beginning of the array and all non-zero will be at the end of the array.

void moveZeroesToFront(std::vector<int>& nums) {
    int insertPos = 0;
    for (int num : nums) {
        if (num == 0) {
            nums[insertPos++] = num;
        }
    }
    while (insertPos < nums.size()) {
        nums[insertPos++] = 1; // Assuming 1 is the non-zero value to fill
    }
}

#output: [0, 0, 1, 1, 1] for input [1, 0, 3, 0, 4] ------------------
*/

/*
#GENERAL-CPP-CODE---------------------------------------

int binarySearch(const std::vector<int>& arr, int target) { 
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == target) {
            return middle;
        } else if (arr[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1; // Target not found
}

---------------------------------------------------------------------
*/

/*
#ArraySwapping---------------------------------------------------
#Question: Move all zeros to the beginning of the array and 
 all non-zero elements to the end of the array.

#Code:--

#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 3, 4, 0, 0};
    std::vector<int> result(arr.size());
    int index = 0;

    // First copy all zeros
    for (int num : arr) {
        if (num == 0) {
            result[index++] = 0;
        }
    }

    // Then copy non-zero elements
    for (int num : arr) {
        if (num != 0) {
            result[index++] = num;
        }
    }

    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
----------------------------------------------------------------*/