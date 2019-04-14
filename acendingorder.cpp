#inclde<iostream>
using namespace std;
int main()
{
    int a[5],n,i,j,t;
    cout<<"enter no elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter array elements";
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout>>a[i];
    }
    return 0;
}

