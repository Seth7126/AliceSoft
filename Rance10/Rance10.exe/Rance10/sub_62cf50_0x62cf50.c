// 函数: sub_62cf50
// 地址: 0x62cf50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_18
int32_t eax_1 = __security_cookie ^ &var_18
void* ebx = arg5
uint32_t edx = 0
int16_t* result = arg2
int32_t ebp = 0
uint32_t edi_3 = (arg3 - result + 1) u>> 1

if (result u> arg3)
    edi_3 = 0

if (edi_3 != 0)
    int32_t ecx = arg1 + 0x18
    var_18 = ecx
    
    do
        uint32_t eax_2 = zx.d(*result)
        int32_t var_2c_1 = ecx
        int64_t var_14 = 0
        int64_t* var_30_1 = &var_14
        char var_c
        int32_t eax_4 = __Wcrtomb(&var_c, edx, &var_14, &var_c, eax_2)
        ebx += 1
        edx = zx.d(var_c)
        
        if (eax_4 != 1)
            edx = zx.d(arg4)
        
        ecx = var_18
        ebp += 1
        *(ebx - 1) = edx.b
        result = &result[1]
    while (ebp != edi_3)

@__security_check_cookie@4(eax_1 ^ &var_18)
return result
