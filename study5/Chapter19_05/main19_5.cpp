// Task // async, future, promise
#include <iostream>
#include <future>
#include <thread>

using namespace std;

int main()
{
	// multi-threading
	//{
	//	int result;
	//	std::thread t([&] {result = 1 + 2; }); // managing thread
	//	t.join(); // wait until the thread work is finished
	//	cout << result << endl;
	//}

	//// task-based parallelism
	//{
	//	// std::future<int> fut = ...
	//	auto fut = std::async([] {return 1 + 2; }); // preferred // task-based
	//	cout << fut.get() << endl; // wait until the async is finished
	//}

	// future and promise
	/*{
		std::promise<int> prom;
		auto fut = prom.get_future();

		auto t = std::thread([](std::promise<int>&& prom)
		{
			prom.set_value(1 + 2);
		}, std::move(prom));

		cout << fut.get() << endl;
		t.join();
	}*/

	// async : no need for destructor
	{
		//auto f1 = std::thread([] {
		//auto f1 = std::async([] {
		std::async([] {
			cout << "async1 start" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "async1 end" << endl;
		});

		//f1.join();

		//auto f2 = std::thread([] {
		//auto f2 = std::async([] {
		std::async([] {
			cout << "async2 start" << endl;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "async2 end" << endl;
		});
		
		//f2.join();

		std::cout << "Main function" << endl;
	}




	return 0;
}