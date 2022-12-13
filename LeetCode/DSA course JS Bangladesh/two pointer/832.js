const reverse = (arr) => {
  const arr2 = [];
  for (let i = arr.length - 1; i >= 0; i--) {
    arr2.push(arr[i] ? 0 : 1);
  }
  console.log(arr2);
  return arr2;
};

var flipAndInvertImage = function (image) {
  const result = image.map((item) => {
    return reverse(item);
  });
  return result;
};

console.log(
  flipAndInvertImage([
    [1, 1, 0, 0],
    [1, 0, 0, 1],
    [0, 1, 1, 1],
    [1, 0, 1, 0],
  ])
);
