var reversePrefix = function (word, ch) {
  const arr = word.split("");
  if (arr.indexOf(ch) === -1) return arr.join("");
  const res = [];
  let res2;
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === ch) {
      res.unshift(arr[i]);
      res2 = arr.slice(i + 1);
      console.log(res2);
      break;
    }
    res.unshift(arr[i]);
  }

  return res.concat(res2).join("");
};

console.log(reversePrefix("abcdefd", "d"));
