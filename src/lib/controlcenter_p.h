#ifndef CONTROLCENTERPRIVATE_H
#define CONTROLCENTERPRIVATE_H

#include "controlcenter.h"

namespace IPConnect
{

class ClientManager;
class Server;

class ControlCenterPrivate
{
public:
	explicit ControlCenterPrivate(ControlCenter* parent = nullptr);
	~ControlCenterPrivate();
	void init();
	void shutdown();

	Server* m_server;
	ClientManager* m_clientManager;
	ControlCenter* m_cc;
};

}

#endif
