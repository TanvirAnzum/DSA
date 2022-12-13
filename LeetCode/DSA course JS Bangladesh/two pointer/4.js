const mergedArr = (arr1, arr2) => {
  let i = 0;
  let j = 0;
  const merged = [];
  while (i < arr1.length && j < arr2.length) {
    if (arr1[i] < arr2[j]) {
      merged.push(arr1[i]);
      console.log(i, j);
      i++;
    } else {
      merged.push(arr2[j]);
      console.log(i, j);
      j++;
    }
  }

  console.log(merged, i, j);

  while (j < arr2.length) {
    merged.push(arr2[j]);
    j++;
  }

  console.log(arr1.length);
  while (i < arr1.length) {
    console.log(i);
    merged.push(arr1[i]);
    i++;
  }

  console.log(merged, i, j);

  return merged;
};

var findMedianSortedArrays = function (nums1, nums2) {
  const ans = mergedArr(nums1, nums2);
  console.log(ans);
  let len = ans.length;
  console.log(len);

  if (len % 2 === 0) {
    len = parseInt(len / 2);
    console.log(len);
    return (Number(ans[len - 1]) + Number(ans[len])) / 2;
  } else {
    len = parseInt(len / 2);
    return ans[len];
  }
};

console.log(findMedianSortedArrays([1, 3], [2, 4]));
