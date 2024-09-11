#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert(struct node *head, int ele)
{
    struct node *n, *c, *p;
    n = (struct node *)malloc(sizeof(struct node));
    c = head;
    p = NULL;
    n->data = ele;

    if (head == NULL)
    {
        n->next = NULL;
        head = n;
    }
    else
    {
        while (c != NULL && c->data < ele)
        {
            p = c;
            c = c->next;
        }
        if (head == c)
        {
            n->next = c;
            head = n;
        }
        // else if (c == NULL)
        // {
        //     p->next = n;
        //     n->next = c;
        // }
        else
        {
            p->next = n;
            n->next = c;
        }
    }
    return head;
}
struct node *rem(struct node *head, int ele)
{
    struct node *temp, *s;
    temp = head;
    s = NULL;
    if (head == NULL)
    {
        printf("\nElement not present");
    }
    else
    {
        while (temp->data != ele && temp != NULL)
        {
            s = temp;
            temp = temp->next;
        }
        if (temp == head)
        {
            temp = temp->next;
            head = temp;
        }
        else
        {
            s->next = temp->next;
            printf("Remove Element:%d\n", temp->data);
            free(temp);
        }
    }
    return head;
}
struct node *modify(struct node *head)
{
    struct node *temp;
    int pe, ne;
    printf("\nEnter previus element:");
    scanf("%d", &pe);
    printf("\nEnter new element:");
    scanf("%d", &ne);
    head = rem(head, pe);
    head = insert(head, ne);
    return head;
}

void dis(struct node *head)
{
    int i;
    struct node *temp = head;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}
void main()
{
    int c, ele;
    struct node *head = NULL;
    do
    {
        printf("\n1.push");
        printf("\n2.remove");
        printf("\n3.modify");
        printf("\n.Display");
        printf("\n5.exit");
        printf("\nEnter choice:");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("\nenter elemet");
            scanf("%d", &ele);
            head = insert(head, ele);
            dis(head);
            break;
        case 2:
            printf("\nenter elemet to remove");
            scanf("%d", &ele);
            head = rem(head, ele);
            dis(head);
            break;
        case 3:
            modify(head);
            dis(head);
            break;
        case 4:
            dis(head);
            break;
        case 5:
            break;
        }
    } while (c != 5);
}