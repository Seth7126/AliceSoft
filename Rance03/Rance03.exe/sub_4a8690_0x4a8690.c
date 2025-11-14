// 函数: sub_4a8690
// 地址: 0x4a8690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg1

if (*(arg1 + 0x48) != *(arg1 + 0x4c))
    int32_t arg_4
    int32_t eax_2 = arg_4
    
    if (eax_2 s< 0)
        eax_2 = sub_4a8430(arg1)
        arg_4 = eax_2
    
    int32_t* ecx_1 = &var_4
    int32_t edx_4 = ((*(arg1 + 0x4c) - *(arg1 + 0x48)) s>> 2) - 1
    var_4 = edx_4
    
    if (edx_4 s>= eax_2)
        ecx_1 = &arg_4
    
    int32_t* eax_4 = *(arg1 + 0x48) + (*ecx_1 << 2)
    
    if (eax_4 != *(arg1 + 0x4c))
        void* result = *(*eax_4 + 4)
        
        if (result != 0)
            return *(result + 0x2c)
        
        return result

return 0xffffffff
