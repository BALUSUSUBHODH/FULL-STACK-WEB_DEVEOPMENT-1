#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    int n,arr[n],brr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    s.push(arr[n-1]);
    for(int i=n-1;i>=0;i--){
        if(i=n-1){
            brr[i]=-1;
        }
        else{
            if(arr[i]>s.top()&&!s.empty()){
                brr[i]=s.top();
            }
            else{
                while(arr[i]<s.top()&&!s.empty()){
                    s.pop();
                }
                if(!s.empty()){
                    brr[i]=s.top();
                }
                else{
                   brr[i]=-1;
            }
        }
    }
    s.push(arr[i]);
    }
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" "<<brr[i];
   }


    return 0;
}
