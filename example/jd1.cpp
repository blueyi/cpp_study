#include <iostream>
#include <vector>
#include <string>
#include <sstream>
struct XY {
    XY(int i, int j) : x(i), y(j) {}
    int x;
    int y;
};

void func(int d, int sumTime, const std::vector<XY> &daily, std::vector<std::string> &res)
{
    if (sumTime / d > 8){
        res.push_back("No");
        return;
    }
    int sumMin, sumMax;
    sumMin = sumMax = 0;
    int avt;
    std::size_t tsum = sumTime;
    std::size_t tday = d;
    std::vector<int> dtab;
    for (auto vec : daily) {
        avt = tsum / tday;
        sumMin += vec.x;
        sumMax += vec.y;
        if (avt > vec.y) {
            dtab.push_back(vec.y);
            tsum -= vec.y;
            --tday;
        }
        else if (avt < vec.x) {
            dtab.push_back(vec.x);
            tsum -= vec.x;
            --tday;
        }
        else {
            if (tday == 1) {
                dtab.push_back(tsum);
                --tday;
                break;
            }
            else {
                dtab.push_back(vec.y);
                --tday;
                tsum -= vec.y;
            }
        }
    }
    if (sumTime < sumMin && sumTime > sumMax) {
        res.push_back("No");
        return;
    }
    res.push_back("Yes");
    std::ostringstream ins;
    for (auto i : dtab) {
        ins << i << " ";
    }
    res.push_back(ins.str());
}

int main()
{
    int d, sumTime;
    std::vector<XY> daily;
    std::vector<std::string> result;
    while (std::cin >> d >> sumTime) {
        int tempx, tempy;
        for (int i = 0; i < d; ++i) {
            std::cin >> tempx >> tempy;
            XY temxy(tempx, tempy);
            daily.push_back(temxy);
        }
        func(d, sumTime, daily, result);
        std::cin.sync();
        daily.clear();
    }
    for (auto s : result)
        std::cout << s << std::endl;
    return 0;
}

