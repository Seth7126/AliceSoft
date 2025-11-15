// 函数: sub_4187b0
// 地址: 0x4187b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result_1 = arg1
int32_t arg_4
void* result = (***(arg1 + 0x1c))(&arg_4, &result_1, arg_4)
int32_t ecx_1 = arg_4

if (ecx_1 != 0xffffffff)
    result = result_1
    
    if (result != 0xffffffff && (*(arg1 + 0x40) != ecx_1 || *(arg1 + 0x44) != result))
        if ((*(**(arg1 + 0x28) + 0x10))() != 0)
            (*(**(arg1 + 0x28) + 4))()
            *(arg1 + 0x38) = 1
        
        *(arg1 + 0x3c) = 0
        return sub_4188f0(arg1)

return result
