#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

bool continous = false;

int main(int argc, char *argv[])
{
	// handle arguments
	if (argc > 1)
	{
		if ((strcmp(argv[1], "--continous") == 0) || ((strcmp(argv[1], "-c") == 0)))
		{
			continous = true;
		}
		else if ((strcmp(argv[1], "--help") == 0) || ((strcmp(argv[1], "-h") == 0)))
		{
			printf("Use -c or --continous to continously print the time\n\n");
			return 0;
		}
		else
		{
			printf("Unknown argument\n");
		}
	}

	
	time_t time_now;
	struct tm *local_time;

	while (true)
	{
		time(&time_now);
		local_time = localtime(&time_now);

		if (continous)
			printf("\033[2J\033[H");

		printf("%02d:%02d:%02d\n",
			local_time->tm_hour,
			local_time->tm_min,
			local_time->tm_sec
		);

		if (!continous)
		{
			break;
		} else
		{
			sleep(1);
		}
	}
	
}
