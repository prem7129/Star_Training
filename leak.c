#include<stdio.h>
#include<stdlib.h>
void leakyfunction()
{
    int * data =malloc(100* sizeof(int));
    data[0]=42;
    printf("data[0]: %d\n",data[0]);
}
int main()
{
    for(int i=0;i<3;i++)
    {
        leakyfunction();

    }
    printf("done..\n");
    return 0;
}