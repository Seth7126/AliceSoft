// 函数: sub_40e5a0
// 地址: 0x40e5a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

switch (*(arg1 + 4) - 0xa)
    case 0
        *(arg1 + 4) = 2
        *(arg1 + 0x44) = (*(*arg3 + 0x30))()
        *(arg1 + 0x70) = 1
        int32_t eax_3
        eax_3.b = *(arg1 + 0x70)
        return eax_3
    case 1
        *(arg1 + 4) = 3
        (*(*arg3 + 0x34))()
        *(arg1 + 0x70) = 1
        int32_t eax_8
        eax_8.b = *(arg1 + 0x70)
        *(arg1 + 0x48) = fconvert.s(arg2)
        return eax_8
    case 2
        *(arg1 + 4) = 4
        sub_402670(arg1 + 0x4c, (*(*arg3 + 0x38))())
        *(arg1 + 0x70) = 1
        int32_t* eax_11
        eax_11.b = *(arg1 + 0x70)
        return eax_11
    case 0x25
        *(arg1 + 4) = 0x30
        *(arg1 + 0x44) = (*(*arg3 + 0x30))()
        *(arg1 + 0x70) = 1
        int32_t eax_5
        eax_5.b = *(arg1 + 0x70)
        return eax_5

*(arg1 + 0x70) = 0
uint32_t eax_1
eax_1.b = *(arg1 + 0x70)
return eax_1
