// Sign In
#include <stdio.h>

int main(void)
{
    char *name, *number;
    scanf("%s, %s", name, number);
    FILE *file;
    file = fopen("references.cvs", "w");
    fwrite(file, sizeof(char), 1, references);

    
}