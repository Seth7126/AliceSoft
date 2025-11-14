// 函数: sub_61b500
// 地址: 0x61b500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &httpdownloader::CApp::`vftable'
sub_61b910(arg1)

if (arg1[0x25] u>= 0x10)
    j__free(arg1[0x20])

arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0
int32_t eax = arg1[0x1d]

if (eax != 0)
    j__free(eax)
    arg1[0x1d] = 0
    arg1[0x1e] = 0
    arg1[0x1f] = 0

if (arg1[0x1c] u>= 0x10)
    j__free(arg1[0x17])

arg1[0x1c] = 0xf
arg1[0x1b] = 0
arg1[0x17].b = 0

if (arg1[0x16] u>= 0x10)
    j__free(arg1[0x11])

arg1[0x16] = 0xf
arg1[0x15] = 0
arg1[0x11].b = 0

if (arg1[0x10] u>= 0x10)
    j__free(arg1[0xb])

arg1[0x10] = 0xf
arg1[0xf] = 0
arg1[0xb].b = 0

if (arg1[0xa] u>= 0x10)
    j__free(arg1[5])

arg1[0xa] = 0xf
arg1[9] = 0
arg1[5].b = 0
HANDLE hEvent = arg1[4]
arg1[3] = &thread::CEvent::`vftable'

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[4])
    arg1[4] = 0

BOOL hHandle = arg1[2]
arg1[1] = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(arg1[2])
    arg1[2] = 0

return hHandle
