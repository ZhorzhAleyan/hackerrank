int length(SinglyLinkedListNode* head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    int len1 = length(head1);
    int len2 = length(head2);

   
    int diff = std::abs(len1 - len2);

   
    if (len1 > len2) {
        for (int i = 0; i < diff; i++) {
            head1 = head1->next;
        }
    } else {
        for (int i = 0; i < diff; i++) {
            head2 = head2->next;
        }
    }

   
    while (head1 != nullptr && head2 != nullptr) {
        if (head1 == head2)  
            return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }

    return -1; 
}
