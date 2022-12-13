// 36. Valid Sudoku

// var isValidSudoku = function(board) {
//  const arr = board.flat();

//  let row = {};
//  for(let i=0;i<arr.length;i++) {
//     const column = {};
//     for(let j=i;j<arr.length;j += 9) {
//         const val = arr[j];
//         if(val !== '.') {
//             if(!column[val]) column[val] = 1;
//             else return false;
//         }
//     }

//     if(i%9==0) {
//         row = {};
//     }

//     if(arr[i] !== '.') {
//         if(!row[arr[i]]) row[arr[i]] = 1;
//         else return false;
//     }
//  }

//   return true;
// };

// public boolean isValidSudoku(char[][] board) {
//     Set seen = new HashSet();
//     for (int i=0; i<9; ++i) {
//         for (int j=0; j<9; ++j) {
//             char number = board[i][j];
//             if (number != '.')
//                 if (!seen.add(number + " in row " + i) ||
//                     !seen.add(number + " in column " + j) ||
//                     !seen.add(number + " in block " + i/3 + "-" + j/3))
//                     return false;
//         }
//     }
//     return true;
// }


var isValidSudoku = function(board) {
    for (let i = 0; i < 9; i++) {
      let row = new Set(),
          col = new Set(),
          box = new Set();
  
      for (let j = 0; j < 9; j++) {
        let _row = board[i][j];
        let _col = board[j][i];
        let _box = board[3*Math.floor(i/3)+Math.floor(j/3)][3*(i%3)+(j%3)]
        
        
        if (_row != '.') {
          if (row.has(_row)) return false;
          row.add(_row);
        }
        if (_col != '.') {
          if (col.has(_col)) return false;
          col.add(_col);
        }
        
        if (_box != '.') {
          if (box.has(_box)) return false;
          box.add(_box);
        } 
      }
    }
    return true
  };







console.log(isValidSudoku([["8","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]))