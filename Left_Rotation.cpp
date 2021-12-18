// A left rotation operation on an array shifts each of the array's elements  unit to the left.
                //  1st rotation | 2nd rotation
// [1,2,3,4,5] -> [2,3,4,5,1] ->  [3,4,5,1,2]

#include<bits/stdc++.h>
using namespace std;




vector<int> rotLeftcpp(vector<int> a, int d) {
    int key=0;
    for (int i=0; i<d; i++) {
        key=a[0];
        a.erase(a.begin());
        a.push_back(key);
    }
    return a;
}

void printarray(vector<int>& a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main() {

    vector<int> Arr={10,11,12,13,14,15,16,17,18,19,20};
    
    cout<<"array before rotation"<<endl;
    printarray(Arr);
    
    Arr=rotLeftcpp(Arr, 3);
    cout<<endl<<"array after rotation"<<endl;
    printarray(Arr);
    return 0;
}