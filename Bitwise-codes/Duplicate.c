#include <stdio.h>

int findDuplicate(int nums[], int numsSize) {
 
    int slow = nums[0];
    int fast = nums[0];

   
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    
    slow = nums[0];

   
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
   
int nums[] = {1, 3, 4, 2, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int duplicate = findDuplicate(nums, numsSize);
    printf("Duplicate number: %d\n", duplicate); // Output: 2

    return 0;
}
