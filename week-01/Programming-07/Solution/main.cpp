#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int result = -2;  // текущий ответ
    // если f ни разу не встретится, он останется равным -2

    for (int i = 0; i < s.size(); ++i) {
        // если текущий символ равен f, обновим текущий ответ
        if (s[i] == 'f') {

            // есди до этого не было ни одного вхождения, значит, сейчас нашли первое
            if (result == -2) {
                result = -1;  // теперь вхождение ровно одно

                // до этого было ровно одно вхождение → сейчас как раз второе
            } else if (result == -1) {
                result = i;
                break;  // цикл можно завершить, потому что ответ уже найден
            }

        }
    }

    cout << result;

    return 0;
}