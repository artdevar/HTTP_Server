#include "Handler.h"

void Handler::handleRequest(Poco::Net::HTTPServerRequest & request,
	Poco::Net::HTTPServerResponse & response)
{
	std::ostream & out = response.send();
	out << "<title>HTTP Server</title>\n"
		<< "<html><head><style>"
		<< "body{ background: rgb(35,35,35); color: rgb(235,235,235);"
		<< "</style><font size =\"72\"><p align=\"center\">Hello, World!</p></font>";
	response.setStatus(Poco::Net::HTTPServerResponse::HTTP_OK);
}