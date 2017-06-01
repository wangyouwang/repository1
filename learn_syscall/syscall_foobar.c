#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>

#define __NR_foo 312
#define __NR_bar 313

int main()
{
	printf("result foo is %ld\n", syscall(__NR_foo));
	printf("%s\n", strerror(errno));

	printf("result bar is %ld\n", syscall(__NR_bar));
	printf("%s\n", strerror(errno));

	return 0;
}
