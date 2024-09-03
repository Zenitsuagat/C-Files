#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "apple";
    char str2[] = "banana";

    //compare
    int x = strcmp(str1,str2);

    if(x < 0){
        printf("%s is lexicographically less than %s",str1,str2);
    }
    else if(x > 0){
        printf("%s is lexicographically greater then %s",str1,str2);
    }
    else{
        printf("%s is equal to %s",str1,str2);
    }

    return 0;
}
