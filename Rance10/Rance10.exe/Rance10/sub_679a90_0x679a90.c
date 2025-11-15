// 函数: sub_679a90
// 地址: 0x679a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = 0
int32_t var_14 = 0x54
arg1[1] = 0
void* (** eax)(int32_t* arg1, int32_t arg2, void* arg3) = sub_705e22()

if (eax == 0)
    *(*arg1 + 0x14) = 0x38
    *(*arg1 + 0x18) = eax
    (**arg1)(arg1)

*eax = sub_678fc0
eax[1] = sub_679100
eax[2] = sub_6791d0
eax[3] = sub_679280
eax[4] = sub_679330
eax[5] = sub_6793a0
eax[6] = sub_679410
eax[7] = sub_6796b0
eax[8] = sub_679800
eax[9] = sub_679950
eax[0xa] = sub_679a50
eax[0xc] = 0x3b9aca00
eax[0xb] = var_4
__builtin_memset(&eax[0xd], 0, 0x18)
eax[0x13] = 0x54
char* var_14_2 = "JPEGMEM"
arg1[1] = eax
char* result = sub_70b81f()

if (result != 0)
    char var_5 = 0x78
    char* var_14_3 = &var_5
    int32_t* var_18_1 = &var_4
    result = sub_678f90(result, "%ld%c")
    
    if (result s> 0)
        result.b = var_5
        int32_t eax_4
        
        if (result.b != 0x6d)
            eax_4 = var_4
        
        if (result.b == 0x6d || result.b == 0x4d)
            eax_4 = var_4 * 0x3e8
        
        result = eax_4 * 0x3e8
        eax[0xb] = result

return result
