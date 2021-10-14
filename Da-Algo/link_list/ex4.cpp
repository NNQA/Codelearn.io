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
        void detele_element(int &pos, int &n) {
            
            NODE *ptr = new NODE();

            if(pos == 0) {
                ptr = head;
                head = head->next;
                delete(ptr);
            } else if(pos == n - 1){
                ptr = head;
                while(ptr->next->next != nullptr) {
                    ptr = ptr->next;
                }
                
                delete(ptr->next);
                ptr->next = nullptr;
            } else {
                ptr = head;
                for(int i = 0; i != pos - 1; i++) {
                    ptr = ptr->next;   
                }
                NODE *temp = ptr->next;
                ptr->next = ptr->next->next;
                delete(temp);
            }
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
        void Print_Pos(int &pos) {
            
            NODE *ptr = this->head;

            for(int i = 0; i != pos; i++) {
                ptr = ptr->next;
            }
            std::cout << ptr->data;
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
    // std::cin >> pos >> data;

    // ll.insert_element_position(data, pos);
    // ll.insert_elenmentBegin(1);

    std::cin >> pos;
    //ll.detele_element(pos, n);
    //ll.Print();
    ll.Print_Pos(pos);
    return 0;
}