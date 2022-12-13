var search = function (nums, target) {
  if (target < nums[0]) return 0;

  let start = 0;
  let end = nums.length - 1;

  let ans;
  while (start <= end) {
    let mid = Math.floor((start + end) / 2);
    if (nums[mid] > target) end = mid - 1;
    else if (nums[mid] <= target) {
      ans = mid;
      start = mid + 1;
    }
  }

  if (nums[ans] === target) return ans;
  else return ans + 1;
};

var searchInsert = function (nums, target) {
  return search(nums, target);
};

console.log(searchInsert([1, 3, 5, 6], 0));
