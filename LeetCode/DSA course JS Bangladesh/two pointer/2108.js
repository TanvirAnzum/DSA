const isPalindrom = (word) => {
  let start = 0;
  let end = word.length - 1;

  while (start < end) {
    if (word[start] != word[end]) return false;
    start++;
    end--;
  }
  return true;
};

var firstPalindrome = function (words) {
  for (let i = 0; i < words.length; i++) {
    if (isPalindrom(words[i])) return words[i];
  }
  return "";
};

console.log(firstPalindrome(["aba", "word"]));
