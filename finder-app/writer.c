#include <syslog.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h> 
#include <unistd.h> 
#include <string.h>
#include <stdio.h>


int main(int argc, char* argv[]) { 
    openlog(NULL, 0, LOG_USER);

    char* usrFile = argv[1]; 
    char* usrStr = argv[2];

    int fd; 
    fd = open(usrFile, O_RDWR | O_CREAT | O_APPEND);

    if (fd == -1) {
        /* error */ 
        syslog(LOG_ERR, "File does not exist");
    }

    ssize_t nr; 
    nr = write (fd, usrStr, strlen (usrStr));
    if (nr == -1) {
        /* error */
        syslog(LOG_ERR, "Cannot write to file");
    }

    int fc; 
    fc = close(fc); 
    if (fc == -1) {
        /* error */
        syslog(LOG_ERR, "Cannot close the file");
    }

    syslog(LOG_DEBUG, "Writing %s to %s", usrStr, usrFile);
    closelog();

}; 