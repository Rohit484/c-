/*#include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    sum=0;
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
            sum+=i;
        i++;
    }
    cout<<sum<<endl;

}

 #include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    cout<<"Sum is "<<sum<<endl;
}


#include<iostream>
using namespace std;
int main()
{
    float c,f,i,n;
    cout<<"Enter a Choice :"<<endl;
    cin>>n;
    if(n==1)
    {
        cin>>f;
       c=(f-32)*5/6;
       cout<<c<<endl;
    }
    else if(n==2)
    {
        cin>>c;
      f=(c-32)*5/6;
       cout<<f<<endl;
    }
    else
        cout<<"You Enter a out of number: "<<endl;


}


#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(n==i)
        cout<<"Number is prime: "<<n<<endl;
    else
        cout<<"Number is not Prime: "<<n<<endl;
}

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    i=2;
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"Not Prime: "<<i<<endl;
        }
        else
            cout<<"Prime For: "<<i<<endl;
        i=i+1;

    }
}

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        for(int j=1;j<=i;++j)
        {
            cout<<j<<" ";
        }
         cout<<endl;
    }

}

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    i=1;
    j=1;
    cin>>n;
    while(i<=n)
    {
        while(j<=n)
        {
             cout<<"*";
        j=j+1;
        }
           cout<<endl;
    i=i+1;
    }

}


#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    i=1;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/
