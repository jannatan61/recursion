#include <iostream>

using namespace std;

void print(long long n ){

    if (n==0){

    return;
}
print(n/2);
cout<<n%2<<" ";

}
int main()
{
    int t;
    long long n;
    cin>> t;
    while(t--){
       cin>>n;

print(n);
cout<<endl;
    }


    return 0;
}

