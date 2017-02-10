/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_NetworkDriver,
    0x45f167d9,0x6e37,0x40e8,0xa1,0x60,0x72,0x09,0x4d,0xcf,0xab,0x1f);
// {45f167d9-6e37-40e8-a160-72094dcfab1f}
