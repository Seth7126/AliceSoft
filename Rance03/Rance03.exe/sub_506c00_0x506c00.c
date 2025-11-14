// 函数: sub_506c00
// 地址: 0x506c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *(arg1 + 4)

if (eax == 0)
    eax.b = 1
    return eax

int32_t* ebp = arg3
int32_t* var_8
int32_t* eax_2 = &var_8
int32_t edi = *arg2
int32_t* esi_1 = *arg4 + edi
int32_t edx = *ebp
var_8 = esi_1

if (esi_1 s>= edi)
    eax_2 = arg2

var_8 = *eax_2
int32_t* eax_5 = &arg3
int32_t* ecx_2 = *arg5 + edx
arg3 = ecx_2

if (ecx_2 s>= edx)
    eax_5 = ebp

int32_t* edi_1 = var_8
int32_t* ebx = *eax_5
int32_t* eax_6 = &arg3

if (edi s>= esi_1)
    eax_6 = arg2

arg3 = esi_1
int32_t* esi_2 = *eax_6
int32_t* eax_7 = &arg3

if (edx s>= ecx_2)
    eax_7 = ebp

arg3 = ecx_2
int32_t* edx_1 = *eax_7
int32_t* eax_8 = *(eax + 0x18)
int32_t* ecx_4 = *(eax + 0x1c)
arg3 = nullptr

if (edi_1 s< 0)
    edi_1 = arg3

arg3 = nullptr

if (eax_8 s< edi_1)
    edi_1 = eax_8

if (ebx s< 0)
    ebx = arg3

arg3 = nullptr

if (ecx_4 s< ebx)
    ebx = ecx_4

if (esi_2 s< 0)
    esi_2 = arg3

if (eax_8 s< esi_2)
    esi_2 = eax_8

if (edx_1 s< 0)
    edx_1 = nullptr

if (ecx_4 s< edx_1)
    edx_1 = ecx_4

*arg2 = edi_1
*ebp = ebx
*arg4 = esi_2 - edi_1
*arg5 = edx_1 - ebx
int32_t* eax_11
eax_11.b = 0
return eax_11
