#ifndef _IDPDEVICE_H
#define _IDPDEVICE_H
#include <libusb-1.0/libusb.h>
#include "IDPStream.h"

/*wdxu@rgdsense.com TODO:IDP1000 device*/
typedef struct IDPContext
{
    struct libusb_context *pContext;
    IDPDeviceHandle_t *pIDPDevHandle
}IDPContext_t;

typdef struct IDPDeviceHandle
{
    struct libusb_device_handle *pDevHandle;
    IDPDevice_t *pIDPDevice;
    StreamHandle_t *pStreamHandle;
}IDPDeviceHandle_t;

typedef struct IDPDevice
{
    IDPContext_t *pContext;
    struct libusb_device *pDev;
}IDPDevice_t;

typedef struct DeviceInfo_t
{
    struct libusb_config_descriptor *pConfig;
    ControlInterface_t *pControlInterface;
    
}DeviceInfo_t

#endif  /*_IDPDEVICE_H*/