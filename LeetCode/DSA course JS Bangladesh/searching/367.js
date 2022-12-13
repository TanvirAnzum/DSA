var search = function (num) {
  let start = 0;
  let end = num;

  let ans;
  while (start <= end) {
    let mid = Math.floor((start + end) / 2);
    if (mid * mid > num) end = mid - 1;
    else if (mid * mid <= num) {
      ans = mid;
      start = mid + 1;
    }
  }

  return ans;
};

var mySqrt = function (num) {
  return search(num);
};

console.log(mySqrt(1));
