#include <iostream>
using namespace std;
//Mohammed alkaabi
//id 2018298111

int main()
{
    int a[10];
    cout<<"enter 10 numbers:";
    for(int i =0;i<=10;i++)
    {
        std::cin >> a[i];
    }
    for(int i =0;i<=10;i++)
    {
        if(a[i] % 2 == 0 && a[i]> 100)
        {
        std::cout <<"  ";
        std::cout <<a[i];
        }
    }
    return 0;
}
