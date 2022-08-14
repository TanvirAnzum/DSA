// 118. Pascal's Triangle

var generate = function(numRows) {
    let output = [];
    for(let i=1;i<=numRows;i++) {
        let value = 1;
        let row = [];
        for(let j=1;j<=i;j++) {
            row.push(value);
            value = parseInt(value * (i - j) / j);
        }
        output.push(row);
        row = [];
    }

    return output;
};



console.log(generate(5));
