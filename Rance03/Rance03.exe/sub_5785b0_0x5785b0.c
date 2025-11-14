// 函数: sub_5785b0
// 地址: 0x5785b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x78787879, *(arg1 + 0x1c) - *(arg1 + 0x18))
    int32_t edx_4 = edx_3 s>> 5
    
    if (arg2 s< (edx_4 u>> 0x1f) + edx_4)
        if (arg3 s>= 0)
            void* esi_1 = *(arg1 + 0x18) + arg2 * 0x44
            int32_t eax_5
            int32_t edx_5
            edx_5:eax_5 = muls.dp.d(0x4bda12f7, *(esi_1 + 0x38) - *(esi_1 + 0x34))
            int32_t edx_6 = edx_5 s>> 5
            
            if (arg3 s< (edx_6 u>> 0x1f) + edx_6)
                int32_t* edx_8 = arg3 * 0x6c + *(esi_1 + 0x34)
                *arg4 = edx_8[2]
                *arg5 = edx_8[1]
                *arg6 = *edx_8
                *arg7 = edx_8[5]
                *arg8 = edx_8[4]
                *arg9 = edx_8[3]
                *arg10 = edx_8[8]
                *arg11 = edx_8[7]
                *arg12 = edx_8[6]
                *arg13 = edx_8[0xb]
                *arg14 = edx_8[0xa]
                *arg15 = edx_8[9]
                *arg16 = edx_8[0xe]
                *arg17 = edx_8[0xd]
                *arg18 = edx_8[0xc]
                *arg19 = *(edx_8 + 0x3e)
                *arg20 = *(edx_8 + 0x3d)
                *arg21 = edx_8[0xf].b
                *arg22 = *(edx_8 + 0x58)
                arg22[1].d = edx_8[0x18]
                *arg23 = *(edx_8 + 0x4c)
                arg23[1].d = edx_8[0x15]
                *arg24 = *(edx_8 + 0x40)
                arg24[1].d = edx_8[0x12]
                *arg25 = edx_8[0x19]
                int32_t* eax_29
                eax_29.b = 1
                return eax_29
        
        eax.b = 0
        return eax

eax.b = 0
return eax
