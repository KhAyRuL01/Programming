#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    char str[10000];
    scanf("%s",str); // without space
    printf("%s\n",str);

    getchar();
    scanf("%[^\n]",str);//with space
    printf("%s\n",str);

    getchar();//ignore enter
    gets(str);//with space
    puts(str);
    str[2] = '\0'; // null character
    puts(str);

    return 0;
}
