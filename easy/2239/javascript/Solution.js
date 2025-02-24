var findClosestNumber = function(nums) {
    let closest = nums[0];
    nums.forEach((num) => {
        if (Math.abs(num) < Math.abs(closest) || (Math.abs(num) == Math.abs(closest) && num > closest)) {
            closest = num;
        }
    });
    return closest;
};