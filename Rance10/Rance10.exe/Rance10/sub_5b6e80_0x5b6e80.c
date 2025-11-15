// 函数: sub_5b6e80
// 地址: 0x5b6e80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg5 == 0 || arg6 == 0)
    return arg6 * 0xc + arg3

int32_t var_38
int32_t var_14

if (arg5 s<= arg6 && arg5 s<= sub_5b65d0(arg7))
    int32_t* ecx_1 = *(arg7 + 0x10)
    ecx_1[1] = *ecx_1
    int32_t var_34
    sub_5b6c50(sub_5770d0(&var_38, arg7), arg3, &var_14, arg2, var_38, var_34)
    int32_t eax_3 = var_14
    
    if (eax_3 != 0)
        _free(eax_3)
    
    sub_6feca0(arg3, arg2, arg4 - arg2)
    int32_t* eax_6 = *(arg7 + 0x10)
    char* ecx_4 = *eax_6
    void* eax_8 = eax_6[1] - ecx_4
    return sub_6feca0(arg4 - eax_8, ecx_4, eax_8)

int32_t eax_10 = sub_5b65d0(arg7)
int64_t* edx_1 = arg2

if (arg6 s> eax_10)
    return sub_5b7230(eax_10, edx_1, arg3, arg4)

int32_t* ecx_6 = *(arg7 + 0x10)
ecx_6[1] = *ecx_6
var_38 = 0
int32_t var_30_2 = 0
int32_t var_2c_2 = 0
int32_t eax_12 = *(arg7 + 0x10)
int32_t var_28_4 = eax_12
sub_5b6c50(eax_12, edx_1, &var_14, arg4, var_38, 0)
int32_t eax_13 = var_14

if (eax_13 != 0)
    _free(eax_13)

void* ebx_1 = arg2 - arg3
sub_6feca0(arg4 - ebx_1, arg3, ebx_1)
int32_t* eax_14 = *(arg7 + 0x10)
char* ecx_8 = *eax_14
void* esi_6 = eax_14[1] - ecx_8
sub_6feca0(arg3, ecx_8, esi_6)
return esi_6 + arg3
