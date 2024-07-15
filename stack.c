// Teacher wrote this
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *push(struct node *top, int i)
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Malloc failed\n");
        return top;
    }
    new_node->value = i;
    new_node->next = top;
    return new_node;
}

void print_stack(struct node *top)
{
    struct node *p;
    if (top != NULL)
    {
        for (p = top; p != NULL; p = p->next)
        {
            printf("%d\n", p->value);
        }
        printf("\n");
    }
    else
    {
        printf("stack is empty\n");
    }
}

struct node *pop(struct node *top, int *i)
{
    struct node *p = top;
    if (p != NULL) {
        *i = p -> value;
        p = p -> next;
        free(top);
    }
    else {
        printf("The stack is empty, can't pop.\n");
    }
    return p;
}

int main()
{
    struct node *stack1 = NULL;
    int n;
    stack1 = push(stack1, 25);
    stack1 = push(stack1, 32);
    stack1 = push(stack1, 8);
    printf("stack1:\n");
    print_stack(stack1);
    stack1 = pop(stack1, &n);
    printf("Popped %d from stack1\n", n);
    
    return 0;
}