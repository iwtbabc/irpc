#include "dispatcher.h"
#include "tcp_server.h"

using namespace inet;

int main(){

	Dispatcher dispatcher;
	TcpServer server(&dispatcher, 8888);
	server.start();
	dispatcher.loop();
	return 0;
}
