struct ListNode{
    int val; // 当前节点的值
    ListNode* next; // 指向下一个

    ListNode(int value) : val(value),next(nullptr){

    }
};

struct doubly_linked_list
{
    int val; // 当前节点的值
    doubly_linked_list* prev;
    doubly_linked_list* next;

    doubly_linked_list(int value) :val(value),prev(nullptr),next(nullptr){
        
    }
};

void insert(ListNode *n0, ListNode *P) {\
    P->next = n0->next;
    n0->next = P;
}

void remove(ListNode *n0) {
    if(n0->next == nullptr){
        return;
    }

    // n0 -> p -> n1
    ListNode *p = n0-> next;
    n0->next = p->next;
    delete p;
}

ListNode *access(ListNode *head, int index) {
    for(int i = 0;i < index;i++){
        if(head == nullptr){
            return nullptr;
        }
        head = head->next;
    }
    return head;
}

int find(ListNode *head, int target) {
    int index = 0;
    while(head != nullptr){
        if(head->val == target){
            return index; 
        }
        head = head->next;
        index++;
    }
    return -1;
}
int main(){
    ListNode* n0 = new ListNode(1);
    ListNode* n1 = new ListNode(3);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(5);
    ListNode* n4 = new ListNode(4);
    // 构建节点之间的引用
    n0->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    // n0 -> n1 -> n2 -> n3 -> n4 -> nullptr
    return 0;
}

