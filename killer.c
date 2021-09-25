#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char *scenario = argv[1];
	int pid = atoi(argv[2]);

	switch (scenario[0]) {
	case '1':
		break;
	case '2':
        kill(pid, SIGINT);
        sleep(4);
		break;
	case '3':
        kill(pid, SIGINT);
        sleep(5);
        kill(pid, SIGHUP);
        sleep(4);
		break;
	case '4':
        kill(pid, SIGINT);
        sleep(2);
        kill(pid, SIGHUP);
        sleep(4);
		break;
	case '5':
        kill(pid, SIGINT);
        sleep(4);
        kill(pid, 10);
        sleep(1);
        kill(pid, 16);
		break;
	case '6':
        kill(pid, SIGINT);
        sleep(5);
        //mute
        kill(pid,31);
        sleep(1);
        kill(pid,10);
        sleep(1);

        kill(pid, 30);
        sleep(1);
        kill(pid, SIGTERM);
		break;
	case '7':
        kill(pid,31);
        sleep(1);
        kill(pid,  SIGQUIT);
        sleep(5);
        kill(pid,31);
        sleep(4);
//        kill(pid, SIGINT);
//        sleep(4);


		break;

	}
}
