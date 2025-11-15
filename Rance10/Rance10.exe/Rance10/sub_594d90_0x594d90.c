// 函数: sub_594d90
// 地址: 0x594d90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg3
int32_t eax_3 = (arg4 - arg3) s/ 0x18
int32_t* var_18 = arg3

if (eax_3 s<= 0x28)
    return sub_594ff0(eax_3, arg2, arg3, arg4)

int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
int32_t esi_3 = eax_7 * 0x18
void* eax_8 = &arg3[eax_7 * 0xc]
void* ebx = &arg3[eax_7 * 6]
sub_594ff0(eax_8, ebx, arg3, eax_8)
int32_t* eax_9 = &arg2[eax_7 * 6]
int32_t* edx_7 = arg4 - esi_3
return sub_594ff0(
    sub_594ff0(sub_594ff0(eax_9, arg2, arg2 - esi_3, eax_9), edx_7, arg4 - eax_7 * 0x30, arg4), 
    arg2, ebx, edx_7)
