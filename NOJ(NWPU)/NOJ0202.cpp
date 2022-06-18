#include <iostream>
#include <iomanip>
using namespace std;
double benefit(double m = 0)
{
    double bonus;
    //利润(I)低于或等于10万元时，奖金可提10%
    if (m < 10)
        bonus = m * 0.1;
    //利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%
    else if (m < 20)
        bonus = 10 * 0.1 + (m - 10) * 0.075;
    // 20万到40万之间时，高于20万元的部分，可提成5%
    else if (m < 40)
        bonus = 10 * 0.1 + 10 * 0.075 + (m - 20) * 0.05;
    // 40万到60万之间时，高于40万元的部分，可提成3%
    else if (m < 60)
        bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (m - 40) * 0.03;
    // 60万到100万之间时，高于60万元的部分，可提成1.5%
    else if (m < 100)
        bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (m - 60) * 0.015;
    //高于100万元时，超过100万元的部分按1%提成
    else
        bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (m - 100) * 0.01;
    return bonus;
}

int main()
{
    double I;
    cin >> I;
    cout << fixed << setprecision(6) << benefit(I);
    return 0;
}