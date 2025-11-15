// 函数: sub_439640
// 地址: 0x439640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg6)
uint32_t ebp_1 = *arg1 u>> 1
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

int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(edi_1)
int32_t ebx_3 = ((eax_7 - edx_2) s>> 1) * ebp_1 + ((eax_10 - edx_3) s>> 1)
int32_t eax_14
int32_t edx_4
edx_4:eax_14 = sx.q(arg9)
int32_t eax_17
int32_t edx_5
edx_5:eax_17 = sx.q(arg8)
int32_t esi_3 = (eax_14 - edx_4) s>> 1
int32_t edi_3 = (eax_17 - edx_5) s>> 1

if (esi_3 s< 0)
    esi_3 -= 1

int32_t eax_20
int32_t edx_6
edx_6:eax_20 = sx.q(esi_3)

if (edi_3 s< 0)
    edi_3 -= 1

uint32_t ebp_3 = arg3 u>> 1
int32_t eax_23
int32_t edx_7
edx_7:eax_23 = sx.q(edi_3)
uint32_t ebx_5 = arg2 u>> 1
void* esi_7 = ((eax_20 - edx_6) s>> 1) * ebp_1 + ((eax_23 - edx_7) s>> 1)
sub_441770(arg1, ebp_3 * ebp_1 + ebx_5, ebp_1, arg4, ebx_3, arg7, esi_7)
uint32_t eax_30 = *arg1 u>> 1
return sub_441a90(arg1, eax_30 * ebp_3 + ebx_5, eax_30, arg4, ebx_3, arg7, esi_7)
