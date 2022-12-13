const swap = (arr, i, j) => {
  const temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
};

var reverseOnlyLetters = function (str) {
  let s = str.split("");
  let start = 0;
  let end = s.length - 1;
  while (start < end) {
    if (s[start].match(/[a-z]/i) && s[end].match(/[a-z]/i)) {
      swap(s, start, end);
      start++;
      end--;
    }
    if (!s[start].match(/[a-z]/i)) start++;
    if (!s[end].match(/[a-z]/i)) end--;
  }

  return s.join("");
};

console.log(reverseOnlyLetters("a-bC-dEf-ghIj"));
