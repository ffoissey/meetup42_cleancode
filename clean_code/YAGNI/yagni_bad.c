#include <stdio.h>
#include <stdlib.h>

typedef struct  s_contact {
    char name[50];
    char email[50];
    char phone_number[20];
    char address[100]; // Not used
    char birthday[10]; // Not used
}               t_contact;


void printContact(const t_contact *contact)
{
    printf("Name: %s, Email: %s, Phone: %s\n", contact->name, contact->email, contact->phone_number);
    // address and birthday are ignored for the moment...
}

int main()
{
    const t_contact john_contact = {.name = "John Doe", .email = "john@example.com", .phone_number = "1234567890"};

    printContact(&john_contact);
    return (EXIT_SUCCESS);
}
