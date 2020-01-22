#include <chrono>
#include <iostream>

int main() {
    using clock = std::chrono::system_clock;
    using seconds = std::chrono::seconds;

    const auto now = clock::now();
    const auto now_since_epoch = now.time_since_epoch();
    const auto now_since_epoch_sec = std::chrono::duration_cast<seconds>(now_since_epoch);

    std::cout << now_since_epoch_sec.count() << std::endl;
}
