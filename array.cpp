//traversing
#include <iostream>

using namespace std;

int main()
{
    int a[4]={23,34,51,12};
    for(int i = 0;i<=3;i++)
    cout<<a[i]<<endl;

    return 0;
}

//insertion
#include <iostream>

using namespace std;

int main()
{
    int a[4]={23,45,21};
    int n;
    cout<<"Enter element to insert = ";
    cin>>n;
    
    int in;
    cout<<"Enter index to place the element = ";
    cin>>in;
    for(int i=3;i>in;i--)
    {
        a[i]=a[i-1];
    }
    a[in]=n;  
    for(int i=0;i<=3;i++)
    cout<<a[i]<<"\t";
    return 0;
}

//deletion
