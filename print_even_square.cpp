#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
vector<int> run(vector<int>&v){
    for(int &x: v){
        x=x*x;
    }
    return v;
}
};
int main(){
vector<int>vecc{2, 3, 4, 5, 6};
    solution obj;
    vector<int>result=obj.run(vecc);
for(int x:result){
cout<<x<<" ";
}
}
