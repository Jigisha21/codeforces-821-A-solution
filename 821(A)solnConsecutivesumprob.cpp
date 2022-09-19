#include<iostream>
#include<queue>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n , k ;
        cin>>n >>k ;
        int*arr = new int[n] ;

    vector<priority_queue<int>>v(k) ;  // this is how we declare a vector of size k ;
    for(int i ; i< n ; i++)
    {
        int temp ;
        cin>>temp ;
        v[i%k].push(temp) ;  // for pushing the elements in k containers
    }
    int ans = 0 ;
    for(int i = 0 ; i< v.size() ; i++)
    {
        ans+=v[i].top() ;
    }
    cout<< ans<<endl  ;
    v.clear() ;
    delete[]arr ;
    }

}
