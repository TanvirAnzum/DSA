var nextGreatestLetter = function (letters, target) {
  let i = 0;
  while (i < letters.length) {
    if (letters[i] > target) {
      return letters[i];
      break;
    }

    i++;
  }
  return letters[0];
};

console.log(nextGreatestLetter([["x", "x", "y", "y"]], "a"));
