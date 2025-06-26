#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <cstdlib>
#include <ctime>

void printRandomLines(int count) {
    std::vector<std::string> messages = {
        "Hello, World!",
        "C++ is fast and powerful.",
        "Never stop learning.",
        "This is a random message.",
        "Enjoy your coding journey.",
        "Delay incoming...",
        "You're doing great!",
        "Compiling... Done!",
        "Life is too short for bugs.",
        "Railway is awesome!",
        "OpenAI powers this.",
        "Code, sleep, repeat.",
        "Optimization is key.",
        "Debugging is an art.",
        "Make every second count."
    };

    for (int i = 0; i < count; ++i) {
        int index = rand() % messages.size();
        std::cout << messages[index] << std::endl;
    }
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::cout << "🔹 First 10 lines:\n";
    printRandomLines(10);

    std::cout << "\n⏳ Waiting 10 seconds...\n";
    std::this_thread::sleep_for(std::chrono::seconds(10));

    std::cout << "\n🔹 Next 10 lines:\n";
    printRandomLines(10);

    return 0;
}
