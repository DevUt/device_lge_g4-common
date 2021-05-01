#include <linux/videodev2.h>
#include<fcntl.h>
#include<errno.h>
#include <sys/ioctl.h>
#include <utils/Log.h>

extern int errno;
int main(){
    struct v4l2_capability cap;
    memset(&cap, 0, sizeof(cap));

    ALOGI("DevUtCap: OPENING /dev/video1");
    int fd = open("/dev/video1", O_RDWR | O_NONBLOCK);
    ALOGI("DevUtCap: value for fd : %d errno: %d",fd,errno);
    if(fd == -1){
        ALOGE("DevUtCap, Cannot open /dev/video1 %d",errno);
        exit(-1);
    }else
        ALOGI("DevUtCap : Sucess opening /dev/video1");

    int rc = ioctl(fd,VIDIOC_QUERYCAP, &cap);

    if(rc != 0){
        ALOGE("DevUtCap : Cannot invoke camera capabilites rc : %d",rc);
    }else{
        ALOGI("DevUtCap : Sucessful ioctl call rc : %d",rc);
    }

    ALOGI("DevUtCap : Closing /dev/video1");

    close(fd);
}