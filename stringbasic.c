#include<stdio.h>
#include<string.h>

int main() {
    char name[40];
   // int i = 0;
    // while(name[i]!= '\0') {
    //     printf("%c", name[i]);
    //     i++;
   // }

   // format specifier for string
   // printf("%s", name);
    gets(name);
    puts(name);
    printf(" Output is %s", name);
   // puts("Ayush Is Learning C In Midnight In Very Cold Weather");
    return 0;
}