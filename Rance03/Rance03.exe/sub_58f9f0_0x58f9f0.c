// 函数: sub_58f9f0
// 地址: 0x58f9f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(*arg3 + 0x24))() == 0)
    return 0

if ((*(*arg3 + 0x10))() == (*(*arg4 + 0x10))() && (*(*arg3 + 0x14))() == (*(*arg4 + 0x14))())
    int32_t esi_2 = **(arg1 + 0x20)
    int32_t eax_14 = (*(*arg3 + 0x10))((*(*arg3 + 0x14))(0x20))
    *(arg1 + 0x20)
    int32_t* result = (*(esi_2 + 8))(eax_14)
    
    if (result != 0)
        if (sub_58fb30(arg1, result, arg3) != 0 && sub_58ff60(result, arg4, arg2) != 0)
            return result
        
        (*(*result + 4))()

return 0
