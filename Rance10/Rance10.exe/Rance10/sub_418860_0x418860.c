// 函数: sub_418860
// 地址: 0x418860
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result_1 = arg1
void* result = (*(**(arg1 + 0x30) + 0x28))()
int32_t ecx_1 = *(arg1 + 0x48)

if (result s>= ecx_1)
    if (result != ecx_1)
        return result
    
    int32_t arg_4
    result = (***(arg1 + 0x1c))(&arg_4, &result_1, arg_4)
    
    if (arg_4 == 0xffffffff)
        return result
    
    result = result_1
    
    if (result == 0xffffffff || *(arg1 + 0x44) == result)
        return result
    
    sub_418a40(arg1 + 0x20)
else if ((*(**(arg1 + 0x28) + 0x10))() != 0)
    (*(**(arg1 + 0x28) + 4))()
    *(arg1 + 0x38) = 1
    *(arg1 + 0x3c) = 0
    return sub_4188f0(arg1)

*(arg1 + 0x3c) = 0
return sub_4188f0(arg1)
