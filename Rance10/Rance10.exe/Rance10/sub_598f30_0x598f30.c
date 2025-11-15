// 函数: sub_598f30
// 地址: 0x598f30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg4 s<= 0x20)
    int32_t* var_14 = arg3
    return sub_598fe0(arg3, arg2)

int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(arg4 + 1)
int32_t edi_1 = (eax_2 - edx) s>> 1
int32_t eax_4
int32_t ecx_1
eax_4, ecx_1 = sub_576930(arg5)
int32_t* eax_6
int32_t esi_1

if (edi_1 s> eax_4)
    sub_598f30(edi_1, arg5, arg6)
    esi_1 = arg4 - edi_1
    eax_6 = sub_598f30(esi_1, arg5, arg6)
else
    int32_t var_14_1 = ecx_1
    esi_1 = arg4 - edi_1
    eax_6 = sub_599070(sub_599070(eax_4, &arg3[edi_1], arg3, edi_1, arg5), arg2, &arg3[edi_1], 
        esi_1, arg5)

return sub_599130(eax_6, &arg3[edi_1], arg3, arg2, edi_1, esi_1, arg5, arg6)
