
#include<iostream>
#include<algorithm>
using namespace std;


struct Job
{
   char id;
   int dead;
   int profit;
};


bool comparison(Job a, Job b)
{
     return (a.profit > b.profit);
}

void printJobScheduling(Job arr[], int n)
{


   sort(arr, arr+n, comparison);




    int result[n];
    bool slot[n];


    for (int i=0; i<n; i++)
    {
        slot[i] = false;
    }



    for (int i=0; i<n; i++)
    {

       for (int j=min(n, arr[i].dead)-1; j>=0; j--)
       {
        cout << endl << j <<" " << n << " " << arr[i].dead << " " << arr[i].profit <<" " << i << endl;
          if (slot[j]==false)
          {
             result[j] = i;
             slot[j] = true;
             cout << result[j] << endl;
             break;
          }
       }
    }


    for (int i=0; i<n; i++)
       if (slot[i])
         cout << arr[result[i]].id << " ";
}


int main()
{
    Job arr[] = {{'1',1,60},{'2',2,80},{'3',1,40},{'4',2,100}};

    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs ";
    printJobScheduling(arr, n);
    return 0;
}
