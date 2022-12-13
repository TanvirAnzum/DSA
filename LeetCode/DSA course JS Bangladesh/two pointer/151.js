var reverseWords = function (s) {
  const arr = s.split(" ");
  const filtered = arr.filter((item) => item !== "");
  return filtered.reverse().join(" ");
};

console.log(reverseWords("a good                   example"));
