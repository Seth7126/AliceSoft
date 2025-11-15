// 函数: __strnicoll_l
// 地址: 0x717955
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_20 = edi
void* var_14
_LocaleUpdate::_LocaleUpdate(&var_14, arg4)
uint32_t result

if (arg3 == 0)
    result = 0
else if (arg1 == 0 || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x7fffffff
else
    result = 0x7fffffff
    
    if (arg3 u<= 0x7fffffff)
        void* var_10
        void* edi_1 = var_10
        int32_t ebx_1 = *(edi_1 + 0xa4)
        
        if (ebx_1 != 0)
            enum COMPARESTRING_RESULT eax_4 = ___acrt_CompareStringA(&var_10, ebx_1, 0x1001, arg1, 
                arg3, arg2, arg3, *(edi_1 + 0x10))
            
            if (eax_4 != 0)
                result = eax_4 - 2
            else
                *__errno() = 0x16
        else
            result = __strnicmp_l(arg1, arg2, arg3, &var_10)
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()

char var_8

if (var_8 != 0)
    void* ecx_2 = var_14
    *(ecx_2 + 0x350) &= 0xfffffffd

return result
