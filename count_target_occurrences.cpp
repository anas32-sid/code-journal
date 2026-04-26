#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
    int run(vector<int>&n, int target){
    int i=0; 
    for(int x: n){
        if(x==target){
            i++;
        }
    }
    return i;
}
};
int main(){
solution obj;
vector<int>n;
int target;
int size;
cout<<"enter numbers of elements: "<<endl;
cin>>size;
int value;
cout<<"enter elements: "<<endl;
for(int i=0; i<size; i++){
    cin>>value;
    n.push_back(value);
}
cout<<"enter the target element: ";
cin>>target;

int result= obj.run(n, target);
cout<<result;
}
