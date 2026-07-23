// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Solution {
public:
    void pattern12(int n) {
        int i,j,k,l;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<j;
            }
            for(k=1;k<=2*(n-i);k++){
            cout<<" ";
            }
            for(l=i;l>=1;l--){
                cout<<l;
            }
        cout<<endl;
    }

    

    }
};
int main(){
    Solution obj;
    int i;
    cout<<"Enter the number of rows:";
    cin>>i;
    obj.pattern12(i);
    return 0;
}
