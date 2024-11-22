#pragma once

#include "Engine/NetDriver.h"

#include "FakeNetDriver.generated.h"

UCLASS(transient, MinimalAPI, config=Engine)
class UFakeNetDriver : public UNetDriver {
	GENERATED_UCLASS_BODY()

public:
	bool bIsServer;
	
	virtual bool IsServer() const override {
		return bIsServer;
	}
};
