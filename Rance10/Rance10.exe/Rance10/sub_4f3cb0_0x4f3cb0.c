// 函数: sub_4f3cb0
// 地址: 0x4f3cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int32_t eax_2 = (arg4 - arg3) s>> 2

if (eax_2 s<= 0x28)
    int32_t* __saved_ebx = arg4
    return sub_4f3e10(eax_2, arg2, arg3, arg4)

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(eax_2 + 1)
int32_t eax_6 = (eax_4 + (edx & 7)) s>> 3
int32_t* var_18 = arg4
int32_t edi = eax_6 << 2
int32_t* eax_7 = &arg3[eax_6 * 2]
void* ebp = &arg3[eax_6]
sub_4f3e10(eax_7, ebp, arg3, eax_7)
int32_t* eax_8 = &arg2[eax_6]
sub_4f3e10(eax_8, arg2, arg2 - edi, eax_8)
int32_t* esi_2 = arg4 - edi
void* eax_10 = arg4 - (eax_6 << 3)
return sub_4f3e10(sub_4f3e10(eax_10, esi_2, eax_10, arg4), arg2, ebp, esi_2)
