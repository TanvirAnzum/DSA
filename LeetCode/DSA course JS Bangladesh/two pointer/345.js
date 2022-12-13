const reverse = (str) => {
  const arr = str.split("");
  let i = 0;
  let j = arr.length - 1;
  while (i < j) {
    const a = arr[i].toLowerCase();
    const b = arr[j].toLowerCase();

    if (/^[aeiou]$/i.test(a) && /^[aeiou]$/i.test(b)) {
      const temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
      j--;
    }
    if (!/^[aeiou]$/i.test(a)) i++;
    if (!/^[aeiou]$/i.test(b)) j--;
  }
  return arr.join("");
};

var reverseVowels = function (s) {
  return reverse(s);
};

console.log(reverseVowels("hello"));
