#include<iostream>
using  namespace std;
class Solution {
public:
    void pattern8(int n) {
        int i,j,k,l;
        for(i=n;i>=1;i--)
        {
            for(j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(k=1;k<=2*i-1;k++){
                cout<<"*";
            }
            for(l=1;l<=n-i;l++){
                cout<<" ";
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
    obj.pattern8(i);
    return 0;
}
