/* COE_MTE_PROJECT_LIBRARY_MANAGEMENT_SYSTEM
SOURABH SONKER 2K20/A6/13
ESHA 2K20/A6/28*/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
    char book_name[30];
    char author[30];
    int pages;
    float price;
};
void welcome()
{
         printf("*****\n");     
         printf("*****\n");     
         printf("*****\n");     
         printf("**  WELCOME TO LIBRARY  ***\n");     
         printf("*****\n");    
         printf("*****\n"); 
         printf("*****\n"); 
}
int main()
{
    struct library l[100];
    char ar_nm[30], bk_nm[30];
    int i, j, count;
    i = j = count = 0;

    welcome();

    while (j!=6)
    {
        printf("\n\n1. Add book information\n2. Display available book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d",&j);
    
        switch (j)
        { 
        case 1:

            printf("Enter book name = ");
            scanf("%s", &l[i].book_name);
            printf("Enter author name = ");
            scanf("%s", &l[i].author);

            printf("Enter no. of pages = ");
            scanf("%d", &l[i].pages);

            printf("Enter price = ");
            scanf("%f", &l[i].price);
            count++;
            i++;
            break;
        case 2:
            printf("Available books are:\n");
            for (i = 0; i < count; i++)
            {
                printf("\n book name = %s", l[i].book_name);

                printf("\n author name = %s", l[i].author);

                printf("\n  pages = %d", l[i].pages);

                printf("\n  price = %f", l[i].price);

                fflush(stdin);
                printf("\n");
            }
            break;
        case 3:
            printf("Enter author name : ");
            scanf("%s", ar_nm);
            for (i = 0; i < count; i++)
            {
                if (strcmp(ar_nm, l[i].author) == 0)
                    printf("%s \t %s \t %d \t %f", l[i].book_name, l[i].author, l[i].pages, l[i].price);
                printf("\n");
            }
            break;
        case 4:
            printf("Enter book name : ");
            scanf("%s", bk_nm);
            for (i = 0; i < count; i++)
            {
                if (strcmp(bk_nm, l[i].book_name) == 0)
                    printf(" %s \t %s \t %d \t %f", l[i].book_name, l[i].author, l[i].pages, l[i].price);
                printf("\n");
            }
            break;

        case 5:
            printf("\n No of books in library : %d", count);
            break;
        case 6:
            {
                printf("program exited successfully!!");
                exit(0);
            }
        default : printf ("INVALID CHOICE");
        }
    }
    return 0;
}