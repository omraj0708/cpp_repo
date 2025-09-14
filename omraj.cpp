#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // creat vector     
    vector< char> arr;
    
    // int ans=(sizeof (arr)/ sizeof (char));    // compiler dependent
    // cout<< ans<< endl;

    
    cout<<  arr.size()<< endl;
    cout<< arr.capacity()<< endl;

    arr.push_back(5);
    arr.push_back(6);

    // print 
 
    for (int i=0;  i< arr.size() ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<< endl;

    vector<int>brr(10);
    cout<< " size  of b "<< brr . size()<< endl;
    cout<<" capacity of b"<< brr.capacity()<< endl ;

    return 0;
}
