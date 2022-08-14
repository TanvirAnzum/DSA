const Hash = {}

const nums = [1,1,2,3,4,5,56,67,1,90];
let check = false;

for(let i=0;i<nums.length;i++) {
    const value = nums[i];
    if(Hash[value] === undefined) {
        Hash[value] = 1;
    }
    else {
        check = true;
        break;
    }
}

