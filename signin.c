#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    char *name;
    char *mail_address;
    char *tel_num;
    node *next;
}
node;

int main(void)
{
    node *customer = malloc(sizeof(node));
    
}