var search = function (arr) {
  let start = 0;
  let end = arr.length - 1;
  console.log(end);

  while (start <= end) {
    let mid = start + Math.floor((end - start) / 2);
    console.log(mid);
    if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) return mid;
    else if (arr[mid] > arr[mid + 1]) end = mid;
    else if (arr[mid] > arr[mid - 1]) start = mid + 1;
  }
};

var peakIndexInMountainArray = function (arr) {
  return search(arr);
};

console.log(peakIndexInMountainArray([0, 1, 2, 3, 1]));

// start = 0, end = 6 ->
