// 函数: sub_455c70
// 地址: 0x455c70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_3 = *(arg1 + 0x1c)

if (eax_3 s> 0)
    *(arg1 + 0x1c) = eax_3 - 1
    
    if (eax_3 - 1 s<= 0)
        *(arg1 + 0x1c) = 0
        sub_455c10(arg1)
        return 0

return *(arg1 + 0x1c)
