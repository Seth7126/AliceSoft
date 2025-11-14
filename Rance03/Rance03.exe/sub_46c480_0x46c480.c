// 函数: sub_46c480
// 地址: 0x46c480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax = arg1[1]
*arg1 = &graph::CArray2D<uint8_t>::`vftable'

if (eax != 0)
    int32_t eax_1 = *eax
    
    if (eax_1 != 0)
        j__free(eax_1)
    
    j__free(arg1[1])

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
