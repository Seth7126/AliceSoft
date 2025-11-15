// 函数: sub_47d110
// 地址: 0x47d110
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = data_7fcb60
HANDLE hHandle = *(esi + 4)

if (hHandle != 0 && WaitForSingleObject(hHandle, 0) == WAIT_TIMEOUT)
    enum WAIT_EVENT eax
    eax.b = 1
    return eax

sub_47c0f0(esi)
BOOL eax_1
eax_1.b = 0
return eax_1
