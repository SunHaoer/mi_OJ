#include<cstdio>
#include<vector>
using namespace std;
vector<int> vt;
bool flag = false;

void fun1(int index) {
    for(int i = 1; i <= vt[index]; i++) {
        if(index + i < vt.size() - 1) {
            fun1(index + i);
        } else {
            flag = true;
            return;
        }
    }
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF) {
        vt.push_back(n);
    }
    fun1(0);
    if(flag || vt.size() == 1) printf("true\n");
    else printf("false\n");
    return 0;
}
