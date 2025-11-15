// 函数: __Wcsftime_l
// 地址: 0x710401
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_2c = edi
int16_t* edi_1 = arg1

if (edi_1 == 0 || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0

int16_t* esi_1 = arg3
*edi_1 = 0

if (esi_1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0

void* var_28
_LocaleUpdate::_LocaleUpdate(&var_28, arg6)
void* edx_1 = arg5
void* var_24

if (edx_1 == 0)
    edx_1 = *(var_24 + 0x9c)
    arg5 = edx_1

int32_t eax_5 = arg2
int16_t* ecx_2 = edi_1
int32_t result = 0
int16_t* var_10 = ecx_2
int32_t var_c = eax_5

if (eax_5 u<= 0)
label_71053d:
    ecx_2.b = 0
else
    while (true)
        int16_t edi_2 = *esi_1
        edi_1 = arg1
        
        if (zx.d(edi_2) != 0)
            edi_1 = arg1
            
            if (edi_2 == 0x25)
                if (arg4 == 0)
                    goto label_71055e
                
                void* esi_2 = &esi_1[1]
                char var_18_1 = 0
                
                if (*esi_2 == 0x23)
                    var_18_1 = 1
                    esi_2 += 2
                
                uint32_t eax_8 = zx.d(*esi_2)
                
                if (eax_8 == 0x45 || eax_8 == 0x4f)
                    esi_2 += 2
                
                char eax_11
                eax_11, ecx_2 = expand_time(&var_24, edx_1, ecx_2, &var_24, *esi_2, arg4, &var_10, 
                    &var_c, edx_1, var_18_1)
                eax_5 = var_c
                
                if (eax_11 == 0)
                    if (eax_5 == 0)
                        goto label_71053d
                    
                    ecx_2.b = 1
                    break
                
                ecx_2 = var_10
                esi_1 = esi_2 + 2
            else
                esi_1 = &esi_1[1]
                *ecx_2 = edi_2
                ecx_2 = &var_10[1]
                eax_5 = var_c - 1
                var_10 = ecx_2
                var_c = eax_5
            
            edx_1 = arg5
            
            if (eax_5 != 0)
                continue
        
        if (eax_5 == 0)
            goto label_71053d
        
        *ecx_2 = 0
        result = arg2 - var_c
        goto label_710569

*edi_1 = 0

if (ecx_2.b != 0 || eax_5 != 0)
label_71055e:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else
    *__errno() = 0x22

label_710569:
char var_1c

if (var_1c != 0)
    void* ecx_4 = var_28
    *(ecx_4 + 0x350) &= 0xfffffffd

return result
