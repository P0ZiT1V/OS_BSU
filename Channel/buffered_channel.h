#ifndef BUFFERED_CHANNEL_H_
#define BUFFERED_CHANNEL_H_
#include <utility>
#include <mutex>
#include <chrono>
#include <thread>
#include <condition_variable>
#include <queue>
template<class T>
class BufferedChannel {
 public:
  explicit BufferedChannel(int size) :size_(size) {}
  void Send(T value) {
	std::unique_lock<std::mutex> uniqueLock(mutex_);
	if (is_close) {
	  throw std::runtime_error("Channel is close");
	}
   if(buff.size() == size){
       condition_variable_.wait(uniqueLock);
   }
   buff.push(value);
   uniqueLock.unlock();
   condition_variable_.notify_one();
  }

  std::pair<T, bool> Recv() {
	std::unique_lock<std::mutex> uniqueLock(mutex_);
    if(buff.empty()){
      condition_variable_.wait(uniqueLock);
    }
    T value = buff.front();
    buff.pop();
    uniqueLock.unlock();
    condition_variable_.notify_one();

    return std::make_pair(value, !is_close);
  }

  void Close() {
    std::unique_lock<std::mutex> unique_lock(mutex_);
    is_close = true;
    unique_lock.unlock();
    condition_variable_.notify_one();
  }

 private:
  int size_;
  bool is_close = false;
  std::mutex mutex_;
  std::queue<T> buff;
  std::condition_variable condition_variable_;

};

#endif // BUFFERED_CHANNEL_H_