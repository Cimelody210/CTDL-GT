
// Lập lịch thi đấu vòng tròn 1 lượt cho n đội bóng đá, n là luỹ thừa 2. Trong 1 đợt thi đấu , mỗi đội đấu 1 trận. Đấu trong n - 1 đợt.
// Kỹ thuật chia để trị xây dựng lịch cho một nửa số đội

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <stdio.h>

using namespace std;

void generateSchedule(int n, vector<vector<int>>& schedule) {
    if (n == 2) {
        schedule[0][0] = 1;
        schedule[0][1] = 2;
        schedule[1][0] = 2;
        schedule[1][1] = 1;
        return;
    }
    int half = n / 2;
    vector<vector<int>> subSchedule(half, vector<int>(half * 2 - 1, 0));

    generateSchedule(half, subSchedule);

    // Tạo lịch thi đấu cho n đội
    for (int i = 0; i < half; ++i) {
        for (int j = 0; j < half * 2 - 1; ++j) {
            // Sao chép lịch thi đấu của các đội từ 1 đến half
            schedule[i][j] = subSchedule[i][j];
            schedule[i + half][j] = subSchedule[i][j] + half;
            if (schedule[i][j] != 0) {
                // Cặp đấu giữa các đội trong cùng nhóm
                schedule[i][j] = i + 1;
                schedule[i + half][j] = (subSchedule[i][j] + half) % n + 1;
            }
        }
    }
}
void printSchedule(const vector<vector<int>>& schedule) {
    int n = schedule.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < schedule[i].size(); ++j) {
            if (schedule[i][j] != 0) {
                cout << schedule[i][j] << " ";
            }
        }
        cout << endl;
    }
}
//Check x = 2^n T/F
bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}
int main() {
    int n;
    while (true) {
        cout << "Nhập số đội (n, phải là luỹ thừa của 2): ";
        cin >> n;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Bỏ qua dòng còn lại
            cout << "Đầu vào không hợp lệ. Vui lòng nhập một số nguyên." << endl;
            continue;
        }
        // Condition true => Escape
        if (isPowerOfTwo(n)) {
            break;
        }
        else {
            cout << "Số đội phải là luỹ thừa của 2. Vui lòng nhập lại." << endl;
        }
    }

    if ((n & (n - 1)) != 0) {
        cout << "Số đội phải là luỹ thừa của 2." << endl;
        return 1;
    }

    vector<vector<int>> schedule(n, vector<int>(n - 1, 0));
    generateSchedule(n, schedule);
    cout << "Lịch in ra là: ";
    cout << "\n";
    printSchedule(schedule);
	return 0;
}
