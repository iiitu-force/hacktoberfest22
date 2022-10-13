class Node{
public:
    int val;
    Node *next;
    
    Node (){
        next=NULL;
    }
};


class MyLinkedList {
public:
    
    int siz;
    Node *head;
        
    MyLinkedList() {
        head = NULL;
        siz = 0;
    }
    
    int get(int index) {
        if(index<siz){
            Node *temp = head;
            for(int i=0; i<index; i++){
                temp = temp->next;
            }
            int ret = temp->val;
            return ret;
        }
        else
            return -1;
    }
    
    void addAtHead(int value) {
        Node *first;
        first = new Node;
        first->val = value;
        if(head!=NULL)
            first->next = head;
        head = first;
        siz++;
    }
    
    void addAtTail(int value) {
        Node *temp = head;
        Node *add;
        add = new Node();
        add->val = value;
        add->next = NULL;
        if(temp == NULL){
            head = add;
        }
        else{
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = add;
        }
        siz++;
    }
    
    void addAtIndex(int index, int value) {
        if(index<=siz){
            Node *add;
            add = new Node;
            add->val = value;
            if(index==0){
                add->next = head;
                head = add;
            }
            else{
                Node *temp = head;
                for(int i=0; i<index-1; i++){
                    temp = temp->next;
                }
                add->next = temp->next;
                temp->next = add;
            }
            siz++;
        }
    }
    
    void deleteAtIndex(int index) {
        if(index<siz){
            Node *temp = head;
            if(index == 0){
                head = head->next;
                delete temp;
            }
            else{ 
                for(int i=0; i<index-1; i++){
                    temp = temp->next;
                }
                Node *del;
                del = temp->next;
                temp->next = del->next;
                delete del;
                
            }
            siz--;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
