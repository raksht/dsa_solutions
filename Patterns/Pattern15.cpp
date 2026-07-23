#include <iostream>
using namespace std;
class Solution {
public:
    void pattern15(int n) {
        for(int i=n;i>=1;i--){
            for(char ch='A';ch<='A'+i;ch++){
                cout<<ch<<" ";
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
    obj.pattern15(i);
    return 0;
}
