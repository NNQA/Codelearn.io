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
        void insert_element_position(int &data, int &pos) {
            NODE *temp = new NODE();

            temp->data = data;
            if(pos == 0) {
                temp->next = this->head;
                head = temp;
            } else {
                NODE *ptr = this->head;

                while(pos > 1) {
                    ptr = ptr->next;
                    pos--;
                }
                temp->next = ptr->next;
                ptr->next = temp;
            }

        }
        void detele_element(int &pos) {
            
            int i = 0;
            NODE *ptr = head;
            while(i != pos) {
                ptr = ptr->next;
                i++;
            }
            delete(ptr->next);
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
    int n, data, pos;
    std::cin >> n;
    

    for(int i = 1; i <= n; i++) {
        std::cin >> data;
        if(i == 1) {
            ll.insert_elenmentBegin(data);
        } else {
            ll.insert_elementEnd(data);
        }
    }
    std::cin >> pos >> data;

    ll.insert_element_position(data, pos);
    // ll.insert_elenmentBegin(1);
    ll.Print();
    return 0;
}