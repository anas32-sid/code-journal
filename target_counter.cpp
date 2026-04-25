#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution{
    public:
    bool run(vector<int>&n, int target){
        auto it=find(n.begin(), n.end(), target);
       if(it!=n.end()){
        return true;
       }
       else{
        return false;
       }
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
