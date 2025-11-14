// 函数: sub_4429b0
// 地址: 0x4429b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x98) != 0)
    void** ecx = *(arg1 + 0x94)
    void** eax_2 = ecx[1]
    
    while (*(eax_2 + 0xd) == 0)
        if (eax_2[4] u>= arg2)
            ecx = eax_2
            eax_2 = *eax_2
        else
            eax_2 = eax_2[2]
    
    if (ecx != *(arg1 + 0x94))
        return ecx[5]

return 0
