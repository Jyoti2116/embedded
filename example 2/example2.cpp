#include <iostream>
#include <map>
#include <tuple>
#include <string>
#include <vector>

using namespace std;
int main()
{
    string name = "mira";
    vector<int> scores = {85, 90, 78};
    map<string,int> ageMap;
    ageMap["mira"] = 20;
    ageMap["john"] = 22;

    tuple<string,int,bool> person={"mira",20,true};

    cout << "Name: " << name << endl;
    cout << "first Scores:" << scores[0] << endl;
    cout << "john : " << ageMap["mira"] << endl;

}





   

