#include<iostream>
using namespace std;


int main ()
{
    int arr[]  = {0};
    int n,n1,max1;
    cin>>n;

    for (int i=0; i < n ;i++)
    cin>> arr[i];


    cout<<"enter max number in the array \n";
    cin>>max1;

    int hash[max1] ;

    hash[max1]= {0};

    for(int i=0; i<n; i++)
        hash[arr[i]]++;
        

    cout<< "enter the number to count below "<<max1<<endl;

    cin>>n;

    cout<<"count is "<<hash[n];

    
    


    




    




    return 0;
}