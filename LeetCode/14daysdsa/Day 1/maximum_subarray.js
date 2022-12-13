// using kadanes algorithm

var maxSubArrayUsingKadane = function(nums) {
    let currentSum = 0;
    let maximumSum = Number.MIN_SAFE_INTEGER;
    nums.map(item => {
        currentSum += item;
        if(currentSum > maximumSum) maximumSum = currentSum;
        if(currentSum < 0) currentSum = 0;
    })
    return maximumSum;
};

//using divide and conquer approach

const maximumSum = (nums,low,high) => {
    if(high <= low) return nums[low];

    let mid = parseInt((high + low)/2);

    let leftMax = Number.MIN_SAFE_INTEGER;
    let sum = 0;
    for(let i=mid;i>=0;i--) {
        sum += nums[i];
        if(sum > leftMax) leftMax= sum;
    }

    let rightMax = Number.MIN_SAFE_INTEGER;
    sum = 0;
    for(let i=mid+1;i<=high;i++) {
        sum += nums[i];
        if(sum > rightMax) rightMax= sum;
    }
    let max_left_right = Math.max(maximumSum(nums,low,mid),maximumSum(nums,mid+1,high));
    
    return Math.max(max_left_right,leftMax+rightMax);
}


var maxSubArray = function(nums) {
    return maximumSum(nums,0,nums.length - 1);
}

console.log(maxSubArray([-2,1,-3,4,-1,2,1,-5,4]));