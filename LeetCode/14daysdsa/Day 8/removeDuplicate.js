function deleteDuplicates(head) {
    if(!head) {
        return null;
    }

    let currNode = head;

    while(currNode?.next) {
        let nextNode = currNode.next;

        while(nextNode && nextNode.val === currNode.val) {
            nextNode = nextNode.next;
        }

        currNode.next = nextNode;
        currNode = nextNode;
    }

    return head;
}