#include <iostream>
using namespace std;
typedef struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
} Node;
using PNode = Node *;
int josePhusLinkedList(int n)
{
    if (n == 1)
        return 1;

    // 创建循环链表
    Node *head = new Node(1);
    Node *tail = head;
    for (int i = 2; i <= n; i++)
    {
        tail->next = new Node(i);
        tail = tail->next;
    }
    tail->next = head;
    // 模拟淘汰过程
    PNode current = head;
    PNode prev = tail;
    while (n > 1)
    {

        for (int step = 1; step < 3; step++)
        {
            prev = current;
            current = current->next;
        }

        // 删除current节点（报数为3的人）
        prev->next = current->next;
        PNode toDelete = current;
        current = current->next;
        delete toDelete;

        n--;
    }

    int survivor = current->data;
    delete current;
    return survivor;
}
int main()
{
    int n;
    cin >> n;
    cout << josePhusLinkedList(n);

    return 0;
}