int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    fibSeries(n,0,1);
    getch();
    return 0;
}
void fibSeries(int n,int i,int j)
{
    if(n==0)
        return;
    printf("%d ",i);
    fibSeries(n-1,i+j,i);
}
