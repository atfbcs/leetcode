import java.lang.Math;

class Solution {
    public int findClosestNumber(int[] nums) {
        int closest = nums[0];
        for (int num : nums) {
            if (Math.abs(num) < Math.abs(closest) || (Math.abs(num) == Math.abs(closest) && num > closest)) {
                // If the absolute value of 'num' is smaller than the absolute value of 'closest',
                // then 'num' is closer to zero and should become the new 'closest'.

                // If the absolute values are the same, we prefer the larger number
                // (since we return the largest number in case of a tie).

                closest = num; // Update 'closest' with the new number.
            }
        }
        return closest;
    }
}