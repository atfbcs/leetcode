struct Solution;

impl Solution {
    pub fn find_closest_number(nums: Vec<i32>) -> i32 {
        let mut closest = nums[0];

        for &num in nums.iter().skip(1) {
            if num.abs() < closest.abs() || (num.abs() == closest.abs() && num > closest) {
                closest = num;
            }
        }

        closest
    }
}

fn main() {
}