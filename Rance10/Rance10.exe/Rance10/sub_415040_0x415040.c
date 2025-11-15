// 函数: sub_415040
// 地址: 0x415040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

switch (*(arg1 + 4) - 0xa)
    case 0
        *(arg1 + 4) = 2
        *(arg1 + 0x4c) = (*(*arg3 + 0x24))()
        *(arg1 + 0x78) = 1
        int32_t eax_3
        eax_3.b = *(arg1 + 0x78)
        return eax_3
    case 1
        *(arg1 + 4) = 3
        (*(*arg3 + 0x28))()
        *(arg1 + 0x78) = 1
        int32_t eax_8
        eax_8.b = *(arg1 + 0x78)
        *(arg1 + 0x50) = fconvert.s(arg2)
        return eax_8
    case 2
        *(arg1 + 4) = 4
        sub_403450((*(*arg3 + 0x2c))())
        *(arg1 + 0x78) = 1
        int32_t* eax_11
        eax_11.b = *(arg1 + 0x78)
        return eax_11
    case 0x25
        *(arg1 + 4) = 0x30
        *(arg1 + 0x4c) = (*(*arg3 + 0x24))()
        *(arg1 + 0x78) = 1
        int32_t eax_5
        eax_5.b = *(arg1 + 0x78)
        return eax_5
    case 0x52
        *(arg1 + 4) = 0x5b
        *(arg1 + 0x4c) = (*(*arg3 + 0x24))()
        *(arg1 + 0x78) = 1
        int32_t eax_13
        eax_13.b = *(arg1 + 0x78)
        return eax_13

*(arg1 + 0x78) = 0
uint32_t eax_1
eax_1.b = *(arg1 + 0x78)
return eax_1
