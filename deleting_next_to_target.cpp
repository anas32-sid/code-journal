#include <iostream>
#include <list>
using namespace std;
class solution{
    public:
list<int> run(list<int>&list, int target){
    for(auto it=list.begin(); it!=list.end(); it++){
        if(*it==30){
            auto temp=it;
            temp++;
            if(temp!=list.end()){
                list.erase(temp);
            }
        }
    }
    return list;
}
};
int main(){
    int target;
    cout<<"enter target element: ";
    cin>>target;
solution obj;
list<int>l{10, 20, 30, 40, 50, 30, 60};
list<int>result=obj.run(l, target);
for(int x : result){
    cout<<x<<" ";
}
}
//deletes next element of target element
