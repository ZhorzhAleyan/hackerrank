DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    if (llist == nullptr)
        return llist;
    DoublyLinkedListNode* current = llist;
    DoublyLinkedListNode* pointer = nullptr;
    while(current != nullptr){
        pointer = current->prev;
        current->prev = current->next;
        current->next = pointer;
        current = current->prev;
    }
    if( pointer != nullptr)
        llist = pointer->prev;
    return llist;
}
