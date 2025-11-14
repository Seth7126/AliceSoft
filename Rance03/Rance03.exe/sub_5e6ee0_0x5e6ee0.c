// 函数: sub_5e6ee0
// 地址: 0x5e6ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = *(arg1 + 0x114)

if (ecx != 0)
    sub_46d780(ecx, arg2)

if ((**(arg1 + 0x1c8))() != 0 && GetForegroundWindow() == arg2)
    uint32_t eax_5 = arg3 u>> 0x10
    
    if (eax_5 != 0)
        *(arg1 + 0x20c) = 0
    else
        if (*(arg1 + 0x20c) == eax_5.b)
            *(arg1 + 0x20c) = 1
            *(arg1 + 0x210) = sub_5f4b80()
            return 0
        
        if (sub_5f4b80() - *(arg1 + 0x210) u>= *(arg1 + 0x214))
            HICON eax_8 = LoadIconA(*(arg1 + 0x10), 0x66)
            sub_5e1610(arg1 + 0x1d4, arg2, *(arg1 + 0x10), arg1, *(arg1 + 0x228), eax_8)

return 0
