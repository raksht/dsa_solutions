#include<iostream>
using namespace std;
class Solution {
public:
    void pattern2(int n) {
    int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<"*";
            }
        cout<<endl;
        }
         for(i=n;i>=1;i--){
            for(j=i;j>=1;j--){
                cout<<"*";
            }
        cout<<endl;
        }
    }
};
int main(){
    Solution obj;
    int i;
    cout<<"enter the number:";
    cin>>i;
    obj.pattern2(i);
    return 0;
}
