
 #include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define 	MAXCOUNT	2147483647

void short_delay(int count)
{
	for (int i = 0; i != count; ++i)
		;
	return;
}

void* threadFunction_1(void *value)
{
	int *x = (int*) value;

	while (*x < MAXCOUNT)
	{
		short_delay(10);
		++(*x);
	}
	return x;
}

void* threadFunction_2(void *value)
{
	int *x = (int*) value;

	while (*x < MAXCOUNT)
	{
		short_delay(10);
		++(*x);
	}
	return x;
}

int main()
{
	int x_1 = 0, x_2 = 0, y = 0;
pthread_t thread_1, thread_2;

	if (pthread_create(&thread_1, NULL, &threadFunction_1, &x_1) != 0)
	{
		printf("Failed to create the thread\n");
		return 1;
	}
	if (pthread_create(&thread_2, NULL, &threadFunction_2, &x_2) != 0)
	{
		printf("Failed to create the thread\n");
		return 1;
	}


	const int num_loops = 10;
	while (y != num_loops)
	{
		printf("The value of x_1=%d, x_2=%d and y=%d \n", x_1, x_2, y);
		usleep(100);
		++y;
	}


	pthread_cancel(thread_1);
	pthread_cancel(thread_2);
	printf("Final: x_1=%d, x_2=%d, y=%d\n", x_1, x_2, y);
	return EXIT_SUCCESS;
}
