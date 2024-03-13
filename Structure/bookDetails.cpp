#include<stdio.h>
#include<string.h>
struct Book
{
    int bid, bprice;
    char bname[20], bauthor[20], bpublic[20];
};

int main()
{
    int flag=0,bsearch;
    struct Book b[5];

    for(int i=0; i<2; i++)
    {
        printf("Enter bid, bprice, bname, bauthor, bpublic\n");
        scanf("%d%d%19s%s%s", &b[i].bid, &b[i].bprice, &b[i].bname, &b[i].bauthor, &b[i].bpublic);
    }

    printf("Record is:\n");
    for(int i=0; i<2; i++)
    {
        printf("%d\t%d\t%s\t%s\t%s\n", b[i].bid, b[i].bprice, b[i].bname, b[i].bauthor, b[i].bpublic);
    }

    char ch[20];
    printf("Enter name to be searched\n");
    scanf("%s",ch);

    for(int i=0; i<2; i++)
    {
        if(strcmp(b[i].bname, ch) == 0)
        {
            printf("Book name found\n");
            printf("%d\t%d\t%s\t%s\t%s\n", b[i].bid, b[i].bprice, b[i].bname, b[i].bauthor, b[i].bpublic);
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("Book name not found\n");

    return 0;
}
