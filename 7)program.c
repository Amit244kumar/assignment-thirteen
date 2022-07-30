int main()
{
    int n1,n2;
    printf("Enter two numbers");
    scanf("%d%d",&n1,&n2);
    printf("the HCF is %d",HCF(n1,n2,1,0));
    getch();
    return 0;
}
int HCF(int n1,int n2,int i,int v)
{
    if(n1<=i&&n2<=i)
        return v;
    if(n1%i==0&&n2%i==0)
    {
        v=i;
    }
    return HCF(n1,n2,++i,v);
}
/*
int HCF(int n1,int n2,int i,int v)
{
    if(3<=2&&6<=2)
        return v;
    if(12%2==0&&18%2==0)
    {
        v=i;
    }
    return HCF(n1,n2,i++,v);
}*/
