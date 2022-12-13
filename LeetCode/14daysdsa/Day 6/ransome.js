var canConstruct = function(ransomNote, magazine) {
    const ran = {};
    const mag = {};
    for(let i=0;i<ransomNote.length;i++) {
        const item = ransomNote[i];
        if(!ran[item]) ran[item] = 1;
        else ran[item]++;
    }

    for(let i=0;i<magazine.length;i++) {
        const item = magazine[i];
        if(!mag[item]) mag[item] = 1;
        else mag[item]++;
    }

    for(let i=0;i<ransomNote.length;i++) {
        const item = ransomNote[i];
        if(!mag[item]) return false;
        if(mag[item]<ran[item]) return false;
    }

    return true;
};


console.log(canConstruct('ba','baa'));