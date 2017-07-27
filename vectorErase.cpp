#include <iostream>
#include <vector>

using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin>> n;
    std::vector<int> lst(n);

    //input
    for(int i =0; i < n; i++){
        cin>>lst[i];
    }

    int pos;
    cin>>pos;

//    if(pos < 1 || pos > n){
//        cerr<<"Erase position out of range";
//    }

    lst.erase(lst.begin()+pos-1,lst.begin()+pos);

    int a,b;
    cin>>a>>b;

//    if( ((a >= 1) && (a < b)) && ((b > a)&& (b <= n)) ){
        lst.erase(lst.begin()+a-1,lst.begin()+b-1);
//    }

    cout<<lst.size()<<endl;
    for(int i =0; i < lst.size(); i++){
        cout<<lst[i]<<" ";
    }

    return 0;
}



