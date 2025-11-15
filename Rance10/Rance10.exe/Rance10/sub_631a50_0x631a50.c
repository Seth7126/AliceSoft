// 函数: sub_631a50
// 地址: 0x631a50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ebx = arg2
int32_t eax = ebx[4]
int32_t* result = arg1

if (eax u< arg3)
    sub_6d0947("invalid string position")
    noreturn

void* eax_1 = eax - arg3
void* edi = arg4

if (edi u> eax_1)
    edi = eax_1

if (result == ebx)
    void* eax_2 = edi + arg3
    
    if (result[4] u< eax_2)
        sub_6d0947("invalid string position")
        noreturn
    
    result[4] = eax_2
    
    if (result[5] u>= 8)
        arg1 = *result
    
    *(arg1 + (eax_2 << 1)) = 0
    sub_631fb0(result, 0, arg3)
    return result

if (edi u> 0x7ffffffe)
    sub_6d0927("string too long")
    noreturn

if (result[5] u>= edi)
    if (edi != 0)
        goto label_631ac9
    
    bool cond:0 = result[5] u< 8
    result[4] = edi
    
    if (cond:0)
        *result = 0
        return result
    
    **result = 0
    return result

sub_631de0(arg1, edi, result[4])

if (edi != 0)
label_631ac9:
    
    if (ebx[5] u>= 8)
        ebx = *ebx
    
    int32_t* result_1
    
    if (result[5] u< 8)
        result_1 = result
    else
        result_1 = *result
    
    if (edi != 0)
        sub_700660(result_1, ebx + (arg3 << 1), edi * 2)
    
    bool cond:1_1 = result[5] u< 8
    result[4] = edi
    
    if (not(cond:1_1))
        *(*result + (edi << 1)) = 0
        return result
    
    *(result + (edi << 1)) = 0

return result
