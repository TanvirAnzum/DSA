#include <bits/stdc++.h>

using namespace std;

string multiply(string num1, string num2)
{
  int len1 = num1.size();
  int len2 = num2.size();

  vector<int>result(len1+len2,0);

  int i_num1 = 0;
  int i_num2 = 0;

  for(int i=len1 - 1;i>=0;i--) {
    int carry = 0;
    int n1 = num1[i] - '0';
    i_num2 = 0;
    for(int j=len2 - 1;j>=0;j--) {
        int n2 = num2[j] - '0';
        int sum = n1 * n2 + result[i_num1 + i_num2] + carry;
        carry = sum / 10;
        result[i_num1 + i_num2] = sum % 10;
        i_num2++;
    }
    if(carry>0) result[i_num1 + i_num2] += carry;

    i_num1++;
  }
  int i = result.size() - 1;
  while(i>=0 && result[i]== 0) i--;

  if(i == -1) return "0";

  string output;
  while(i>=0) {
    output += to_string(result[i--]);
  }
  return output;
}


int main()
{
    int n, res;
    cin>>n;
    res = 1;
    if(n == 0 || n == 1) cout<<res<<endl;
    else {
        string fact = "1";
        for(int i=2;i<=n;i++) {
            fact = multiply(fact,to_string(i));
        }
    cout<<fact<<endl;
    }
    return 0;
}
