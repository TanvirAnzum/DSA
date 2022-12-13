var solution = function (n) {
  let start = 0;
  let end = num;

  while (start <= end) {
    let mid = start + Math.floor((end - start) / 2);
    if (isBadVersion(mid)) end = mid - 1;
    else start = mid + 1;
  }

  return start;
};

console.log(solution(10));
