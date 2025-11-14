// 函数: sub_41c030
// 地址: 0x41c030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0xc) == 0 || *(arg1 + 0xd) != 0)
    if (arg3 == 0xd)
        *(arg1 + 0xc) = 0
else if (arg3 == 0xd)
    int32_t* ecx = *(arg1 + 8)
    *(arg1 + 0xc) = 0
    
    if (ecx != 0)
        (*(*ecx + 4))(arg2, 0xd, arg4)
        *(arg1 + 0xc) = 0
        int32_t eax_2
        eax_2.b = 0
        return eax_2
    
    *(arg1 + 0xc) = 0

int32_t eax
eax.b = 0
return eax
