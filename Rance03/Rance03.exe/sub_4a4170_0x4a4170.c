// 函数: sub_4a4170
// 地址: 0x4a4170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 == 0)
    return arg2

int32_t var_8 = arg2
void* eax = sub_4a56f0(*(arg1 + 0x60))

if (eax != 0)
    int32_t* ecx_1 = *(eax + 0x5c)
    int32_t eax_2
    
    if (ecx_1 != 0)
        eax_2 = (*(*ecx_1 + 8))(1)
    
    if (ecx_1 == 0 || eax_2 != 2)
        int32_t* ecx_3 = *(eax + 0x5c)
        
        if (ecx_3 != 0 && (*(*ecx_3 + 8))(1) == 3)
            int32_t* ecx_4 = *(eax + 0x5c)
            
            if (ecx_4 != 0 && (*(*ecx_4 + 8))(1) == 3)
                return *(*(eax + 0x5c) + 0x100)
    else
        int32_t* ecx_2 = *(eax + 0x5c)
        
        if (ecx_2 != 0 && (*(*ecx_2 + 8))(1) == 2)
            return *(*(eax + 0x5c) + 0x100)

return 0
