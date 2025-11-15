// 函数: sub_5fe400
// 地址: 0x5fe400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_3 = (arg4 - arg3) s/ 0x38
uint32_t var_20 = arg4

if (eax_3 s<= 0x28)
    return sub_5fe7b0(eax_3, arg2, arg3, arg4)

int32_t eax_5
int32_t edx_3
edx_3:eax_5 = sx.q(eax_3 + 1)
int32_t eax_7 = (eax_5 + (edx_3 & 7)) s>> 3
int32_t ebx = eax_7 * 0x70
int32_t edi_3 = eax_7 * 0x38
void* ebp_1 = arg3 + edi_3
uint32_t eax_8 = ebx + arg3
sub_5fe7b0(eax_8, ebp_1, arg3, eax_8)
uint32_t eax_9 = edi_3 + arg2
sub_5fe7b0(eax_9, arg2, arg2 - edi_3, eax_9)
uint32_t esi_3 = arg4 - edi_3
void* eax_11 = arg4 - ebx
return sub_5fe7b0(sub_5fe7b0(eax_11, esi_3, eax_11, arg4), arg2, ebp_1, esi_3)
