#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    string ans;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(N % 2== 1){
        ans="Weird";
    }else {
         if (N >= 2 && N <= 5)
             ans = "Not Weird";
          else if (N >= 6 && N <= 20)
              ans = "Weird";
          else if (N > 20)
             ans = "Not Weird"; 
      }
      cout<<ans<<endl;
    return 0;
}
