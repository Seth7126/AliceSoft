// 函数: sub_68b7a0
// 地址: 0x68b7a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
*(arg1 + 0x225) = *(arg1 + 0x224)
*(arg1 + 0x224) = 1
int32_t eax_2 = sub_686ea0(arg1 + 0x298, GetScrollPos(*(arg1 + 0x26c), *(arg1 + 0x278)), 
    *(arg1 + 0x228), *(arg1 + 0x22c))

if (eax_2 != 0xffffffff)
    int32_t ecx_1 = *(arg1 + 0x3a4)
    int32_t eax_3 = ecx_1 + 7
    
    if (ecx_1 == eax_2)
        *(arg1 + 0x3a4) = eax_3
    else if (eax_3 != eax_2)
        *(arg1 + 0x3a4) = eax_2
    else
        *(arg1 + 0x3a4) = ecx_1 - 7
    
    sub_68c510(arg1 + 0x1f0, *(arg1 + 0x3a4))
    sub_68c510(arg1 + 0x1fc, *(arg1 + 0x3a4))

*(arg1 + 0x384) = *(arg1 + 0x22c) - *(arg1 + 0x2c)
return 0
