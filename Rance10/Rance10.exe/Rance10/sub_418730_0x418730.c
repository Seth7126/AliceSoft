// 函数: sub_418730
// 地址: 0x418730
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t result_1 = 0xffffffff
int32_t result = (***(arg1 + 0x1c))(&var_8, &result_1, arg2)
int32_t ecx_1 = var_8

if (ecx_1 != 0xffffffff)
    result = result_1
    
    if (result != 0xffffffff && (*(arg1 + 0x40) != ecx_1 || *(arg1 + 0x44) != result))
        if ((*(**(arg1 + 0x28) + 0x10))() != 0)
            (*(**(arg1 + 0x28) + 4))()
            *(arg1 + 0x38) = 1
        
        *(arg1 + 0x3c) = 0
        return sub_4188f0(arg1)

return result
