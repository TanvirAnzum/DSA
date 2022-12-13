// Reshape the Matrix

var matrixReshape = function(mat, r, c) {
    let flatArray = mat.flat();
    let output = [];
    let temp = [];
    if(flatArray.length != (r*c)) return mat;
    flatArray.map(item => {
        temp.push(item);
        if(temp.length == c) {
            output.push(temp);
            temp = [];
        }
        return item;
    })

    return output;
};

console.log(matrixReshape([[1,2],[3,4]],2,2))