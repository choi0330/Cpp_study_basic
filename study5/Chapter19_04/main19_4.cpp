// Race Condition // std::atomic, std::scoped_lock
#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>

using namespace std;

//int shared_memory(0); // different threads can approach to this memory
mutex mtx; // allow only one thread.

int main()
{
	//atomic<int> shared_memory(0); // 3processes are binded together // prevents the multi-threading problem
	int shared_memory(0); 

	auto count_func = [&]() {
		for (int i = 0; i < 1000; ++i)
		{
			this_thread::sleep_for(chrono::milliseconds(1)); // some other works

			//std::lock_guard lock(mtx);
			std::scoped_lock lock(mtx); // much better

			shared_memory++; // read on cpu -> +1 -> write on memory // thread2 can chage while thread1 is on the process
			//shared_memory.fetch_add(1); // slower than normal addition
			
			//mtx.unlock(); // imperative
		}
	};

	thread t1 = thread(count_func); // with sleep_for ( two threads work parallel )
	thread t2 = thread(count_func);

	t1.join();
	t2.join();

	cout << "After" << endl;
	cout << shared_memory << endl;

	return 0;
}