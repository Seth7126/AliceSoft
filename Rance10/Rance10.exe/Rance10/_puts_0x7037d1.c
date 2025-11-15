// 函数: _puts
// 地址: 0x7037d1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff

void* eax_2 = ___acrt_iob_func(1)
void* var_8 = eax_2

if (((*(eax_2 + 0xc) u>> 0xc).b & 1) == 0)
    int32_t eax_3 = __fileno(eax_2)
    void* esi_1 = &data_7e1668
    
    if (eax_3 == 0xffffffff || eax_3 == 0xfffffffe)
        eax_2 = &data_7e1668
    else
        eax_2 = (eax_3 & 0x3f) * 0x30 + (&data_7fc718)[eax_3 s>> 6]
    
    if (*(eax_2 + 0x29) == 0 && eax_3 != 0xffffffff && eax_3 != 0xfffffffe)
        esi_1 = (eax_3 & 0x3f) * 0x30 + (&data_7fc718)[eax_3 s>> 6]
    
    if (*(eax_2 + 0x29) != 0 || (*(esi_1 + 0x2d) & 1) != 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff

char* ecx_6 = arg1

do
    eax_2.b = *ecx_6
    ecx_6 = &ecx_6[1]
while (eax_2.b != 0)

void** var_18 = &var_8
char** var_14_1 = &arg1
void* var_c
void** var_10_1 = &var_c
void* var_24_1 = var_8
var_c = ecx_6 - &ecx_6[1]
return __acrt_lowio_lock_fh_and_call<class <lambda_61d677f73751bd412abcbcd096bd0cc8> >(var_24_1, 
    &var_18)
