#include<iostream>
int main()
{
    int n,i,j;
    std::cout<<"enter number :";
    std::cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            std::cout<<"\t"<<i;
        }
        std::cout<<std::endl;
    }
}