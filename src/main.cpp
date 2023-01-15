#include<stdio.h>

void projectMessage() {
	printf("==============project message==============\n");
#ifdef PROJECTNAME
	printf("PROJECT NAME:%s\n", PROJECTNAME);
#else
	printf("PROJECT NAME:\n");
#endif

#ifdef PROJECTVERSION
	printf("PROJECT VERSION:%s\n", PROJECTVERSION);
#else
	printf("RPOJECT VERSION:\n");
#endif
	printf("COMPILED TIME:%s %s\n",__DATE__, __TIME__);
}

int main() {
	projectMessage();
	return 0;
}
