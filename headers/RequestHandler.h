#ifndef __REQ_HANDL_H__
#define __REQ_HANDL_H__

#include "Handler.h"
#include <Poco/Net/HTTPRequestHandlerFactory.h>

class RequestHandler : public Poco::Net::HTTPRequestHandlerFactory
{
public:
	RequestHandler();
	virtual Poco::Net::HTTPRequestHandler * createRequestHandler(
		const Poco::Net::HTTPServerRequest &) override;
};

#endif