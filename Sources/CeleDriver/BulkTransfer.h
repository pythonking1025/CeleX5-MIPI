#ifndef __BULK_TRANSFER_H__
#define __BULK_TRANSFER_H__

#include "libusb.h"
#include "Package.h"

<<<<<<< HEAD
=======
extern bool    g_bTransfer_Error;

>>>>>>> 72687b79f3b7abd391838d295d21018c85d5c9ea
bool Init(void);
void Exit(void);
libusb_transfer *alloc_bulk_transfer(libusb_device_handle *device_handle, uint8_t address, uint8_t *buffer);
void cancel_bulk_transfer(libusb_transfer *xfr);
bool GetPicture(std::vector<uint8_t> &Image);
bool GetPicture(std::vector<uint8_t> &Image, std::time_t& time_stamp_end, std::vector<IMU_Raw_Data>& imu_data);
void ClearData();

#endif // __BULK_TRANSFER_H__
