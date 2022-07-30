int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("The sum of squares %d",square(n));
    getch();
    return 0;
}
int square(int n)
{
    if(n==1)
        return n;
    return n*n+square(n-1);
}
