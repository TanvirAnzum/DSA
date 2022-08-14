var merge = function (nums1, m, nums2, n) {
    let arr = nums1.splice(0,m);
    let i,j,k;
    i = 0 , j = 0, k = 0;
    
    while(i < m && j < n) {

        if(arr[i] <= nums2[j]) {
            nums1[k] = arr[i];
            i++;
        }
        else {
            nums1[k] = nums2[j];
            j++;
        }
        k++;
    }
   
    while(i < m) {
        nums1[k] =  arr[i];
        i++;
        k++;
    }
    console.log(nums1);
    while(j < n) {
        nums1[k] = nums2[j];
        j++;
        k++;
    }
};

const num1 = [1,2,3,0,0,0]
const m = 3
const num2 = [2,5,6]
const n = 3


console.log(merge([1,2,3,0,0,0],3,[2,5,6],3));
