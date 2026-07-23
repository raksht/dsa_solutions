#include<iostream>
using  namespace std;
class Solution {
public:
    void pattern1(int n) {
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
        cout<<"*";
        }

        cout<<endl;
        }
    }
};
int main(){
    Solution obj;
    int i;
    cout<<"enter the number";
    cin>>i;
    obj.pattern1(i);
    return 0;
}
