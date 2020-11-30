#include <iostream>

using namespace std;

struct elecount{
int e;
int c;
};

void moreThanNdK(int a[] , int n , int k)
{
    if(k<2)
        return;

    struct elecount temp[k-1];
    for(int i=0;i<k-1;i++)
    {
        temp[i].c=0;
    }
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=0;j<k-1;j++)
        {
            if(temp[j].e==a[i])
            {
                temp[i].c += 1;
                break;
            }
        }
        if(j==k-1)
        {
            int l;
             for (l = 0; l < k - 1; l++)
             {
                 if(temp[l].c==0)
                 {
                     temp[l].e = a[i];
                     temp[l].c =1;
                     break;
                 }
             }
             if (l == k - 1)
                for (l = 0; l < k; l++)
                    temp[l].c -= 1;
        }
    }
    for(int i=0;i<k-1;i++)
    {
        int ac=0;
        for(int j =0 ;j<n;j++)
        {
            if(a[j] == temp[i].e)
                ac++;
        }
         if (ac > n / k)
            cout << "Number:" << temp[i].e
                 << " Count:" << ac << endl;
    }
}




int main()
{
    int arr1[] = { 4, 5, 6, 7, 8, 4, 4 };
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int k = 3;
    moreThanNdK(arr1, size, k);
    return 0;
}
