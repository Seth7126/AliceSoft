// 函数: sub_47bea0
// 地址: 0x47bea0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_47c0f0(arg1)
void* ecx = arg1[0x11]

if (ecx != 0)
    sub_403160(ecx, arg1[0x13] - ecx, 1)
    arg1[0x11] = 0
    arg1[0x12] = 0
    arg1[0x13] = 0

int32_t eax_3 = arg1[0x10]
void* edi = &arg1[0xb]

if (eax_3 u>= 0x10)
    sub_403160(*edi, eax_3 + 1, 1)

*(edi + 0x14) = 0xf
bool cond:0 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:0))
    edi = *edi

*edi = 0
void* edi_1 = &arg1[4]
int32_t eax_5 = *(edi_1 + 0x14)

if (eax_5 u>= 0x10)
    sub_403160(*edi_1, eax_5 + 1, 1)

*(edi_1 + 0x14) = 0xf
bool cond:1 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:1))
    edi_1 = *edi_1

*edi_1 = 0
HANDLE hEvent = arg1[3]
arg1[2] = &thread::CEvent::`vftable'

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(arg1[3])
    arg1[3] = 0

BOOL hHandle = arg1[1]
*arg1 = &thread::CThread::`vftable'

if (hHandle != 0)
    WaitForSingleObject(hHandle, 0xffffffff)
    hHandle = CloseHandle(arg1[1])
    arg1[1] = 0

return hHandle
