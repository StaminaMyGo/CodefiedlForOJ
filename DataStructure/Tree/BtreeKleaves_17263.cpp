#include "stdio.h"
#include "malloc.h"
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int Status;

typedef char ElemType;
typedef struct BiTNode
{
    ElemType data;
    struct BiTNode *lchild, *rchild; // 左右孩子指针
} BiTNode, *BiTree;

Status CreateBiTree(BiTree &T)
{ // 算法6.4
    // 按先序次序输入二叉树中结点的值（一个字符），’#’字符表示空树，
    // 构造二叉链表表示的二叉树T。
    char ch;
    scanf("%c", &ch);
    if (ch == '#')
        T = NULL;
    else
    {
        if (!(T = (BiTNode *)malloc(sizeof(BiTNode))))
            return ERROR;
        T->data = ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
    return OK;
} // CreateBiTree

int CalKleaves(BiTree T, int level, int k)
{
    if (T == nullptr)
        return 0;
    if (level == k && T->lchild == nullptr && T->rchild == nullptr)
        return 1;

    return CalKleaves(T->lchild, level + 1, k) + CalKleaves(T->rchild, level + 1, k);
}

int main() // 主函数
{
    BiTree T;
    CreateBiTree(T);
    int k;
    scanf("%d", &k);
    printf("%d", CalKleaves(T, 1, k));
} // main