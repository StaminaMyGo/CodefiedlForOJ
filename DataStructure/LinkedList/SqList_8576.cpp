#include <stdio.h>
#include <malloc.h>
#define OK 1
#define ERROR 0
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
#define ElemType int

typedef struct
{
    int *elem;
    int length;
    int listsize;
} SqList;

int InitList_Sq(SqList &L)
{
    // 分配空间
    L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L.elem)
        return ERROR;

    L.length = 0;                // 当前长度
    L.listsize = LIST_INIT_SIZE; // 当前容量

    return OK;
}

int Load_Sq(SqList &L)
{
    int i;
    if (L.length == 0)
        printf("The List is empty!");
    else
    {
        printf("The List is: ");
        for (i = 0; i < L.length; i++)
            printf("%d ", L.elem[i]);
    }
    printf("\n");
    return OK;
}

int ListInsert_Sq(SqList &L, int i, int e)
{
    // 判断位置是否合法
    if (i < 1 || i > L.length + 1)
        return ERROR;

    // 扩容
    if (L.length >= L.listsize)
    {
        ElemType *newbase = (ElemType *)realloc(L.elem, (L.listsize + LISTINCREMENT) * sizeof(ElemType));
        if (!newbase)
            return ERROR;
        L.elem = newbase;
        L.listsize += LISTINCREMENT;
    }

    // 元素后移
    int k;
    for (k = L.length - 1; k >= i - 1; k--)
    {
        L.elem[k + 1] = L.elem[k];
    }

    // 插入
    L.elem[i - 1] = e;
    L.length++;

    return OK;
}

int ListDelete_Sq(SqList &L, int i, int &e)
{
    // 判断位置是否合法
    if (i < 1 || i > L.length)
        return ERROR;

    e = L.elem[i - 1];

    // 前移覆盖
    int k;
    for (k = i; k < L.length; k++)
    {
        L.elem[k - 1] = L.elem[k];
    }

    L.length--;

    return OK;
}

int main()
{
    SqList T;
    int a, i;
    ElemType e, x;

    if (InitList_Sq(T) == OK)
    {
        printf("A Sequence List Has Created.\n");
    }

    while (1)
    {
        printf("1:Insert element\n2:Delete element\n3:Load all elements\n0:Exit\nPlease choose:\n");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
            scanf("%d%d", &i, &x);
            if (ListInsert_Sq(T, i, x) == ERROR)
                printf("Insert Error!\n");
            else
                printf("The Element %d is Successfully Inserted!\n", x);
            break;

        case 2:
            scanf("%d", &i);
            if (ListDelete_Sq(T, i, e) == ERROR)
                printf("Delete Error!\n");
            else
                printf("The Element %d is Successfully Deleted!\n", e);
            break;

        case 3:
            Load_Sq(T);
            break;

        case 0:
            return 1;
        }
    }
}