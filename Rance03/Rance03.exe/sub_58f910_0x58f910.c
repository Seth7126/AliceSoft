// 函数: sub_58f910
// 地址: 0x58f910
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(*arg2 + 0x24))() != 0)
    int32_t eax_4 = (*(*arg2 + 0x10))()
    int32_t eax_5 = (*(*arg3 + 0x10))()
    int32_t eax_7
    int32_t eax_8
    
    if (eax_4 == eax_5)
        eax_7 = (*(*arg2 + 0x14))()
        eax_8 = (*(*arg3 + 0x14))()
    
    if (eax_4 != eax_5 || eax_7 != eax_8)
        int32_t eax_26
        int32_t ecx_14
        int32_t edx_3
        eax_26, edx_3, ecx_14 =
            (*(*arg2 + 0x10))((*(*arg2 + 0x14))((*(*arg3 + 0x10))((*(*arg3 + 0x14))())))
        sub_59f4e0(eax_26, edx_3, ecx_14, 0x6e5be4, eax_26)
    else
        int32_t esi_3 = **(arg1 + 0x20)
        int32_t eax_13 = (*(*arg2 + 0x10))((*(*arg2 + 0x14))(0x20))
        *(arg1 + 0x20)
        int32_t* result = (*(esi_3 + 8))(eax_13)
        
        if (result != 0)
            if (sub_58fb30(arg1, result, arg2) != 0 && sub_58fd20(result, arg3) != 0)
                return result
            
            (*(*result + 4))()

return 0
