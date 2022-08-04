#include <bits/stdc++.h>
#include <fstream>

using namespace std;

bool compare(const pair<int, double>&i, const pair<int, double>&j)
{
    return i.second > j.second;
}


int main()
{
    ifstream written("Written.txt");
    vector<int>values;
    int n,no_of_student;
    while(written>>n) {
        values.push_back(n);
    }
    no_of_student = values[0];
    pair<int,double>result[no_of_student];
    for(int i=0,j = 1;i<no_of_student;i++) {
        result[i].first = values[j];
        result[i].second = values[j+1] * .60;
        j = j + 2;
    }
    written.close();
    values.clear();
    ifstream practical("Practical.txt");
    while(practical>>n) {
        values.push_back(n);
    }
    for(int i=1;i<values.size();i+=2) {
        for(int j=0;j<no_of_student;j++) {
            if(values[i] == result[j].first) {
                result[j].second += (values[i+1] * .40);
                cout<<result[j].second<<endl;
                break;
            }
        }
    }
    practical.close();
    ofstream rank("Rank.txt");
    rank<<"Rank"<<"\t"<<"ID"<<"\t"<<"Marks"<<endl;
    sort(result,result + no_of_student,compare);
    for(int i=0;i<no_of_student;i++) rank<<i+1<<"\t"<<result[i].first<<"\t"<<result[i].second<<endl;
    return 0;
}
