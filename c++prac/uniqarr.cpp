#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,2,4,2,3,1,2,2};

        for(int i=0;i<8;i++){
            bool check= false;

            for(int j=i+1;j<8;j++){
                check = true;
                arr[j]=-1;
            }
        }
            if(check==false && arr[i]!=-1;){
                cout<<arr[i]<<endl;
            }
}