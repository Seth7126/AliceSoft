// 函数: sub_6289d0
// 地址: 0x6289d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg3
uint32_t ecx = zx.d(*(arg2 + 0x4a))

if ((ecx & 0x8000) == 0)
    if (arg4 u> 3)
        sub_6287e0(arg1, arg2, arg3, "sRGB", arg4, "invalid sRGB rendering intent")
        return 0
    
    if ((ecx.b & 4) != 0)
        arg1 = zx.d(arg2[0x12].w)
        
        if (arg1 != arg4)
            sub_6287e0(arg1, arg2, arg3, "sRGB", arg4, "inconsistent rendering intents")
            return 0
    
    if ((ecx.b & 0x20) == 0)
        if ((ecx.b & 2) != 0)
            arg1 = sub_628430(arg1, &arg2[1], &data_6f14c0, 0x64)
            
            if (arg1 == 0)
                if ((*(arg3 + 0x74) & 0x8000) == 0)
                    if ((*(arg3 + 0x78) & &__dos_header) == 0)
                        sub_62a520(arg3, "cHRM chunk does not match sRGB")
                        noreturn
                    
                    arg1 = sub_62a550(arg3, "cHRM chunk does not match sRGB")
                else
                    arg1 = sub_62a7c0(arg3, "cHRM chunk does not match sRGB")
        
        sub_627cd0(arg1, arg2, arg3, 0xb18f, 2)
        arg2[0x12].w = arg4.w
        *(arg2 + 4) = data_6f14c0
        *arg2 = 0xb18f
        *(arg2 + 0x14) = data_6f14d0
        *(arg2 + 0x24) = data_6ed064
        *(arg2 + 0x34) = data_6ed074
        arg2[0x11] = 0x1734d
        *(arg2 + 0x4a) |= 0xe7
        return 1
    
    sub_62a5c0(arg3, "duplicate sRGB information ignored")

return 0
