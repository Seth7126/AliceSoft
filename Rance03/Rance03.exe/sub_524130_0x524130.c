// 函数: sub_524130
// 地址: 0x524130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x80)

if (ecx != 0)
    if (*(arg1 + 4) != 0)
        char eax_4
        int32_t ecx_2
        eax_4, ecx_2 = (*(*ecx + 0x28))()
        
        if (eax_4 == 0)
            int32_t var_c_5 = ecx_2
            (*(*arg2 + 0x64))(0, 0x3f800000)
            
            if (sub_522ff0(arg1 + 8, arg2) != 0)
                return 1
        else if ((*(**(arg1 + 0x80) + 0x1c))(arg2) != 0 && sub_522ff0(arg1 + 0x44, arg2) != 0
                && (*(**(arg1 + 0x80) + 0x20))() != 0 && (*(**(arg1 + 0x80) + 0x14))(arg2) != 0
                && sub_522ff0(arg1 + 8, arg2) != 0 && (*(**(arg1 + 0x80) + 0x18))() != 0)
            char eax_7 = (*(**(arg1 + 0x80) + 0x24))(arg2)
            
            if (eax_7 == 0)
                return eax_7
            
            return 1
        
        return 0
    
    int32_t* __saved_esi_1 = arg2
    (*(*arg2 + 0x64))(0, 0x3f800000)

int32_t eax
eax.b = 1
return eax
