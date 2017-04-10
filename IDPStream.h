#ifndef _IDPSTREAM_H
#define _IDPSTREAM_H
#include <libusb-1.0/libusb.h>
#include "IDPFrame.h"

typedef struct StreamHandle
{
    Frame_t *pFrame;
    StreamCtrl_t *pStreamCtrl;
    StreamingInterface_t *pStreamingInterface;
}StreamHandle_t;

typedef struct StreamingInterface
{

    FormatDesc_t *pFrameDesc;
}StreamInterface_t;

typedef struct ControlInterface
{

}ControlInterface_t;

typedef struct FormatDesc
{

}FormatDesc_t;

typedef struct StreamCtrl
{

}StreamCtrl_t;

#endif  /*_IDPSTREAM_H*/