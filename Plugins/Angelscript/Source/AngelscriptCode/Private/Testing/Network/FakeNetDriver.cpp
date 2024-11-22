#include "Testing/Network/FakeNetDriver.h"

UFakeNetDriver::UFakeNetDriver(const FObjectInitializer& ObjectInitializer)
	: UNetDriver(ObjectInitializer), bIsServer(true)
{
}
