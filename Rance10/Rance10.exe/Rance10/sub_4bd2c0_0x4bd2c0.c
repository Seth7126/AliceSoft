// 函数: sub_4bd2c0
// 地址: 0x4bd2c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int32_t eax_2 = (arg4 - arg3) s>> 2

if (eax_2 s<= 0x28)
    int32_t __saved_ebx = arg4
    int32_t __saved_ebp = arg4
    return sub_4bd430(arg3, arg2)

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(eax_2 + 1)
int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
int32_t var_18 = arg4
int32_t edi = eax_6 << 2
int32_t* ebp = &arg3[eax_6]
void* var_1c = &arg3[eax_6 * 2]
sub_4bd430(arg3, ebp)
void* var_1c_1 = &arg2[eax_6]
sub_4bd430(arg2 - edi, arg2)
int32_t* esi_2 = arg4 - edi
int32_t var_1c_2 = arg4
sub_4bd430(arg4 - (eax_6 << 3), esi_2)
int32_t* var_1c_3 = esi_2
return sub_4bd430(ebp, arg2)
