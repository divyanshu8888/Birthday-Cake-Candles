#include <bits/stdc++.h>

using namespace std;

long long int birthdayCakeCandles(int n, vector <long long int> ar) {
    long int c2=0,c1=0,c3=0,max=ar[0];
   for(int i=0;i<n;i++)
   {
       if(max<ar[i])
           max=ar[i];
   }
     for(int i=0;i<n;i++)
     {
       if(max==ar[i])
           c3++;
   }
                                                 return c3;
}

int main() {
    long long int n;
    cin >> n;
    vector<long long int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long long int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
