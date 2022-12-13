// traditional method :3

// var missingNumber = function (nums) {
//   const memory = new Array(nums.length + 1).fill(1);
//   for (let i = 0; i < nums.length; i++) {
//     memory[nums[i]] = 0;
//   }
//   for (let i = 0; i < memory.length; i++) {
//     if (memory[i]) {
//       return i;
//     }
//   }
// };

var missingNumber = function (nums) {
  let sum = 0;
  nums.map((num) => (sum += num));
  const total = (nums.length * (nums.length + 1)) / 2;
  console.log(total, sum);
  return total - sum;
};

console.log(missingNumber([0, 3, 5, 8, 4, 6, 1, 9, 7]));
