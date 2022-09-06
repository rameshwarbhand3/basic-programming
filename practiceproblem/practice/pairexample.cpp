#include <iostream>
#include <vector>

using namespace std;
int main(){
vector<pair<int, char>> alphabets;

char ch = 'a';

for (int i = 1; i <= 26; i++)
{
    pair<int, char> pair1;
    pair1.first = i;
    pair1.second = ch;
    alphabets.push_back(pair1);
    ch++;
}

for (int i = 0; i < 26; i++)
{
    pair<int, char> pair1 = alphabets[i];

    cout << pair1.first << ":" << pair1.second << endl;
}
return(0);
}