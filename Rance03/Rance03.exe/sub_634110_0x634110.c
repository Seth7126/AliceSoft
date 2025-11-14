// 函数: sub_634110
// 地址: 0x634110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg3

if (arg3 == 0 || arg2 == 0 || arg4 == 0 || arg9 == 0)
    return 

int32_t edi_1 = arg10

if (arg8 s> 0 && edi_1 == 0)
    return 

char* ecx = arg4

do
    arg1.b = *ecx
    ecx = &ecx[1]
while (arg1.b != 0)

void* eax = ecx - &ecx[1] + 1
var_4 = eax

if (arg7 u> 3)
    sub_62a520(arg3, "Invalid pCAL equation type")
    noreturn

if (arg8 u> 0xff)
    sub_62a520(arg3, "Invalid pCAL parameter count")
    noreturn

int32_t esi_2 = 0

if (arg8 s> 0)
    do
        char* ecx_3 = *(edi_1 + (esi_2 << 2))
        
        if (ecx_3 != 0)
            char* edx_1 = ecx_3
            
            do
                eax.b = *edx_1
                edx_1 = &edx_1[1]
            while (eax.b != 0)
            
            eax = sub_629700(ecx_3, edx_1 - &edx_1[1])
        
        if (ecx_3 == 0 || eax == 0)
            sub_62a520(arg3, "Invalid format for pCAL parameter")
            noreturn
        
        edi_1 = arg10
        esi_2 += 1
    while (esi_2 s< arg8)
    
    eax = var_4

int32_t* eax_1 = sub_62aca0(arg3, eax)
*(arg2 + 0xd0) = eax_1

if (eax_1 == 0)
    return sub_62a550(arg3, "Insufficient memory for pCAL purpose") __tailcall

sub_69d850(eax_1, arg4, var_4)
*(arg2 + 0xd4) = arg5
*(arg2 + 0xd8) = arg6
*(arg2 + 0xe4) = arg7.b
*(arg2 + 0xe5) = arg8.b
char* ecx_8 = arg9
char i

do
    i = *ecx_8
    ecx_8 = &ecx_8[1]
while (i != 0)
int32_t* eax_6 = sub_62aca0(arg3, ecx_8 - (arg9 + 1) + 1)
*(arg2 + 0xdc) = eax_6

if (eax_6 == 0)
    return sub_62a550(arg3, "Insufficient memory for pCAL units") __tailcall

sub_69d850(eax_6, arg9, ecx_8 - (arg9 + 1) + 1)
char* eax_9 = sub_62aca0(arg3, (arg8 << 2) + 4)
*(arg2 + 0xe0) = eax_9

if (eax_9 == 0)
    return sub_62a550(arg3, "Insufficient memory for pCAL params") __tailcall

_memset(eax_9, 0, (arg8 << 2) + 4)
int32_t esi_5 = 0

if (arg8 s> 0)
    do
        char* eax_12 = *(arg10 + (esi_5 << 2))
        void* edx_10 = &eax_12[1]
        char i_1
        
        do
            i_1 = *eax_12
            eax_12 = &eax_12[1]
        while (i_1 != 0)
        int32_t* eax_14 = sub_62aca0(arg3, eax_12 - edx_10 + 1)
        *(*(arg2 + 0xe0) + (esi_5 << 2)) = eax_14
        
        if (eax_14 == 0)
            return sub_62a550(arg3, "Insufficient memory for pCAL parameter") __tailcall
        
        sub_69d850(eax_14, *(arg10 + (esi_5 << 2)), eax_12 - edx_10 + 1)
        esi_5 += 1
    while (esi_5 s< arg8)

*(arg2 + 8) |= 0x400
*(arg2 + 0xe8) |= 0x80
