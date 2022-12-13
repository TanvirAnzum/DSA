var reverseList = function(head) {
    if(head === null || head.next == null){
        return head;
    }
    
    let pre = head;
    let current = pre.next;
    let post = current.next;
    pre.next = null;
    
while(current.next !== null){
    current.next = pre;
    pre = current;
    current = post;
    post = post.next;
}
current.next = pre;
head = current;
return head;
};