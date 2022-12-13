// 387. First Unique Character in a String

var firstUniqChar = function(s) {
    const obj = {};
    for(let i=0;i<s.length;i++) {
        if(!obj[s[i]]) obj[s[i]] = 1;
        else {
            obj[s[i]]++;
        };
    }
    for(let i=0;i<s.length;i++) {
        if(obj[s[i]] === 1) return i;
    }

    return -1;
};




console.log(firstUniqChar("abcdef"))