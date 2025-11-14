// 函数: __strnicoll_l
// 地址: 0x6ad8f2
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_14
sub_69beb0(&var_14, arg4)
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
        void* edi_1 = var_14
        int32_t ebx_1 = *(edi_1 + 0xa4)
        
        if (ebx_1 != 0)
            enum COMPARESTRING_RESULT eax_4 =
                sub_6adc5b(&var_14, ebx_1, 0x1001, arg1, arg3, arg2, arg3, *(edi_1 + 8))
            
            if (eax_4 != 0)
                result = eax_4 - 2
            else
                *__errno() = 0x16
        else
            result = __strnicmp_l(arg1, arg2, arg3, &var_14)
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
