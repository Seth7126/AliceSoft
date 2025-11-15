// 函数: sub_6b1d10
// 地址: 0x6b1d10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 == 0 || arg2 == 0)
    return 

if (arg4 != 1 && arg4 != 2)
    sub_6a7500(arg3, "Invalid sCAL unit")
    noreturn

if (arg5 == 0)
    sub_6a7500(arg3, "Invalid sCAL width")
    noreturn

char* esi_1 = arg5
void* ecx = &esi_1[1]
int32_t eax

do
    eax.b = *esi_1
    esi_1 = &esi_1[1]
while (eax.b != 0)
void* esi_2 = esi_1 - ecx

if (esi_1 == ecx || *arg5 == 0x2d)
    sub_6a7500(arg3, "Invalid sCAL width")
    noreturn

char* var_4 = nullptr
char* var_8 = nullptr

if (sub_6a6430(&var_4, esi_2, arg5, &var_4, &var_8) == 0)
    sub_6a7500(arg3, "Invalid sCAL width")
    noreturn

char* eax_3 = var_8

if ((eax_3 != esi_2 && *(eax_3 + arg5) != 0) || var_4 == 0)
    sub_6a7500(arg3, "Invalid sCAL width")
    noreturn

if (arg6 == 0)
    sub_6a7500(arg3, "Invalid sCAL height")
    noreturn

char* edi_2 = arg6
void* edx_1 = &edi_2[1]

do
    eax_3.b = *edi_2
    edi_2 = &edi_2[1]
while (eax_3.b != 0)

void* edi_3 = edi_2 - edx_1

if (edi_2 == edx_1 || *arg6 == 0x2d)
    sub_6a7500(arg3, "Invalid sCAL height")
    noreturn

var_8 = nullptr
var_4 = nullptr

if (sub_6a6430(&var_8, edi_3, arg6, &var_8, &var_4) == 0)
    sub_6a7500(arg3, "Invalid sCAL height")
    noreturn

char* ecx_3 = var_4

if ((ecx_3 != edi_3 && *(ecx_3 + arg6) != 0) || var_8 == 0)
    sub_6a7500(arg3, "Invalid sCAL height")
    noreturn

*(arg2 + 0xfc) = arg4.b
char* eax_8 = sub_6a7cb0(arg3, esi_2 + 1)
*(arg2 + 0x100) = eax_8

if (eax_8 == 0)
    return sub_6a7530(arg3, "Memory allocation failed while processing sCAL") __tailcall

sub_700660(eax_8, arg5, esi_2 + 1)
char* eax_10 = sub_6a7cb0(arg3, edi_3 + 1)
*(arg2 + 0x104) = eax_10

if (eax_10 == 0)
    sub_6a7cf0(arg3, *(arg2 + 0x100))
    *(arg2 + 0x100) = 0
    return sub_6a7530(arg3, "Memory allocation failed while processing sCAL") __tailcall

sub_700660(eax_10, arg6, edi_3 + 1)
*(arg2 + 8) |= 0x4000
*(arg2 + 0xe8) |= 0x100
