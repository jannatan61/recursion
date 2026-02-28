#include <iostream>

using namespace std;

void print(long long n ){

    if (n==0){

    return;
}
print(n/10);
cout<<n%10<<" ";

}
int main()
{
    int t;
    long long n;
    cin>> t;
    while(t--){
       cin>>n;

       if (n==0){
    cout<<0<<endl;

}else {
 print(n);
}
cout<<endl;
    }


    return 0;
}
