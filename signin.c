#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    char *mail_address;
    char *tel_num;
}
customer;

int main(void)
{
    int data, datasize;
    datasize = 20;
    customer *data = malloc(sizeof(customer) * datasize);
}