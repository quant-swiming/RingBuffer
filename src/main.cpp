#include <stdio.h>
void message()
{
  printf("==============project message==============\n");
#ifdef PROJECTNAME
  printf("PROJECT NAME:%s\n", PROJECTNAME);
#endif
#ifdef PROJECTVERSION
  printf("PROJECT VERSION:%s\n", PROJECTVERSION);
#endif
#ifdef BUILDTYPE
  printf("BUILD TYPE:%s\n", BUILDTYPE);
#endif
}

int main()
{
  message();
  return 0;
}
