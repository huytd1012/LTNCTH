/*Cho một struct Node biểu diễn một node của 1 danh sách liên kết đơn như sau:

struct Node {
    int value;
    Node* next;
};
KHÔNG sử dụng mảng phụ, viết hàm void printLast(Node* head, int k); in ra k giá trị cuối cùng của danh sách liên kết, các giá trị cách nhau bởi dấu cách (k luôn nhỏ hơn hoặc bằng số lượng phần tử của danh sách).*/
void printLast(Node* head, int k) {
    int length;
    if(head) {
        length = 1;
        Node* a = head->next;
        while(a) {
            length++;
            a = a->next;
        }
        a = head;
        for(int i = 0; i < length;i++) {
            if(i >= length - k) {
                cout << a->value << " ";
            }
            a = a->next;
        }
        // cout << length << endl;
    }
    else return;
}
