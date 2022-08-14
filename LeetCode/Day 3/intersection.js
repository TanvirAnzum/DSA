///Intersection of Two Arrays II

var intersect = function(nums1, nums2) {
    const obj = {};
    for(let i=0;i<nums1.length;i++) {
        if(obj[nums1[i]] === undefined) {
            obj[nums1[i]] = 1;
        }
        else obj[nums1[i]]++;
    }
    let intersected = [];
    for(let i=0;i<nums2.length;i++) {
        if(obj[nums2[i]]) {
            intersected.push(nums2[i]);
            obj[nums2[i]]--;
        }
    }
    console.log(obj);
    return intersected;
};


console.log(intersect([4,9,5],[9,4,9,8,4]));