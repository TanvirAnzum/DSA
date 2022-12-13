// 21. Merge Two Sorted Lists

var mergeTwoLists = function(list1, list2) {
    const head = {
        val: -1,
        next: null,
    }
    
    let newList = head;

    while(list1 && list2) {
    
        if(list1.val < list2.val) {
            newList.next = list1;
            list1 = list1.next;
           
        }
        else {
            newList.next = list2;
            list2 = list2.next;
        }
        newList = newList.next;
    }
   
    newList.next = list1 || list2;

    return head.next;
};
