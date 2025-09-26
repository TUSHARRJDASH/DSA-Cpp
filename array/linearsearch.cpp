#include <iostream>
using namespace std;
#include <climits>

int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;//not found
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    int target;
    cout<<"enter the target:";
    cin>>target;
    
    cout<< linearsearch(arr,size,target)<<endl;
    return 0;
}