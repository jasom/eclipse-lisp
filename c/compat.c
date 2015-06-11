#define NULL ((void *)0)
int tcdrain(int fd) {return 0;}
int tcflush(int fd, int qs) {return 0;}
char *userid = "X";
char *cuserid(char *foo) {
    if(foo==NULL) return userid;
    foo[0] = 'X';
    foo[1] = 0;
    return foo;
}
