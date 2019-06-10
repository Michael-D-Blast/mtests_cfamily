#ifndef _PROVIDE_INTERFACE_H
#define _PROVIDE_INTERFACE_H

class IProvideInterface
{
public:
	virtual ~IProvideInterface() {}

	virtual void Func() = 0;
};

#endif
