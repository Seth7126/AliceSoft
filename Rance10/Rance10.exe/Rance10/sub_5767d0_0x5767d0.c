// 函数: sub_5767d0
// 地址: 0x5767d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg3

if (arg4 s<= 0x20)
    int32_t* var_1c = arg3
    return sub_576980(arg3, arg2)

int32_t eax_3
int32_t edx
edx:eax_3 = sx.q(arg4 + 1)
int32_t edi_1 = (eax_3 - edx) s>> 1
int32_t eax_5
int32_t ecx_1
eax_5, ecx_1 = sub_576930(arg5)
void* eax_7
int32_t esi_1

if (edi_1 s> eax_5)
    sub_5767d0(edi_1, arg5, arg6)
    esi_1 = arg4 - edi_1
    eax_7 = sub_5767d0(esi_1, arg5, arg6)
else
    int32_t var_1c_1 = ecx_1
    esi_1 = arg4 - edi_1
    eax_7 = sub_576a30(sub_576a30(eax_5, &arg3[edi_1], arg3, edi_1, arg5), arg2, &arg3[edi_1], 
        esi_1, arg5)

return sub_576af0(eax_7, &arg3[edi_1], arg3, arg2, edi_1, esi_1, arg5, arg6)
