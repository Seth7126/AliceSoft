// 函数: sub_70b777
// 地址: 0x70b777
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

*arg1 = 0
int32_t edi
int32_t var_14_1 = edi

if (arg2 != 0)
    if (arg3 == 0)
        goto label_70b7f4
    
    goto label_70b7ad

int32_t result

if (arg3 == 0)
label_70b7ad:
    
    if (arg2 != 0)
        *arg2 = 0
    
    void* eax_1 = common_getenv_nolock<char>(arg4)
    
    if (eax_1 == 0)
        result = 0
    else
        void* ecx_2 = eax_1
        void* var_8_1 = ecx_2 + 1
        void* eax_2
        
        do
            eax_2.b = *ecx_2
            ecx_2 += 1
        while (eax_2.b != 0)
        *arg1 = ecx_2 - var_8_1 + 1
        
        if (arg3 == 0)
            result = 0
        else if (ecx_2 - var_8_1 + 1 u<= arg3)
            if (_strcpy_s(arg2, arg3, eax_1) != 0)
                int32_t var_28
                __builtin_memset(&var_28, 0, 0x14)
                __invoke_watson()
                noreturn
            
            result = 0
        else
            result = 0x22
else
label_70b7f4:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16

return result
