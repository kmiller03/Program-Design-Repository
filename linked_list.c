// Teacher wrote this
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

int count_n(struct node *list, int n);
struct node *add_to_list(struct node *list, int n);
void print_list(struct node *list);
struct node *find_largest(struct node *list);
int duplicates(struct node *list);
struct node *delete_from_list(struct node *list, int n);

int main()
{
    struct node *first = NULL, *max;
    // Insert nodes
    first = add_to_list(first, 98);
    first = add_to_list(first, 35);
    first = add_to_list(first, 102);
    first = add_to_list(first, 6);
    first = add_to_list(first, 98);

    print_list(first);
    printf("value %d = %d times\n", 98, count_n(first, 98));
    max = find_largest(first);
    printf("Maximum value = %d\n", max->value);
    if (duplicates(first))
    {
        printf("There are duplicate values.\n");
    }
    else
    {
        printf("There is no duplicate value.\n");
    }
    first = delete_from_list(first, 98);
    print_list(first);
    first = delete_from_list(first, 35);
    print_list(first);

    return 0;
}


void print_list(struct node *top) {
    struct node *p;
    if (top != NULL) {
        for (p = top; p != NULL; p = p -> next) {
            printf("%d\n", p -> value);
        }
        printf("\n");
    }
    else {
        printf("stack is empty\n");
    }
}

int count_n(struct node *list, int n)
{
    struct node *p;
    int count = 0;
    for (p = list; p != NULL; p = p->next)
    {
        if (p->value == n)
        {
            count++;
        }
    }
    return count;
}

struct node *find_largest(struct node *list)
{
    struct node *p;
    struct node *max;
    if (list == NULL)
    {
        return NULL;
    }

    max = list;
    for (p = list; p != NULL; p = p->next)
    {
        if (max->value < p->value)
        { // if max points to a smaller value than p does then make max point p
            max = p;
        }
    }
    return max; /// unfinished
}

int duplicates(struct node *list)
{
    struct node *p;
    struct node *q;

    if (list == NULL)
    {
        return 0;
    }

    for (p = list; p != NULL; p = p->next)
    {
        for (q = p -> next; q != NULL; q = q -> next)
        {
            if (p -> value == q -> value)
            {
                return 1;
            }
        }
    }
    return 0;
}

struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur, *prev;
    for (cur = list, prev = NULL;
         cur != NULL && cur->value != n;
         prev = cur, cur = cur->next)
    {
        ;
    }

    if (cur == NULL)
    {
        return list; // n is not found
    }
    if (prev == NULL)
    {
        list = list->next; // list = curr -> next
    }
    else
    {
        prev->next = cur->next; // n is in the middle
    }
    free(cur);
    return list;
}