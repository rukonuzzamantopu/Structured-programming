#include <stdio.h>
struct student
{
    int id;
    char name[20];
    float cgpa;
} std[100];

int main()
{
    int i,n,Id,f=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d %s %f",&std[i].id,std[i].name,&std[i].cgpa);
    
    
    
    for(i=0;i<n;i++)
        if(Id==std[i].id)
        {
            printf("Information found!\n");
            printf("Id\tName\tCGPA\n");  
            printf("%d\t%s\t%.2f\n",std[i].id,std[i].name,std[i].cgpa);
            f++;
        }
    if(f==-1)
        printf("Information not found");

    return 0;
}