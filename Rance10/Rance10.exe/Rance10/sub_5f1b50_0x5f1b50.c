// 函数: sub_5f1b50
// 地址: 0x5f1b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int32_t eax_3 = (arg4 - arg3) s/ 0x1c

if (eax_3 s<= 0x28)
    int32_t* __saved_edi = arg3
    return sub_5f1df0(eax_3, arg2, arg3, arg4)

int32_t eax_5
int32_t edx_3
edx_3:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_3 & 7)) s>> 3
int32_t* var_18 = arg3
int32_t esi_4 = eax_7 * 0x1c
void* eax_8 = &arg3[eax_7 * 0xe]
void* edi = &arg3[eax_7 * 7]
sub_5f1df0(eax_8, edi, arg3, eax_8)
int32_t* eax_9 = &arg2[eax_7 * 7]
int32_t* edx_8 = arg4 - esi_4
return sub_5f1df0(
    sub_5f1df0(sub_5f1df0(eax_9, arg2, arg2 - esi_4, eax_9), edx_8, arg4 - eax_7 * 0x38, arg4), 
    arg2, edi, edx_8)
