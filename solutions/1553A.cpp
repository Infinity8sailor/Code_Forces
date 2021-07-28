#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, temp;
    vector <int> _v;
    std::cin >>  t ;
    for (int i = 0; i < t; i++)
    {    
        std::cin >> temp;
        _v.push_back(temp);
    }
    for (int k = 0; k < t; k++){
        std::cout << (_v[k]+1)/10 << std::endl;
    }
    return 0;
}