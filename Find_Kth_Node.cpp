Node* LinkList::findKthNode(int k) {
    Node* first = head->next;
    if (k <= 0 || k > head->value) {
        cout << "输入索引非法，请输入合理索引！" << endl;
        return NULL;
    }
    int pace = head->value - k;
    for (int i = 1;i <= pace;i++) { //第一个指针先走K步
        first = first->next;
    }
    return first;
}
