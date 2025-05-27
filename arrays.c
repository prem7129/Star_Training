#include <stdio.h>
#include <limits.h>
void program1()
{
    printf("program 1 \n");
    int array[5]={10,20,20,40,50};
    for(int i =0;i<5;i++)
    {
    printf("the array elements are a[%d] : %d\n",i,array[i]);
    }
}
void program2()
{
    
    printf("program 2 \n");
    char name[10];
    printf("enter the string ");
    scanf(" %9s",name);
    printf(" the string is %s \n",name);
}
void program3()
{
    printf("program 3 \n");
    int arr[7]={10,20,30};
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        printf("the array elements are a[%d] : %d\n",i,arr[i]);
    }
}
void program4(){
    // printing specific element
    printf(" Program 3 \n");
    int array4[10]={1,2,3,4,5,6,7,6,8,4};
    int value;
    printf("enter the index value\n");
    scanf(" %d",&value);
    printf("the value at the index is %d\n",array4[value]);
}
void program5()
{
    //float array
    float arr5[5];
    for(int i =0;i<(sizeof(arr5)/sizeof(arr5[0]));i++)
    {
       printf("enter the array elements :");
       scanf(" %f",&arr5[i]);
    }
    for(int i =0;i<(sizeof(arr5)/sizeof(arr5[0]));i++)
    {
       printf("printing the array elements %.3f\n:",arr5[i]);
    }
}
void program6()
{
     //sum of array elements
    int arr6[5];
    int sum=0;
    for(int i =0;i<(sizeof(arr6)/sizeof(arr6[0]));i++)
    {
       printf("enter the array elements :");
       scanf(" %d",&arr6[i]);
       sum+=arr6[i];
    }
    printf("the sum of array elements are : %d ",sum);
    
}
void program7()
{
    // maximum and minimum in a array;
    int arr7[5];
    for(int i =0;i<(sizeof(arr7)/sizeof(arr7[0]));i++)
    {
       printf("enter the array elements :");
       scanf(" %d",&arr7[i]);
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i =0;i<(sizeof(arr7)/sizeof(arr7[0]));i++)
    {
       if(arr7[i]>max)
       {
           max=arr7[i];
       }
       if(arr7[i]<min)
       {
           min=arr7[i];
       }
       
    }
    printf(" the max in the array is %d \n",max);
    printf(" the minimum in the array is %d \n",min);
    
}
void program8()
{
    // searching a value in a unsorted array
    //linear search apporach
    int arr8[5];
    for(int i =0;i<(sizeof(arr8)/sizeof(arr8[0]));i++)
    {
       printf("enter the array elements :");
       scanf(" %d",&arr8[i]);
    }
    int value;
    printf("enter the value to search:");
    scanf(" %d",&value);
    for(int i =0;i<(sizeof(arr8)/sizeof(arr8[0]));i++)
    {
       if(arr8[i]==value)
       {
         printf("the value is found at the index : %d",i);  
         break;
         //to not multiple occurence we can use hash map method
         
       }
       else
       {
           printf("the value is not found");
       }
    
}
}
void program9(int arr[],int size)
{
 //passing array to a functio  
  for(int i =0;i<size;i++)
    {
       printf("enter the array elements : %d\n",arr[i]);
       
    }
}
void program10()
{
    // declaring a character array
    char name[10]="hello";
    printf(" the string is : %s",name);
}
void program11()
{
    char string[20];
    printf("enter the string:");
    scanf(" %s",string);
    printf("the string is : %s",string);
}
int main()
{
    //program9
    /*int n;
    printf("enter the size");
    scanf(" %d",&n);
    int arr[n];
    for(int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
       printf("enter the array elements :");
       scanf(" %d",&arr[i]);
    }
    */
    return 0;
}