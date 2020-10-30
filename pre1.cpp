#include<iostream>


int main()
{
    int a[20],shape,i,j,temp,swep;
    cout<<"\n Enter the element of array: ";
    cin>>shape;
    cout<<"\n\t Enter the array element ";
    for(i=0; i<shape;i++)
    {
        cin>>a[i];
    }
    for(i=0; i<(shape-1);i++)
    {
        swep=0;
        for(j=0;j<(shape-i)-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swep=1;
            }
        }
        if(swep==0)
        {
            break;
        }
    }
    cout<<"\n\t Array after bubbel short";
    for(i=0;i<shape;i++ )
    {
        cout<<" "<<a[i];
    }

    return 0;
}
