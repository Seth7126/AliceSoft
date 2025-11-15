// 函数: sub_51fe40
// 地址: 0x51fe40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_24
int32_t result = __security_cookie ^ &var_24
int32_t result_2 = result

if (*(arg1 + 0xb0) != 0xffffffff)
    int32_t eax_2 = sub_51fff0(arg1 + 0xc0)
    int32_t edx_1 = *(arg1 + 0xb0)
    int32_t esi_1 = edx_1
    
    if (edx_1 s< eax_2)
        edx_1 = eax_2
    
    int32_t var_30_2 = edx_1
    
    if (eax_2 s< esi_1)
        esi_1 = eax_2
    
    int32_t var_34_1 = esi_1
    void* var_20
    sub_51f970(arg1, &var_20)
    sub_6ccc30(data_7fcb50, &var_20)
    int32_t result_1
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_20, result + 1, 1)

@__security_check_cookie@4(result_2 ^ &var_24)
return result
