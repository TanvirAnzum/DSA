const swap = (arr, i, j) => {
  const temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
};

var reverseString = function (s) {
  let start = 0;
  let end = s.length - 1;
  while (start < end) {
    swap(s, start, end);
    start++;
    end--;
  }

  return s;
};

console.log(reverseString(["h", "e", "l", "l", "o"]));
