#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class solution{
    public:
vector<string> run(vector<string>&a, int times){
    queue<string>q;
    for(auto n : a){
        q.push(n);
    }
vector<string>result;
for(int i=0; i<times; i++){
    string temp=q.front();
    result.push_back(temp);
    q.pop();
    q.push(temp);
}
return result;
}
};
int main(){
solution obj;
string n;
int numberofname;
cout<<"enter the number of names: ";
cin>>numberofname;
vector<string> names;
for(int i=0; i<numberofname; i++){
    cin>>n;
names.push_back(n);
}
int times=2*names.size();
vector<string>result=obj.run(names, times);
for(auto x : result){
    cout<<x<<" ";
}
}
