// 函数: sub_634350
// 地址: 0x634350
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg3 == 0 || arg2 == 0)
    return 

if (arg4 != 1 && arg4 != 2)
    sub_62a520(arg3, "Invalid sCAL unit")
    noreturn

if (arg5 == 0)
    sub_62a520(arg3, "Invalid sCAL width")
    noreturn

char* esi_1 = arg5
void* edx = &esi_1[1]
int32_t eax

do
    eax.b = *esi_1
    esi_1 = &esi_1[1]
while (eax.b != 0)
void* esi_2 = esi_1 - edx

if (esi_1 == edx || *arg5 == 0x2d)
    sub_62a520(arg3, "Invalid sCAL width")
    noreturn

if (sub_629700(arg5, esi_2) == 0)
    sub_62a520(arg3, "Invalid sCAL width")
    noreturn

char* ecx_1 = arg6

if (ecx_1 == 0)
    sub_62a520(arg3, "Invalid sCAL height")
    noreturn

char* edi_1 = ecx_1
void* edx_2 = &edi_1[1]
int32_t eax_1

do
    eax_1.b = *edi_1
    edi_1 = &edi_1[1]
while (eax_1.b != 0)
void* edi_2 = edi_1 - edx_2

if (edi_1 == edx_2 || *ecx_1 == 0x2d)
    sub_62a520(arg3, "Invalid sCAL height")
    noreturn

if (sub_629700(ecx_1, edi_2) == 0)
    sub_62a520(arg3, "Invalid sCAL height")
    noreturn

*(arg2 + 0xfc) = arg4.b
int32_t* eax_4 = sub_62aca0(arg3, esi_2 + 1)
*(arg2 + 0x100) = eax_4

if (eax_4 == 0)
    return sub_62a550(arg3, "Memory allocation failed while processing sCAL") __tailcall

sub_69d850(eax_4, arg5, esi_2 + 1)
int32_t* eax_6 = sub_62aca0(arg3, edi_2 + 1)
*(arg2 + 0x104) = eax_6

if (eax_6 == 0)
    sub_62ace0(arg3, *(arg2 + 0x100))
    *(arg2 + 0x100) = 0
    return sub_62a550(arg3, "Memory allocation failed while processing sCAL") __tailcall

sub_69d850(eax_6, arg6, edi_2 + 1)
*(arg2 + 8) |= 0x4000
*(arg2 + 0xe8) |= 0x100
