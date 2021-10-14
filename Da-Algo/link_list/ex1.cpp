#include <iostream>

class  NODE {
    public:
        int data;
        NODE *next;
        NODE() {
            this->next =  nullptr;
        }
};
class LinkedList {
    NODE *head;
    public: 
        LinkedList() {
            this->head = nullptr;
        }
        void insert_elenmentBegin(int &data) {
            NODE *temp = new NODE();

            temp->data = data;
            temp->next = head;
            head = temp;
        }
        void insert_elementEnd(int &data) {
            NODE *temp = new NODE();

            temp->data = data;
            
            NODE *prt = this->head;
            while(prt->next != nullptr) {
                prt = prt->next;
            }
            prt->next = temp;
        }
        void Print() {
            if(this->head == nullptr) {
                std::cout << "Link list is empty" << std::endl;
            } else {
                NODE *temp = this->head;
                while(temp != nullptr) {
                    std::cout << temp->data << " ";
                    temp = temp->next;
                }
            }
        }
        
};

int main() {
    LinkedList ll;
    int n, k;
    std::cin >> n;
    

    for(int i = 1; i <= n; i++) {
        std::cin >> k;
        if(i == 1) {
            ll.insert_elenmentBegin(k);
        } else {
            ll.insert_elementEnd(k);
        }
    }
    // ll.insert_elenmentBegin(1);
    ll.Print();
    return 0;
}