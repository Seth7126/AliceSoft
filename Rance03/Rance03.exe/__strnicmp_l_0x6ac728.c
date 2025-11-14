// 函数: __strnicmp_l
// 地址: 0x6ac728
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == 0)
    return 0

void* var_14
sub_69beb0(&var_14, arg4)
uint32_t result = 0x7fffffff
char* ebx_1

if (arg1 != 0)
    ebx_1 = arg2

if (arg1 == 0 || ebx_1 == 0 || arg3 u> 0x7fffffff)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else if (*(var_14 + 0xa8) != 0)
    void* edi_2 = arg1 - ebx_1
    uint32_t eax_4
    uint32_t eax_6
    
    do
        eax_4 = __tolower_l(zx.d(*(edi_2 + ebx_1)), &var_14)
        eax_6 = __tolower_l(zx.d(*ebx_1), &var_14)
        ebx_1 = &ebx_1[1]
        int32_t temp0_1 = arg3
        arg3 -= 1
        
        if (temp0_1 == 1)
            break
        
        if (eax_4 == 0)
            break
    while (eax_4 == eax_6)
    
    result = eax_4 - eax_6
else
    result = ___ascii_strnicmp(arg1, ebx_1, arg3)

char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
