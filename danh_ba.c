#include <stdio.h>
#include <stdlib.h>

void print_menu()
{
    //system("clear"); // for macos, linux
    system("cls"); // for windows
    printf("CONTACT KEEPER\n");
    printf("----------------------------------------------------\n");
    printf("1. Add new contact\n");
    printf("2. Edit contact\n");
    printf("3. Delete Contact\n");
    printf("4. Search contact \n");
    printf("5. List all contacts with birthdays in a given month\n");
    printf("6. List all contacts in the table format\n");
    printf("0. Exit\n");
}

int make_choice(int min, int max)
{
    int not_valid = 1, num, scanf_ret;
    char c;
    print_menu();
    fflush(stdin);
    do
    {
        printf("\nEnter your choice: ");
        scanf_ret = scanf("%d%c", &num, &c);
        if(scanf_ret < 2 || c != '\n')
        {
            print_menu();
            printf("\nYour choice is not valid. Please try again!\n");
            fflush(stdin);
        }
        else if(num < min || num > max)
        {
            print_menu();
            printf("\nYour choice is not valid. Please try again!\n");
        }
        else
            not_valid = 0;
    }
    while(not_valid);
    system("cls");
    return num;
}

void add_contact_1()
{
    printf("Write your code here to implement the add_contact() function.\n");
}

void edit_contact_2()
{
    printf("Write your code here to implement the edit_contact() function.\n");
}

void delete_contact_3()
{
    printf("Write your code here to implement the delete_contact() function.\n");
}

void search_contact_4()
{
    printf("Write your code here to implement the delete_contact() function.\n");
}

void list_month_5()
{
    printf("Write your code here to implement the delete_contact() function.\n");
}

void list_name_6()
{
    printf("Write your code here to implement the delete_contact() function.\n");
}

int main(void)
{
    void (*funs[7])(void) = {NULL, &add_contact_1, &edit_contact_2, &delete_contact_3, &search_contact_4, &list_month_5, &list_name_6};
    int choice;
    do
    {
        choice = make_choice(0, 6);
        if(choice)
        {
            funs[choice]();
            printf("\nPress any key to return to the menu.");
            getchar();
        }
    }
    while(choice);
    return 0;
}
