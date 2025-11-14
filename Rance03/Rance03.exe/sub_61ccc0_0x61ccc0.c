// 函数: sub_61ccc0
// 地址: 0x61ccc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = data_75d52c

if (*(ecx + 0x90) != 0)
    bool cond:0_1 = *(ecx + 0x94) u< 0x10
    void* eax_1 = ecx + 0x80
    *(eax_1 + 0x10) = 0
    
    if (not(cond:0_1))
        eax_1 = *eax_1
    
    *eax_1 = 0

return *(ecx + 0x78) - *(ecx + 0x74)
