#include <iostream>

using namespace std;

int main()
{

    struct Job{
    int jobke;
    int deadline;
    int profit;
    };

    Job arr[] = {{1,1,60},{2,2,80},{3,1,40},{4,2,100}};
    int size = 4;
    int i = 0;
    int j;
    int k = 0;
    int a =0,b=0;
    while (i< size){
        j = 0;
        while(j < size){
            cout<<"Job Ke = "<< arr[i].jobke<<endl<< "Job Ke = "<<
            arr[j].jobke << endl <<"Profit A = " << arr[i].profit <<endl<< "Profit B = " << arr[j].profit<<endl;
            if ((i != j ) && (arr[i].deadline) <= (arr[j].deadline)){
                    if(arr[a].profit+arr[b].profit< arr[i].profit+arr[j].profit){
                        a =i;
                        b =j;
                    }
                    cout<<"Status = Layak"<<endl;
            }else{
                    cout<<"Status = Tidak Layak"<<endl;
            }
            j++;
            k++;
        }
        i++;
    }

    cout<<"======SOLUSI OPTIMAL======="<<endl;
    cout<<"Job Ke = "<< arr[a].jobke<<endl<< "Job Ke = "<<
    arr[b].jobke << endl <<"Profit A = " << arr[a].profit <<endl<< "Profit B = " << arr[b].profit<<endl;
    cout<<"Total Profit = " << arr[a].profit+arr[b].profit<<endl;
    cout<<k<<endl;

    return 0;
}
