#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Thêm một phần tử vào đầu danh sách
    void pushFront(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr) {
            head->prev = newNode;
        }

        head = newNode;

        if (tail == nullptr) {
            tail = head;
        }
    }

    // Thêm một phần tử vào cuối danh sách
    void pushBack(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->prev = tail;
        newNode->next = nullptr;

        if (tail != nullptr) {
            tail->next = newNode;
        }

        tail = newNode;

        if (head == nullptr) {
            head = tail;
        }
    }

    // In danh sách từ đầu đến cuối
    void printForward() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // In danh sách từ cuối đến đầu
    void reverses() {
        Node* current = head;
        Node* temp = nullptr;

        while (current != nullptr) {
            // Hoán đổi con trỏ prev và next
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;

            // Di chuyển đến phần tử tiếp theo
            current = current->prev;
        }

        // Cập nhật con trỏ head và tail để trỏ đến phần tử đầu và cuối mới
        if (temp != nullptr) {
            head = temp->prev;
        }
    }

    bool traverseForward(int a) {
        Node* current = head;
        while (current != nullptr) {
            if(a == current->data){
                return false;
                break;
            }
            else{
                current = current->next;
            }

        }
        return true;
    }

    void removes(int value) {
        Node* current = head;

        while (current != nullptr) {
            if (current->data == value) {
                // Thay đổi con trỏ next của phần tử liền trước
                if (current->prev != nullptr) {
                    current->prev->next = current->next;
                } else {
                    head = current->next; // Nếu current là phần tử đầu tiên
                }

                // Thay đổi con trỏ prev của phần tử liền sau
                if (current->next != nullptr) {
                    current->next->prev = current->prev;
                } else {
                    tail = current->prev; // Nếu current là phần tử cuối cùng
                }

                // Giải phóng bộ nhớ của phần tử bị xóa
                delete current;

                // Kết thúc việc xóa
                return;
            }

            current = current->next;
        }

    }

    void insertAfter(int valueU, int valueV) {
        Node* current = head;

        while (current != nullptr) {
            if (current->data == valueV) {
                Node* u = new Node();
                u->data = valueU;
                u->prev = current;
                u->next = current->next;

                current->next = u;

                if (u->next != nullptr) {
                    u->next->prev = u;
                } else {
                    tail = u; // Nếu u là phần tử cuối cùng
                }

                return; // Kết thúc việc thêm
            }

            current = current->next;
        }
    }
    void insertBefore(int valueU, int valueV) {
        Node* current = head;

        while (current != nullptr) {
            if (current->data == valueV) {
                Node* u = new Node();
                u->data = valueU;
                u->next = current;
                u->prev = current->prev;

                current->prev = u;

                if (u->prev != nullptr) {
                    u->prev->next = u;
                } else {
                    head = u; // Nếu u là phần tử cuối cùng
                }

                return; // Kết thúc việc thêm
            }

            current = current->next;
        }
    }
private:
    Node* head;
    Node* tail;
};

int main() {
    DoublyLinkedList dll;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        dll.pushBack(a);
    }

    string s;
    while(s != "#"){
        cin>>s;
        if(s == "addfirst"){
            int a;
            cin>>a;
            if(dll.traverseForward(a)){
                dll.pushFront(a);
            }
        }
        if(s == "addlast"){
            int a;
            cin>>a;
            if(dll.traverseForward(a)){
                dll.pushBack(a);
            }
        }
        if(s == "reverse"){
            dll.reverses();
        }
        if(s == "remove"){
            int k;
            cin>>k;
            if(dll.traverseForward(k)){
                continue;
            }
            dll.removes(k);
        }
        if(s == "addafter"){
            int u, v;
            cin>>u>>v;
            if(!dll.traverseForward(v) && dll.traverseForward(u)){
                dll.insertAfter(u, v);
            }
            else continue;
        }
        if(s == "addbefore"){
            int u, v;
            cin>>u>>v;
            if(!dll.traverseForward(v) && dll.traverseForward(u)){
                dll.insertBefore(u, v);
            }
            else continue;
        }
    }

    dll.printForward();

    return 0;
}

