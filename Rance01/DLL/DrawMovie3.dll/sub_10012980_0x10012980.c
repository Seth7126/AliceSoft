// 函数: sub_10012980
// 地址: 0x10012980
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

__builtin_memcpy(arg1, arg2, 0x48)
uint32_t cb = *(arg2 + 0x40)

if (cb != 0)
    int128_t* eax = CoTaskMemAlloc(cb)
    *(arg1 + 0x44) = eax
    
    if (eax == 0)
        *(arg1 + 0x40) = eax
        return 0x8007000e
    
    sub_10003dc0(eax, *(arg2 + 0x44), *(arg1 + 0x40))

int32_t* ebx_1 = *(arg1 + 0x3c)

if (ebx_1 != 0)
    (*(*ebx_1 + 4))(ebx_1)

return 0
