var isValid = function(s) {
    const arr = [];
    let status = true;
    for(let i = 0;i<s.length;i++) {
        const val = s[i];
        if(val === '(' || val === '{' || val === '[') {
            arr.push(val);
        }
        else {
            let val2;
            if(arr.length > 0) {
                val2 = arr.pop();
                if(val === ')' && val2 === '(' || val === '}' && val2 === '{' || val === ']' && val2 === '[') continue;
                else status = false;
            }
            else {
                status = false;
                break;
            }
        }
    }
    
    if(arr.length != 0) status = false;
    return status;
};

console.log(isValid('[]{}'))