int main()
{
    int n,p;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the power or exponential");
    scanf("%d",&p);
    printf("The result is %d",power(n,p));
    getch();
    return 0;
}

int power(int n,int p)
{
    if(p==0)
        return 1;
    return n*power(n,p-1);
}
