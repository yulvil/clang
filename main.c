#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
   argc = argc;
        time_t now;
   time_t tloc;

        now = time(NULL);
        printf("%ld\n", now);

        now = time(&tloc);
        printf("%ld %ld\n", now, tloc);

   now = 946684798;
   char *s = ctime(&now);
        printf("%s", s);

   s = ctime(NULL);
   if (s != NULL) {
        printf("%s\n", s);
        }

   char ss[] = "Fri Dec 31 11:59:58 1999";
        ss[11] = 'H';
        ss[12] = 'H';
        ss[14] = 'm';
        ss[15] = 'm';
        printf("%s\n", ss);

        return 0;
}
