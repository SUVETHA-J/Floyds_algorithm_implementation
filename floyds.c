#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    printf("enter no of rows:");
    scanf("%d",&n);
    int a[n][n],p[n][n];
    printf("enter matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {p[i][j]=-3;
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    while(k!=n)
    {

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {

                    if(a[i][j]<0)
                    {if((a[i][k]>=0) && a[k][j]>=0 &&(a[i][k]+a[k][j])>=0)

                        p[i][j]=(a[i][k]+a[k][j]);

                    }
                    else if(a[i][j]>=0)
                    {
                        if((a[i][k]>=0) && a[k][j]>=0 &&(a[i][k]+a[k][j])>=0)
                       {

                        p[i][j]=min(a[i][j],(a[i][k]+a[k][j]));
                    }
                    else
                    {
                        p[i][j]=a[i][j];
                    }
                    }



       

        }}

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(p[i][j]!=-3)
            {
                a[i][j]=p[i][j];
                p[i][j]=-3;
            }
        }
    }

        k++;

    }
    printf("\nSHORTEST PATH\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");

}
}

int min(int a,int b)
{
    return (a>b)?b:a;
}
