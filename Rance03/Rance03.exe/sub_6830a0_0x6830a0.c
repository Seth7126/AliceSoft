// 函数: sub_6830a0
// 地址: 0x6830a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

if (arg3 u<= 0x200)
    switch (arg3)
        case 1
            sub_683450(arg1, arg2)
            return 0
        case 2
            sub_683670(arg1)
            return 0
        case 5
            LPARAM var_14 = arg5
            HDC var_1c
            sub_6836c0(arg1, var_1c)
            return 0
        case 0xf
            sub_683840(arg1, arg2)
            return 0
        case 0x114
            sub_670690(arg1 + 0x120, zx.d(arg4.w))
            sub_6838c0(arg1)
            return 0
        case 0x115
            sub_670690(arg1 + 0x104, zx.d(arg4.w))
            sub_6838c0(arg1)
            return 0
        case 0x200
            sub_683330(arg1, arg2)
            return 0
else
    float xmm0_1
    
    if (arg3 - 0x201 u<= 0xa2)
        switch (arg3)
            case 0x201
                **(arg1 + 0xe4) = arg1
                void** eax_15
                eax_15.b = *(arg1 + 0xec)
                *(arg1 + 0xed) = eax_15.b
                *(arg1 + 0xec) = 1
                SetCapture(arg2)
                return 0
            case 0x202
                uint32_t eax_14
                eax_14.b = *(arg1 + 0xec)
                *(arg1 + 0xed) = eax_14.b
                *(arg1 + 0xec) = 0
                ReleaseCapture()
                return 0
            case 0x203
                xmm0_1 = *(arg1 + 0x40) + 0.25f
            label_683212:
                *(arg1 + 0x40) = xmm0_1
                
                if (not(xmm0_1 <= 16f))
                    *(arg1 + 0x40) = 0x41800000
                
                if (not(0.25f f<= *(arg1 + 0x40)))
                    *(arg1 + 0x40) = 0x3e800000
                
                return 0
            case 0x206
                xmm0_1 = *(arg1 + 0x40) - 0.25f
                goto label_683212
            case 0x2a3
                *(arg1 + 0x100) = 0
                return 0

return DefWindowProcA(arg2, arg3, arg4, arg5)
