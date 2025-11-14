// 函数: sub_6727a0
// 地址: 0x6727a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

if (zx.d(arg3) - 0x9c9e u<= 0x75)
    switch (arg3)
        case 0x9c9e
            sub_672920(arg1)
        case 0x9c9f
            if (*(arg1 + 0x5c) != 0)
                sub_672a40(arg1, arg2)
        case 0x9ca2
            void* eax_10 = *(arg1 + 0x58)
            
            if (eax_10 != 0)
                uint32_t eax_11 = sub_672c90(arg1, *(eax_10 + 0x1b8))
                void* ecx_8 = *(arg1 + 0x58)
                *(ecx_8 + 0x1b8) = eax_11
                sub_684220(ecx_8)
        case 0x9ca3
            if (*(arg1 + 0x5c) != 0)
                sub_672960(arg1)
        case 0x9ca4
            if (*(arg1 + 0x5c) != 0)
                sub_6729b0(arg1)
        case 0x9ca5
            if (*(arg1 + 0x5c) != 0)
                sub_672b20(arg1)
        case 0x9d13
            if (*(arg1 + 0x5c) != 0)
                sub_672bb0(arg1, arg2)

return 0
