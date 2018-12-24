#include <stdio.h>
#include <stdlib.h>

//using namespace std;

void comparation();
int main()
{
    int a = 1, i =1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        a = a*i;
        i = i+1;
    }
    printf("%d ",a);
    return 0;
}


