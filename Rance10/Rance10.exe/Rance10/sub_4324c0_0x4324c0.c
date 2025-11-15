// 函数: sub_4324c0
// 地址: 0x4324c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t** var_4_1 = arg3
int32_t** result = arg3

if (result == arg2)
    return result

int32_t ebx = arg4[4]

do
    int32_t* edx
    
    if (arg4[5] u< 0x10)
        edx = arg4
    else
        edx = *arg4
    
    int32_t* result_1
    
    if (result[5] u< 0x10)
        result_1 = result
    else
        result_1 = *result
    
    int32_t edi_1 = result[4]
    int32_t eax_1 = ebx
    
    if (edi_1 u< ebx)
        eax_1 = edi_1
    
    if (sub_406ac0(eax_1, edx, result_1, eax_1) == 0 && edi_1 u>= ebx && edi_1 u<= ebx)
        break
    
    result = &result[6]
while (result != arg2)

return result
