// 函数: _call_wsetlocale
// 地址: 0x70da36
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
int32_t result

if (arg5 != 0)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t result_1 = 0
    int32_t eax = _mbstowcs_s(&var_8, nullptr, 0, arg5, 0x7fffffff)
    
    if (eax != 0 && (eax == 0x16 || eax == 0x22))
    label_70dacc:
        int32_t var_24_2
        __builtin_memset(&var_24_2, 0, 0x14)
        __invoke_watson()
        noreturn
    
    int16_t* eax_1 = __calloc_base(var_8, 2)
    
    if (eax_1 == 0)
        __free_base(eax_1)
        result = result_1
    else
        int32_t eax_2 = _mbstowcs_s(nullptr, eax_1, var_8, arg5, 0xffffffff)
        
        if (eax_2 == 0)
            int16_t* var_14_1 = eax_1
            int32_t var_18_4 = arg4
            result_1 = __wsetlocale()
            __free_base(eax_1)
            result = result_1
        else
            if (eax_2 == 0x16 || eax_2 == 0x22)
                goto label_70dacc
            
            __free_base(eax_1)
            result = result_1
else
    int32_t var_10 = arg4
    result = __wsetlocale()

return result
