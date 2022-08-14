var twoSum = function(nums, target) {
    const obj = {};
    for(let i=0;i<nums.length;i++) {
        obj[nums[i]] = i;
    }
    for(let i=0;i<nums.length;i++) {
        const remaining = target - nums[i];
        if(obj[remaining]) {
            if(obj[remaining] === i) continue;
            return [i,obj[remaining]];
        } 
    }
};


console.log(twoSum([1,3,4,2],6));