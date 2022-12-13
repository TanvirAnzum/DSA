var isPalindrome = function (s) {
  const arr = s.split("");
  let i = 0;
  let j = arr.length - 1;
  while (i < j) {
    let a = arr[i].toLowerCase();
    let b = arr[j].toLowerCase();
    if (!a.match(/[a-z0-9]/i)) {
      i++;
      continue;
    }
    if (!b.match(/[a-z0-9]/i)) {
      j--;
      continue;
    }

    if (a === b) {
      i++;
      j--;
    } else {
      return false;
    }
  }
  return true;
};
