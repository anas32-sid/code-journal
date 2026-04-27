#include <iostream>
#include <unordered_set>
using namespace std;
class solution{
    public:
    int run(int arr[], int size){
        unordered_set <int> s;
    int a=-1;
    for(int i=size-1; i>=0; i--){
        if(s.find(arr[i])!=s.end()){
            a=arr[i];
        }
        else{
            s.insert(arr[i]);
        }
    }
    return a;
    }
};
int main(){
solution obj;
int arr[]={10, 20, 30, 40, 50, 40};
int size=sizeof(arr)/sizeof(arr[0]);
int result=obj.run(arr, size);
cout<<result;
}