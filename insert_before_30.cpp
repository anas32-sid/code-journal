#include <iostream>
#include <list>
using namespace std;
class solution{
    public:
list <int> run(list<int>&l){
    for(auto x = l.begin(); x!=l.end(); x++){
        if(*x==30){
            l.insert(x, 25);
        }
    }
    return l;
}
};
int main(){
solution obj;
   list<int>l={10, 20, 30, 1, 30, 50};
list<int> result=obj.run(l);
for(int x: result){
    cout<<x<<" ";
}
}
