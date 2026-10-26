#include <stdio.h> 
#include<stdbool.h> 
int A[100]; 
int size = 0; 
 
void createArray() 
{ 
    int i; 
    printf("Enter number of elements: "); 
    scanf("%d", &size); 
    printf("Enter the elements:\n"); 
 
    for(i = 0; i < size; i++) 
    { 
        scanf("%d", &A[i]); 
    } 
    printf("Array created successfully.\n"); 
} 
void linearSearch() 
{ 
    int item; 
    int i; 
    int found = 0; 
    if(size == 0) 
    { 
        printf("Array is empty.\n"); 
        return; 
    } 
    printf("Enter element to search: "); 
    scanf("%d", &item); 
    for(i = 0; i < size; i++) 
    { 
        if(A[i] == item) 
        { 
            printf("Element found at index %d.\n", i); 
            found = 1; 
            break; 
        } 
    } 
 
    if(found == 0) 
    { 
        printf("Element not found.\n"); 
    } 
} 
void binarySearch() 
{ 
    int item; 
    int low; 
    int high; 
    int mid; 
    int found = 0; 
    if(size == 0) 
    { 
        printf("Array is empty.\n"); 
        return; 
    } 
 
    printf("Enter element to search: "); 
    scanf("%d", &item); 
    low = 0; 
    high = size - 1; 
    while(low <= high) 
    { 
        mid = (low + high) / 2; 
 
        if(A[mid] == item) 
        { 
            printf("Element found at index %d.\n", mid); 
            found = 1; 
            break; 
        } 
        else if(A[mid] < item) 
        { 
            low = mid + 1; 
        } 
        else 
        { 
            high = mid - 1; 
        } 
    } 
 
    if(found == 0) 
    { 
        printf("Element not found.\n"); 
    } 
} 
void displayArray() 
{ 
    int i; 
    if(size == 0) 
    { 
        printf("Array is empty.\n"); 
        return; 
    } 
 
    printf("Array elements are:\n"); 
    for(i = 0; i < size; i++) 
    { 
        printf("%d ", A[i]); 
    } 
    printf("\n"); 
} 
int main() 
{ 
    int choice; 
    while(true) 
    { 
        printf("\n===== SEARCHING =====\n"); 
        printf("1. Create Array\n"); 
        printf("2. Linear Search\n"); 
        printf("3. Binary Search\n"); 
        printf("4. Display Array\n"); 
        printf("5. Exit\n"); 
 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
        if(choice == 1) 
        { 
            createArray(); 
        } 
        else if(choice == 2) 
        { 
            linearSearch(); 
        } 
        else if(choice == 3) 
        { 
            binarySearch(); 
        } 
        else if(choice == 4) 
        { 
            displayArray(); 
        } 
        else if(choice == 5) 
        { 
            printf("Exiting...\n"); 
            break; 
        } 
        else 
        { 
            printf("Invalid choice.\n"); 
        } 
    } 
 
    return 0; 
} 
 