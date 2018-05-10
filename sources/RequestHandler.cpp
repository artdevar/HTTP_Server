#include "RequestHandler.h"

RequestHandler::RequestHandler() = default;

Poco::Net::HTTPRequestHandler * RequestHandler::createRequestHandler(
	const Poco::Net::HTTPServerRequest & request)
{
	auto temp = request.getURI();
	if (temp == "/test" || temp == "/test/")
	{
		return new Handler();
	}
	return nullptr;
}