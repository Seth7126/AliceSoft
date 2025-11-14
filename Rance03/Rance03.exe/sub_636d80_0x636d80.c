// 函数: sub_636d80
// 地址: 0x636d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg4 s< 0x11)
    int32_t eax
    eax.b = 0
    return eax

*(arg1 + 4) = zx.d(*(arg3 + 2))
*(arg1 + 8) = zx.d(*(arg3 + 0xd)) << 8 | zx.d(*(arg3 + 0xc))
*(arg1 + 0xc) = zx.d(*(arg3 + 0xf)) << 8 | zx.d(*(arg3 + 0xe))
uint32_t eax_4 = zx.d(*(arg3 + 0x10))
int32_t ecx_6 = *(arg1 + 4)
*(arg1 + 0x10) = eax_4

if ((ecx_6 != 2 && ecx_6 != 0xa) || *(arg1 + 8) s<= 0 || *(arg1 + 0xc) s<= 0
        || (eax_4 != 0x18 && eax_4 != 0x20))
    eax_4.b = 0
    return eax_4

void* eax_5

if (sub_636e70(arg1, arg2).b != 0)
    eax_5 = *(arg1 + 4)
    
    if (eax_5 == 2)
        int32_t* var_14 = *(arg2 + 0x14)
        
        if (*(arg1 + 0x10) != 0x18)
            sub_636f50(arg1, var_14, arg3)
            int32_t* eax_7
            eax_7.b = 1
            return eax_7
        
        sub_636ed0(arg1, var_14, arg3)
        int32_t* eax_6
        eax_6.b = 1
        return eax_6
    
    if (eax_5 == 0xa)
        int32_t* var_14_1 = *(arg2 + 0x14)
        
        if (*(arg1 + 0x10) != 0x18)
            sub_6370d0(arg1, var_14_1, arg3)
            int32_t eax_9
            eax_9.b = 1
            return eax_9
        
        sub_636fe0(arg1, var_14_1, arg3)
        int32_t eax_8
        eax_8.b = 1
        return eax_8

eax_5.b = 0
return eax_5
