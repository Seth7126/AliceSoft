// 函数: sub_47c040
// 地址: 0x47c040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = data_7fcb60
sub_47c0f0(esi)
*(esi + 0x48) = *(esi + 0x44)
void* ecx_1

if (*arg1 != 0)
    char* ecx_2 = arg1
    int32_t eax
    
    do
        eax.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_403490(esi + 0x10, arg1, ecx_1)

if (esi + 0x2c != arg2)
    sub_403590(esi + 0x2c, arg2, 0, 0xffffffff)

*(esi + 0x28) = 1
HANDLE hEvent = *(esi + 0xc)

if (hEvent != 0)
    ResetEvent(hEvent)
    CloseHandle(*(esi + 0xc))
    *(esi + 0xc) = 0

HANDLE hEvent_1 = CreateEventA(nullptr, 0, 0, nullptr)
*(esi + 0xc) = hEvent_1

if (hEvent_1 == 0)
    hEvent_1.b = 0
    return hEvent_1

ResetEvent(hEvent_1)
return sub_4061b0(esi, sub_47c550, esi)
