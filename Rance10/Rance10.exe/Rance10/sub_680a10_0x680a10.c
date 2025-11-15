// 函数: sub_680a10
// 地址: 0x680a10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_3 = (arg4 - arg3) s/ 0x18

if (eax_3 s<= 0x28)
    int32_t* __saved_ebx = arg4
    return sub_680d80(eax_3, arg2, arg3, arg4)

int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
int32_t* var_1c = arg4
int32_t edi_2 = eax_7 * 0x18
void* ebp_1 = &arg3[eax_7 * 6]
int32_t* eax_8 = &arg3[eax_7 * 0xc]
sub_680d80(eax_8, ebp_1, arg3, eax_8)
int32_t* eax_9 = &arg2[eax_7 * 6]
sub_680d80(eax_9, arg2, arg2 - edi_2, eax_9)
int32_t* esi_3 = arg4 - edi_2
void* eax_11 = arg4 - eax_7 * 0x30
return sub_680d80(sub_680d80(eax_11, esi_3, eax_11, arg4), arg2, ebp_1, esi_3)
