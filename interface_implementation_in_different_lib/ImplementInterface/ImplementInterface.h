#ifndef _IMPLEMENT_INTERFACE_H
#define _IMPLEMENT_INTERFACE_H

#include "../ProvideInterface/ProvideInterface.h"

class CImplementInterface : public IProvideInterface
{
public:
	CImplementInterface();
	virtual ~CImplementInterface();

	virtual void Func();
};

#endif
