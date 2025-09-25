#include <iostream>
using namespace std;

int bintodec(int binnum){
    int ans=0,pow=1;

    while(binnum>0){
        int rem=binnum%10;
        ans=ans+(rem*pow);

        binnum=binnum/10;
        pow=pow*2;
    }
    return ans;
}

int main(){
    int binnum;
    cout<<"enter the binum:";
    cin>>binnum;
    cout<<bintodec(binnum)<<endl;

    return 0;

}