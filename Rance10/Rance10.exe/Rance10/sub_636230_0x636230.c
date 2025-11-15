// 函数: sub_636230
// 地址: 0x636230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t** var_4_1 = arg3
int32_t eax = arg6
int16_t* esi = arg4
int16_t* ebx = arg2
int16_t* edi = esi

if (esi != arg5)
    while (ebx != eax)
        uint32_t ebp_1 = zx.d(*ebx)
        ebx = &ebx[1]
        
        if ((*(**(arg7 + 4) + 0x20))(zx.d(*esi)) != (*(**(arg7 + 4) + 0x20))(ebp_1))
            *arg3 = edi
            return arg3
        
        esi = &esi[1]
        eax = arg6
        
        if (esi == arg5)
            break

if (ebx == eax)
    edi = esi

*arg3 = edi
return arg3
