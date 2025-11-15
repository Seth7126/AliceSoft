// 函数: sub_6376a0
// 地址: 0x6376a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* ebp = arg4
int16_t* esi = arg3
int32_t eax_1 = arg5

if (esi != arg2)
    while (ebp != eax_1)
        uint32_t ebx_1 = zx.d(*ebp)
        int16_t eax_4 = (*(**(arg6 + 4) + 0x20))(zx.d(*esi))
        esi = &esi[1]
        ebp = &ebp[1]
        
        if (eax_4 != (*(**(arg6 + 4) + 0x20))(ebx_1))
            return arg3
        
        eax_1 = arg5
        
        if (esi == arg2)
            break

if (ebp == eax_1)
    return esi

return arg3
