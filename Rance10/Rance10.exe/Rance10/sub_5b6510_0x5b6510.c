// 函数: sub_5b6510
// 地址: 0x5b6510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg4 s<= 0x20)
    char* var_24 = arg3
    return sub_5b6620(arg3, arg2)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg4 + 1)
int32_t edi_1 = (eax_3 - edx) s>> 1
void* eax_5 = &arg3[edi_1 * 0xc]
int32_t eax_6
int32_t ecx_2
eax_6, ecx_2 = sub_5b65d0(arg5)
int64_t* eax_8
int32_t esi_1

if (edi_1 s> eax_6)
    sub_5b6510(edi_1, arg5, arg6)
    esi_1 = arg4 - edi_1
    eax_8 = sub_5b6510(esi_1, arg5, arg6)
else
    int32_t var_24_1 = ecx_2
    esi_1 = arg4 - edi_1
    eax_8 = sub_5b66f0(sub_5b66f0(eax_6, eax_5, arg3, edi_1, arg5), arg2, eax_5, esi_1, arg5)

return sub_5b67b0(eax_8, eax_5, arg3, arg2, edi_1, esi_1, arg5, arg6)
