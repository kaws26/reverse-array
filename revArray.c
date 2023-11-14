#include<stdio.h>
void arrayrev(char arr[],int size)
{
    char temp;//temporary variable for swapping
    char mid = arr[size/2];//stores the middle element of the array
    for(int i = 1;i<size;i++)//loop for iterating elements of the array
    {
        temp=arr[i-1];//stores the characters iterating forward
        arr[i-1] = arr[size-i];//swapping the forward iterating characters with backward iterating characters
        arr[size-i] = temp;
        if(( arr[i-1] == mid ) || ( arr[size-i] == mid ) )//terminate the swapping when the iterator comes in the middle
        {
            break;
        }
    }

}

int len(char arr[])//function for counting length of the character array
{
    int i=0,count=0;
    while(arr[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}

int main()
{
    char arr1[] = "sham" ;
    int size = len(arr1);
    arrayrev(arr1,size);
    printf("%s",arr1);
    return 0;
}