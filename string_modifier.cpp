#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:
void run(vector<string>& words){
    for(int i=0; i<words.size(); i++){
        words[i]=words[i]+"!";
    }
}
};
int main(){
    solution obj;
vector<string> a={"hello", "world"};
obj.run(a);

for(string x : a){
    cout<<x<<" ";
}
}