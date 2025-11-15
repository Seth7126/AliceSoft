// 函数: _wcscat_s
// 地址: 0x71bdb5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_10 = edi

if (arg1 == 0)
    goto label_71bdd7

int32_t i_1 = arg2

if (i_1 == 0)
    goto label_71bdd7

int16_t* edx_1
int32_t result

if (arg3 != 0)
    edx_1 = arg1
    result = 0
    
    while (*edx_1 != 0)
        edx_1 = &edx_1[1]
        int32_t i_2 = i_1
        i_1 -= 1
        
        if (i_2 == 1)
            break

int32_t result_1
int32_t* eax_1

if (arg3 == 0 || i_1 == 0)
    *arg1 = 0
label_71bdd7:
    eax_1 = __errno()
    result_1 = 0x16
label_71bdde:
    result = result_1
    *eax_1 = result
    __invalid_parameter_noinfo()
else
    int16_t* ebx_2 = arg3 - edx_1
    int32_t i
    
    do
        int16_t eax_3 = *(ebx_2 + edx_1)
        *edx_1 = eax_3
        edx_1 = &edx_1[1]
        
        if (eax_3 == 0)
            break
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (i_1 == 0)
        *arg1 = 0
        eax_1 = __errno()
        result_1 = 0x22
        goto label_71bdde
return result
