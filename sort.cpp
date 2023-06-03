#include <iostream>
#include <time.h>
using namespace std;
bool sort (int * arr,int n)
{
    if( arr[n-1]>=arr[n-2])
    {
        if (n==2)
        {
            return 1;
        }
        n= n-1;
        return sort (arr,n) ;
    }
    else return 0;
}
int main ()
{
    int arr[] {1,2,0,4,5,6,6};
   if ( sort (arr,7))
   {
    cout << "yes";
   }
   else 
   {
    cout << "no";
   }

    return 0;
}