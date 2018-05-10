#include "Server.h"

int Server::main(const std::vector<std::string> &)
{
	Poco::Net::HTTPServerParams * parameters = new Poco::Net::HTTPServerParams();
	parameters->setMaxThreads(4);
	Poco::Net::ServerSocket socket(8080);
	Poco::Net::HTTPServer server(new RequestHandler(), socket, parameters);
	server.start();
	waitForTerminationRequest();
	server.stop();
	return 0;
}