#include<iostream>
#include<string>
#include<map>
using namespace std;

int GCD(int a, int b)
{
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int up1 = 0, down1 = 0, up2 = 0, down2 = 0, up3 = 0, down3 = 0;
    cin >> up1 >> down1;
    cin >> up2 >> down2;
    down3 = down1 * down2;
    up3 = up1 * down2 + up2 * down1;
    int GCD_of_UP_DOWN = GCD(up3, down3);
    cout << (up3 / GCD_of_UP_DOWN)<<" "<< (down3 / GCD_of_UP_DOWN);
}
