// 函数: sub_582960
// 地址: 0x582960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
void arg_4
sub_42f3d0(&arg1[1], &var_4, &arg_4)
int32_t* eax = var_4

if (eax != arg1[1])
    void* edx_1 = eax[5]
    
    if (edx_1 != 0)
        if (((*(edx_1 + 0x4c) - *(edx_1 + 0x48)) & 0xfffffffc) s<= 0)
            return edx_1
        
        if (arg2 s>= 0 && arg2 s< (*(edx_1 + 0x4c) - *(edx_1 + 0x48)) s>> 2)
            int32_t eax_6 = *(*(edx_1 + 0x48) + (arg2 << 2))
            
            if (eax_6 != 0)
                return eax_6
        
        if (((*(edx_1 + 0x4c) - *(edx_1 + 0x48)) & 0xfffffffc) s>= 4
                && ((*(edx_1 + 0x4c) - *(edx_1 + 0x48)) & 0xfffffffc) s> 0)
            return **(edx_1 + 0x48)

return 0
