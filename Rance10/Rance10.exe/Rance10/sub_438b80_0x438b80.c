// 函数: sub_438b80
// 地址: 0x438b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t edi = *arg1
int32_t eax_1 = arg6

if (eax_1 s< 0)
    eax_1 -= 1

int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(eax_1)
int32_t eax_4 = arg5

if (eax_4 s< 0)
    eax_4 -= 1

int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(eax_4)
int32_t esi_3 = ((eax_2 - edx_1) s>> 1) * edi + ((eax_5 - edx_2) s>> 1)
int32_t eax_8 = arg9

if (eax_8 s< 0)
    eax_8 -= 1

int32_t eax_9
int32_t edx_3
edx_3:eax_9 = sx.q(eax_8)
int32_t eax_11 = arg8

if (eax_11 s< 0)
    eax_11 -= 1

int32_t eax_12
int32_t edx_4
edx_4:eax_12 = sx.q(eax_11)
int32_t ebx_3 = ((eax_9 - edx_3) s>> 1) * edi + ((eax_12 - edx_4) s>> 1)
int32_t edi_1 = edi * arg3
arg9 = edi_1
sub_43dd10(arg1, edi_1 + arg2, edi, arg4, esi_3, arg7, ebx_3)
int32_t eax_17 = *arg1
sub_43dd10(arg1, eax_17 * arg3 + 8 + arg2, eax_17, arg4, esi_3, arg7, ebx_3)
int32_t ecx_5 = *arg1
sub_43dd10(arg1, (arg3 + 8) * ecx_5 + arg2, ecx_5, arg4, esi_3, arg7, ebx_3)
int32_t eax_24 = *arg1
return sub_43dd10(arg1, eax_24 * (arg3 + 8) + arg2 + 8, eax_24, arg4, esi_3, arg7, ebx_3)
