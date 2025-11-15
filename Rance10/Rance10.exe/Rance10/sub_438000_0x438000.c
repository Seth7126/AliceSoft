// 函数: sub_438000
// 地址: 0x438000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg6)
uint32_t ebx_1 = *arg1 u>> 1
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = sx.q(arg5)
int32_t esi_1 = (eax_1 - edx) s>> 1
int32_t edi_1 = (eax_4 - edx_1) s>> 1

if (esi_1 s< 0)
    esi_1 -= 1

int32_t eax_7
int32_t edx_2
edx_2:eax_7 = sx.q(esi_1)

if (edi_1 s< 0)
    edi_1 -= 1

uint32_t ebx_3 = arg3 u>> 1
int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(edi_1)
uint32_t edi_3 = arg2 u>> 1
void* ebp_3 = ((eax_7 - edx_2) s>> 1) * ebx_1 + ((eax_10 - edx_3) s>> 1)
sub_43ad50(arg1, ebx_3 * ebx_1 + edi_3, ebx_1, arg4, ebp_3)
uint32_t eax_17 = *arg1 u>> 1
return sub_43aee0(arg1, eax_17 * ebx_3 + edi_3, eax_17, arg4, ebp_3)
