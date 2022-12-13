var isAnagram = function(s, t) {
    const obj1 = {}, obj2 = {};
    if(s.length !== t.length) return false;
    for(let i=0;i<s.length;i++){
        if(!obj1[s[i]]) obj1[s[i]] = 1;
        else obj1[s[i]]++;

        if(!obj2[t[i]]) obj2[t[i]] = 1;
        else obj2[t[i]]++;
    }

    for(let i=0;i<s.length;i++) {
        if(obj1[s[i]] !== obj2[s[i]]) return false;
    }

    return true;
};


console.log(isAnagram('anagram','nagaram'));