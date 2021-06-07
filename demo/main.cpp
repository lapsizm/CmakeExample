#include <glog/logging.h>

int main(){
    google::FlushLogFiles(google::GLOG_ERROR);
    return 0;
}