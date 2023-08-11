#include <iostream>
#include <vector>
using namespace std;

struct play {
int x;
};

struct cordinates {
play x;
int y, z;
};

int main() {
cordinates ip = {4, 1, 2};
play p1 = {7}, p2 = {9};
cordinates ip1 = {p1, 3, 8};
cordinates ip2 = {p2, 2, 4};
cordinates* ip_addr = &ip;
cout << ip_addr << " " << ip_addr->x.x << " " << ip_addr->y << " "
<< ip_addr->z << endl;

vector<cordinates> arr = {ip1, ip2};
for (cordinates x : arr) {
cout << x.x.x << endl;
}

return 0;
}
