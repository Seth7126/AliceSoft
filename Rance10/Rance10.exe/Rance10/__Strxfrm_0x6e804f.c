// 函数: __Strxfrm
// 地址: 0x6e804f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
void* ebx = 0xffffffff
void* esi_1 = arg4 - arg3
int32_t edi_1 = arg2 - arg1
uint32_t var_c_1
int32_t var_8_1
int32_t eax_3
uint32_t ecx_3

if (arg5 != 0)
    eax_3 = arg5[1]
    ecx_3 = *arg5
    var_8_1 = eax_3
    var_c_1 = ecx_3
else
    void* eax
    void* ecx_2
    eax, ecx_2 = ____lc_locale_name_func(arg5)
    var_8_1 = *(eax + 4)
    uint32_t eax_2 = ____lc_collate_cp_func(ecx_2)
    ecx_3 = eax_2
    var_c_1 = eax_2
    eax_3 = var_8_1

if (eax_3 == 0 && ecx_3 == 0)
    if (esi_1 u<= edi_1)
        sub_700660(arg1, arg3, esi_1)
    
    return esi_1

void* eax_4 = ___crtLCMapStringA(eax_3, 0x400, arg3, esi_1, nullptr, 0, ecx_3, 1)

if (eax_4 != 0)
    ebx = eax_4
    
    if (eax_4 s<= edi_1)
        ___crtLCMapStringA(var_8_1, 0x400, arg3, esi_1, arg1, edi_1, var_c_1, 1)

return ebx
