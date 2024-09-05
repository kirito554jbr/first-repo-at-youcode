#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

char titles[MAX_BOOKS][100];
char authors[MAX_BOOKS][100];
float prices[MAX_BOOKS];
int quantities[MAX_BOOKS];
int book_count = 0;

void add_book()
 {
    if (book_count >= MAX_BOOKS)
     {
        printf("Bookstore stock is full.\n");
        return ;
    }

    printf("Enter book title: ");
    scanf(" %s", titles[book_count]);  // Read the whole line
    printf("Enter author: ");
    scanf(" %s", authors[book_count]);
    printf("Enter price: ");
    scanf("%f", &prices[book_count]);
    printf("Enter quantity: ");
    scanf("%d", &quantities[book_count]);

    book_count++;
    printf("Book added successfully.\n");
}

void show_books()
 {
    if (book_count == 0) 
    {
        printf("No books available.\n");
        return;
    }

    printf("\nAvailable Books:\n");
    int i = 0;
    while (i < book_count) 
    {
        printf("Title: %s\n", titles[i]);
        printf("Author: %s\n", authors[i]);
        printf("Price: $%.2f\n", prices[i]);
        printf("Quantity: %d\n\n", quantities[i]);
        i++;
    }
}
void search_book()
 {
    char search_title[100];
    int i = 0;
    printf("Enter title to search: ");
    scanf("%s", search_title);

    while (i < book_count)
     {
        if (strcmp(titles[i], search_title) == 0) {
            printf("\nTitle: %s\n", titles[i]);
            printf("Author: %s\n", authors[i]);
            printf("Price: %.2f\n", prices[i]);
            printf("Quantity: %d\n", quantities[i]);
            return;
        }
        i++;
    }
    printf("Book not found.\n");
}

void update_quantity()
 {
    char update_title[100];
    int i;

    printf("Enter book title to update quantity: ");
    scanf(" %s", update_title);

    while (i < book_count)
     {
        if (strcmp(titles[i], update_title) == 0) {
            printf("Enter new quantity: ");
            scanf("%d", &quantities[i]);
            printf("Quantity updated successfully.\n");
            return;
        }
        i++;
    }
    printf("Book not found.\n");
}

void remove_book()
 {
    char remove_title[100];
    int i = 0, j;

    printf("Enter book title to remove: ");
    scanf(" %s", remove_title);

 while (i < book_count) 
 {
        if (strcmp(titles[i], remove_title) == 0) 
        {
            j = i;
            while ( j < book_count - 1) //to shift all books that come after the removed book one position to the left in the arrays
             {//this loop shift the book left until it reaches the position -1 and its not visible in the array anymore
                strcpy(titles[j], titles[j + 1]);
                strcpy(authors[j], authors[j + 1]);
                prices[j] = prices[j + 1];
                quantities[j] = quantities[j + 1];
                j++;
            }
            book_count--;
            printf("Book removed successfully.\n");
            return;
        }
        i++;
    }
    printf("Book not found.\n");
}

void total_books()
{
    int total = 0;
    int i = 0;
    while (i < book_count)
     {
        total += quantities[i];
        i++;
    }
    printf("Total number of books in stock: %d\n", total);
}
int main()
 {
    int choice;

    do {
        printf("\nBookstore Management System\n");
        printf("1. Add Book\n");
        printf("2. Show All Books\n");
        printf("3. Search Book\n");
        printf("4. Update Quantity\n");
        printf("5. Remove Book\n");
        printf("6. Show Total Books in Stock\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            add_book();
        } else if (choice == 2) {
            show_books();
        } else if (choice == 3) {
            search_book();
        } else if (choice == 4) {
            update_quantity();
        } else if (choice == 5) {
            remove_book();
        } else if (choice == 6) {
            total_books();
        } else if (choice == 0) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
