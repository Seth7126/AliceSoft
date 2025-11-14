// 函数: sub_61cc90
// 地址: 0x61cc90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = data_75d52c
HANDLE hHandle = *(esi + 8)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    enum WAIT_EVENT eax
    eax.b = 1
    return eax

sub_61b910(esi)
BOOL eax_1
eax_1.b = 0
return eax_1
