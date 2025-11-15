// 函数: sub_6b1a80
// 地址: 0x6b1a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg2
void* var_10 = edi

if (arg3 == 0 || edi == 0 || arg4 == 0 || arg9 == 0 || (arg8 s> 0 && arg10 == 0))
    return 

char* ecx_1 = arg4

do
    arg1.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (arg1.b != 0)

void* esi_2 = ecx_1 - &ecx_1[1] + 1

if (arg7 u> 3)
    sub_6a7500(arg3, "Invalid pCAL equation type")
    noreturn

if (arg8 u> 0xff)
    sub_6a7500(arg3, "Invalid pCAL parameter count")
    noreturn

int32_t ebx_1 = 0

if (arg8 s> 0)
    do
        char* edi_1 = *(arg10 + (ebx_1 << 2))
        
        if (edi_1 == 0)
            sub_6a7500(arg3, "Invalid format for pCAL parameter")
            noreturn
        
        char* esi_3 = edi_1
        int32_t eax
        
        do
            eax.b = *esi_3
            esi_3 = &esi_3[1]
        while (eax.b != 0)
        int32_t var_8 = 0
        void* esi_4 = esi_3 - &esi_3[1]
        char* var_c = nullptr
        
        if (sub_6a6430(&var_8, esi_4, edi_1, &var_8, &var_c) == 0)
            sub_6a7500(arg3, "Invalid format for pCAL parameter")
            noreturn
        
        char* eax_3 = var_c
        
        if (eax_3 == esi_4)
            if (var_8 == 0)
                sub_6a7500(arg3, "Invalid format for pCAL parameter")
                noreturn
        else if (*(eax_3 + edi_1) != 0 || var_8 == 0)
            sub_6a7500(arg3, "Invalid format for pCAL parameter")
            noreturn
        
        ebx_1 += 1
    while (ebx_1 s< arg8)
    
    edi = var_10

char* eax_4 = sub_6a7cb0(arg3, esi_2)
*(edi + 0xd0) = eax_4

if (eax_4 == 0)
    return sub_6a7530(arg3, "Insufficient memory for pCAL purpose") __tailcall

sub_700660(eax_4, arg4, esi_2)
char* ecx_8 = arg9
*(edi + 0xd4) = arg5
*(edi + 0xd8) = arg6
void* edx_4 = &ecx_8[1]
*(edi + 0xe4) = arg7.b
*(edi + 0xe5) = arg8.b
char i

do
    i = *ecx_8
    ecx_8 = &ecx_8[1]
while (i != 0)
char* eax_8 = sub_6a7cb0(arg3, ecx_8 - edx_4 + 1)
*(edi + 0xdc) = eax_8

if (eax_8 == 0)
    return sub_6a7530(arg3, "Insufficient memory for pCAL units") __tailcall

sub_700660(eax_8, arg9, ecx_8 - edx_4 + 1)
uint32_t (* eax_10)[0x4] = sub_6a7cb0(arg3, (arg8 << 2) + 4)
*(edi + 0xe0) = eax_10

if (eax_10 == 0)
    return sub_6a7530(arg3, "Insufficient memory for pCAL params") __tailcall

_memset(eax_10, 0, (arg8 << 2) + 4)
int32_t esi_7 = 0

if (arg8 s> 0)
    do
        char* eax_13 = *(arg10 + (esi_7 << 2))
        void* edx_9 = &eax_13[1]
        char i_1
        
        do
            i_1 = *eax_13
            eax_13 = &eax_13[1]
        while (i_1 != 0)
        char* eax_15 = sub_6a7cb0(arg3, eax_13 - edx_9 + 1)
        *(*(var_10 + 0xe0) + (esi_7 << 2)) = eax_15
        
        if (eax_15 == 0)
            return sub_6a7530(arg3, "Insufficient memory for pCAL parameter") __tailcall
        
        sub_700660(eax_15, *(arg10 + (esi_7 << 2)), eax_13 - edx_9 + 1)
        esi_7 += 1
    while (esi_7 s< arg8)
    
    edi = var_10

*(edi + 8) |= 0x400
*(edi + 0xe8) |= 0x80
