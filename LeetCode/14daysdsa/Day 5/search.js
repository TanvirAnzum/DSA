// 74. Search a 2D Matrix

var searchMatrix = function(matrix, target) {
    const arr = matrix.flat();
    if(arr[arr.length - 1] < target) return false;
    for(let i=0;i<arr.length;i++) {
        if(arr[i]>target) return false;
        if(arr[i] == target) return true;
    }
    
    return false;
};



console.log(searchMatrix([[1,3,5,7],[10,11,16,20],[23,30,34,60]],3));