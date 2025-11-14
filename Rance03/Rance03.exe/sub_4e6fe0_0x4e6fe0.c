// 函数: sub_4e6fe0
// 地址: 0x4e6fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x61) != 0 && arg2 != 0)
    void* eax_3 = *(*(arg2 + 4) + 0x40)
    void* ecx = *(eax_3 + 0x64)
    int32_t eax_4
    
    if (ecx != 0)
        eax_4 = sub_4a44a0(ecx)
    else
        eax_4 = *(eax_3 + 0x2c)
    
    sub_485ad0(arg1 + 0x64, eax_4, 0)

*(arg1 + 0x61) = 0
return sub_4e6e80(arg1)
