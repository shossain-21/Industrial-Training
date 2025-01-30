#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fasterInOut ios::sync_with_stdio(false); cin.tie(0);

int main() {
    fasterInOut;

    #ifndef ONLINE_JUDGE
    freopen("C:/Users/USER1/Desktop/inout/input.txt", "r", stdin);
    freopen("C:/Users/USER1/Desktop/inout/output.txt", "w", stdout);
    #endif

    for (int i = 1; i <= 10; i++)  
    {
        cout << i << " ";
    }

    cout<<endl;
    int n; cin>>n;
    cout<<"First "<<n<<" Fibonacci numbers are: ";

    int a=0, b=1;
    cout<<a<<" "<<b<<" ";

    for(int i=2;i<n;i++){
        int next = a+b;
        cout<<next<<" "; a=b; b=next;
    }
    cout<<endl;

    return 0;
}