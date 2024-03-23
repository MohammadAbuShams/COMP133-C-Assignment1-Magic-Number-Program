#include <stdio.h>
void magic_numbers(int,int,int);//Function Prototype
int main()
{
    int left , right , digit ;// Define the input
    printf("Enter Left bound:");
    scanf("%d",&left);
    printf("Enter Right bound:");
    scanf("%d",&right);
    printf("Enter digit to exclude it:");
    scanf("%d",&digit);
if (left<right&&digit>=0&&digit<10)//There is no error and continue
    {
}
else{
printf("the left bound should be less than the right bound, enter them again and the digit should be one digit only\n");

printf("Enter Left bound:");
    scanf("%d",&left);
    printf("Enter Right bound:");
    scanf("%d",&right);
    printf("Enter digit to exclude it:");
    scanf("%d",&digit);
}

      magic_numbers(left,right,digit);//Function Call


    return 0;
}
void magic_numbers(int left, int right, int digit)// Function Definition


{
    int p=0;
    printf("Magic Numbers in Range Left=%d, Right=%d with exclude digit m= %d are:\n",left,right,digit);
    for(p=left;p<=right;p++)//the range
    {
        int z=p;
        int d=z%10;
        int sum= d;
        int maj = 1;
        if (d == digit)
        {
            maj=0;
            continue;
}
        z /= 10;
        while(z)
        {
            d = z%10;
            if(d <= sum || d == digit)
            {
                maj=0;
                break;
            }
            else
            {
                sum += d;// Update the sum
                z /= 10;
            }
        }
        if (maj == 1)//Check the maj value
        {
            printf("%d ",p);
        }
    }
}
//Mohammad Abu Shams
//1200549
