#include<cstdio>
#include<vector>
using namespace std;
vector<int> vt;

void findAndInsert(int num) {
    for(int i = 0; i < vt.size(); i++) {
        if(vt[i] == num) {
            vt.erase(vt.begin() + i);
            return;
        }
    }
    vt.push_back(num);
}

int main()
{
    int num;
    while(scanf("%d", &num) != EOF) {
        findAndInsert(num);
    }
    printf("%d", vt[0]);
    return 0;
}
