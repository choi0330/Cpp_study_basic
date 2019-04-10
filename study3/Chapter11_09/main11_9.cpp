// Multiple Inheritance
#include <iostream>
using namespace std;

class USBDevice
{
private:
	long m_id;

public:
	USBDevice(long id) : m_id(id) {}

	long getID() { return m_id; }

	void plugAndplay() {}
};

class NetworkDevice
{
private:
	long m_id;

public:
	NetworkDevice(long id) : m_id(id) {}

	long getID() { return m_id; }

	void networking() {}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		:USBDevice(usb_id), NetworkDevice(net_id)
	{}
};

int main()
{
	USBNetworkDevice my_device(3.14, 9.123);
	my_device.networking();
	my_device.plugAndplay();

	//my_device.getID(); //ambiguous
	my_device.USBDevice::getID();
	my_device.NetworkDevice::getID();


	return 0;
}