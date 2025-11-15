// 函数: sub_5b60a0
// 地址: 0x5b60a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg3
int32_t eax_3 = (arg4 - arg3) s/ 0x6c

if (eax_3 s<= 0x28)
    void* __saved_ebx = arg3
    return sub_5b61f0(eax_3, arg2, arg3, arg4)

int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_2 & 7)) s>> 3
void* esi_2 = eax_7 * 0x6c
void* edi_1 = eax_7 * 0xd8
void* var_18 = arg3
void* ebx = esi_2 + arg3
void* eax_8 = edi_1 + arg3
sub_5b61f0(eax_8, ebx, arg3, eax_8)
void* eax_9 = esi_2 + arg2
void* edx_7 = arg4 - esi_2
return sub_5b61f0(
    sub_5b61f0(sub_5b61f0(eax_9, arg2, arg2 - esi_2, eax_9), edx_7, arg4 - edi_1, arg4), arg2, ebx, 
    edx_7)
