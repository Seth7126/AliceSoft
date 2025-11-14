// 函数: sub_401ff0
// 地址: 0x401ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** ebx = arg2
int32_t edi = ebx[4]
int32_t* result = arg1

if (edi u< arg3)
    sub_69a57f("invalid string position")
    noreturn

void* edi_1 = edi - arg3

if (arg4 u< edi_1)
    edi_1 = arg4

if (result == ebx)
    void* eax = edi_1 + arg3
    
    if (result[4] u< eax)
        sub_69a57f("invalid string position")
        noreturn
    
    bool cond:0 = result[5] u< 0x10
    result[4] = eax
    
    if (not(cond:0))
        arg1 = *result
    
    *(arg1 + eax) = 0
    sub_402210(result, 0, arg3)
    return result

if (edi_1 u> 0xfffffffe)
    sub_69a551("string too long")
    noreturn

int32_t eax_2 = result[5]

if (eax_2 u>= edi_1)
    if (edi_1 != 0)
        goto label_402067
    
    result[4] = edi_1
    
    if (eax_2 u< 0x10)
        *result = 0
        return result
    
    **result = 0
    return result

sub_4023a0(arg1, edi_1, result[4])

if (edi_1 != 0)
label_402067:
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    int32_t* result_1
    
    if (result[5] u< 0x10)
        result_1 = result
    else
        result_1 = *result
    
    if (edi_1 != 0)
        sub_69d850(result_1, ebx + arg3, edi_1)
    
    bool cond:1_1 = result[5] u< 0x10
    result[4] = edi_1
    
    if (not(cond:1_1))
        *(*result + edi_1) = 0
        return result
    
    *(result + edi_1) = 0

return result
