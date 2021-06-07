# Клонирование билиотеки и инсталяция
git clone https://github.com/google/glog.git

cmake -S . -B build -G "Unix Makefiles"

cmake --build build

cmake --build build --target install

# Подключение библиотеки в проект

find_package (glog 0.5.0 REQUIRED)

add_executable (demo demo/main.cpp)

target_link_libraries (demo glog::glog)

# Демонстрация

.#include <glog/logging.h>

int main(){

google::FlushLogFiles(google::GLOG_ERROR);

return 0;
}