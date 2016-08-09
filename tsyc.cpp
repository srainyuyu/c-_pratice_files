#include <iostream>
using namespace std;

double a7=61000,a30=25000,a90=215000;

double b(int n)
{
    int n1=n,n2=n,n3=n,i1=2,i2=2,i3=2;

    double sum=0;

    while(n1>=7)
    {
        sum = sum + a7/i1;

        i1+=1;n1-=7;
    }
    while(n2>=30)
    {
        sum = sum + a30/i2;

        i2+=1;n2-=30;
    }
    while(n3>90)
    {
        sum = sum + a90/i3;

        i3+=1;n3-=90;
    }

    return sum;
}
int main()
{


    int n;

    while(cin>>n)
    {
        cout<<b(n)<<endl;
    }
}
