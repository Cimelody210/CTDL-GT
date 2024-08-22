

#include <iostream>
#include<vector>
#include <locale>
#include <codecvt>

using namespace std;

vector<int> distributeRewards(int m, int n) {
    vector<int> rewards(n, 0);

    if (n == 0) return rewards; // Case chia cho 0 học sinh

    int rewardPerStudent = m / n;
    int remainder = m % n;

    for (int i = 0; i < n; ++i) {
        rewards[i] = rewardPerStudent;
    }

    //Phân phối số còn lại
    for (int i = 0; i < remainder; ++i) {
        rewards[i]++;
    }

    return rewards;
}

void printRewards(const std::vector<int>& rewards) {
    for (size_t i = 0; i < rewards.size(); ++i) {
        std::cout << "Học sinh " << i + 1 << ": " << rewards[i] << " phần thưởng" << std::endl;
    }
}

int main() {
    int m, n;

    cout << "Nhập số phần thưởng: ";
    cin >> m;
    cout << "Nhập số học sinh: ";
    cin >> n;

    if (m < 0 || n <= 0) {
        cout << "Số phần thưởng phải không âm và số học sinh phải dương." << std::endl;
        return 1;
    }

    vector<int> rewards = distributeRewards(m, n);

    cout << "Kết quả phân phối phần thưởng:" << std::endl;
    printRewards(rewards);

    return 0;
}
