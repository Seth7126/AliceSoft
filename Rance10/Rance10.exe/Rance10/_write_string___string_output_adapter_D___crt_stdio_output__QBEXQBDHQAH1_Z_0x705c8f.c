// 函数: ?write_string@?$string_output_adapter@D@__crt_stdio_output@@QBEXQBDHQAH1@Z
// 地址: 0x705c8f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t edi
int32_t var_14 = edi
int32_t ecx = *arg5
*arg5 = 0
int32_t* eax_1 = *arg1
int32_t esi = eax_1[1]
int32_t* result

if (eax_1[2] != esi)
    int32_t* esi_1 = esi - eax_1[2]
    
    if (esi_1 u>= arg3)
        esi_1 = arg3
    
    sub_700660(*eax_1, arg2, esi_1)
    void** ecx_2 = arg1
    void** eax_2 = *ecx_2
    *eax_2 += esi_1
    void* eax_3 = *ecx_2
    *(eax_3 + 8) += esi_1
    result = arg4
    
    if (*(*ecx_2 + 0xc) != 0)
        *result += arg3
    else if (esi_1 == arg3)
        *result += esi_1
    else
        *result = 0xffffffff
else if (eax_1[3].b == 0)
    result = arg4
    *result = 0xffffffff
else
    result = arg3
    *arg4 += result

if (*arg5 == 0 && ecx != 0)
    *arg5 = ecx

return result
