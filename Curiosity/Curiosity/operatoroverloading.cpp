#include<iostream>
#include<vector>

using namespace std;

struct assoc
{
    vector<pair<string, int>> vec;

    const int& operator[](const string&)const;
        int& operator[](const string&);
};

const int & assoc::operator[](const string &) const
{
    // TODO: insert return statement here
    return 10;
}

int & assoc::operator[](const string &s)
// search for s; return a reference to its value if found;
// otherwise, make a new pair {s,0} and return a reference to its value
{
    for (auto x : vec)
        if (s == x.first) return x.second;
    vec.push_back({ s,0 }); // initial value: 0
    return vec.back().second; // return last element (§31.2.2)
}

int main() // count the occurrences of each word on input
{
    assoc values;
    string buf = "data1";
    string buf1 = "data2";
    string buf2 = "data3";
    string buf3 = "data4";
 
    values[buf];
    ++values[buf1];
    ++values[buf2];
    ++values[buf3];
    
    for (auto x : values.vec)
    {
        //std::cout<<x.first<<x.second<<std::endl;
    }        
}