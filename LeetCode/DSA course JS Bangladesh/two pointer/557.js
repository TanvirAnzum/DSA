let reverse = (string) => {
  let str = "";
  for (let i = string.length - 1; i >= 0; i--) {
    str += string[i];
  }
  console.log(str);
  return str;
};

var reverseWords = function (s) {
  const arr = s.split(" ");
  const result = arr.map((item) => reverse(item));
  return result.join(" ");
};

console.log(reverseWords("Let's take LeetCode contest"));
