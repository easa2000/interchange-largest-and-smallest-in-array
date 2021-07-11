// to write a program to interchange the largest and the smallest number in an array

#include<stdio.h>
void read_array(int arr[], int);
void display_array(int arr[], int);
void interchange(int arr[], int);
int find_biggest_pos(int arr[], int);
int find_smallest_pos(int arr[], int);
void main()
{
    int n,arr[10];
    printf("\n Enter the number of array in first element: ");
    scanf("%d",&n);
    read_array(arr, n);
    printf("\n The elements of the array are ");
    display_array(arr, n);
    interchange(arr, n);
    printf("\n The elements of the array after interchange ");
    display_array(arr,n);
}

void read_array(int arr[10], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void display_array(int arr[10], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n %d",arr[i]);
    }
}

void interchange(int arr[10],int  n)
{
    int temp,big_pos,small_pos;
    big_pos = find_biggest_pos(arr, n);
    small_pos = find_smallest_pos(arr, n);
    temp = arr[big_pos];
    arr[big_pos] = arr[small_pos];
    arr[small_pos] = temp;
}

int find_biggest_pos(int arr[10], int n)
{
    int i, large = arr[0], pos=0;
    for(i=1;i<n;i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
            pos = i;
        }
    }
    return pos;
}

int find_smallest_pos(int arr[10], int n)
{
    int i,small = arr[0],pos=0;
    for(i=1;i<n;i++)
    {
        if(arr[i] < small)
        {
            small = arr[i];
            pos = i;
        }
        
    }
    return pos;
}
