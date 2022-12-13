const search = function (nums, target) {
  let start = 0;
  let end = nums.length - 1;
  let result = [];

  while (start <= end) {
    let mid = Math.floor((start + end) / 2);
    if (nums[mid] === target) {
      result.push(mid);

      let temp = mid;
      while (++temp) {
        if (nums[temp] === target) result.push(temp);
        else break;
      }
      temp = mid;
      while (temp--) {
        if (nums[temp] === target) result.push(temp);
        else break;
      }

      return result;
    } else if (nums[mid] > target) end = mid - 1;
    else if (nums[mid] < target) start = mid + 1;
  }

  return [];
};

var targetIndices = function (nums, target) {
  const arr = nums.sort((a, b) => a - b);
  let result = search(arr, target);
  const sortedResult = result.sort((a, b) => a - b);
  return sortedResult;
};

console.log(
  targetIndices(
    [
      72, 55, 15, 4, 92, 31, 11, 56, 32, 26, 77, 76, 58, 19, 76, 60, 84, 57, 4,
      57, 37, 95, 97, 68, 43, 90, 87, 23, 46, 33, 66, 5, 31, 42, 30, 99, 50, 68,
      86, 8, 17, 10, 50, 41, 30, 87, 59, 81, 73, 44, 93, 81, 17, 70, 15, 6, 72,
      79, 1, 52, 83, 12, 66, 44, 90, 65, 53, 34, 39, 73, 11, 98, 61, 28, 59, 10,
      100, 59, 56, 39, 47, 40, 1, 73, 88, 2, 40, 70, 22, 91, 43, 47, 74, 97, 16,
      72, 95, 93, 31, 76,
    ],
    1
  )
);
