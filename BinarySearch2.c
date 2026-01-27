#include <stdio.h>
#include <math.h>

/*
function binary_search(A, n, T) is
    L := 0
    R := n − 1
    while L ≤ R do
        m := floor((L + R) / 2)
        if A[m] < T then
            L := m + 1
        else if A[m] > T then
            R := m − 1
        else:
            return m
    return unsuccessful


*/

int binary_search(int arr[], int size, int input);

int main(void)
{

int arr[] = {1,3,4,6,7,8,10,13,14,18,19,21,24,37,40,45,71};

int result;

int input = 0;

int n = sizeof(arr) / sizeof(arr[0]);

printf("enter the number to be searched : ");
scanf("%d",&input);

result = binary_search(arr,n,input);

    if(result == -1) 
    {
        printf("Element is not present in array");
    }
    else 
    { 
        printf("Element is present at index %d",result);
    }



}


int binary_search(int arr[], int size, int input){
        int left = 0 ;
        int right = size - 1;
        int mid = 0;

        while ((left <= right))
        {
            mid = floor((left + right) / 2);

            if(arr[mid] == input)
            {
                return mid;
            }

            if(arr[mid] < input)
            {
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }


        }

        return -1;
        
}