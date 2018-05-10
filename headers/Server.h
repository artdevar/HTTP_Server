#ifndef __SERVER_H__
#define __SERVER_H__

#include "RequestHandler.h"
#include <Poco/Util/ServerApplication.h>
#include <Poco/Net/HTTPServer.h>
#include <Poco/Net/ServerSocketImpl.h>
#include <vector>
#include <string>

class Server : public Poco::Util::ServerApplication
{
private:
	virtual int main(const std::vector<std::string> &) override;
};

#endif 
