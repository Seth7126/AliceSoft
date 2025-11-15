// 函数: sub_634a80
// 地址: 0x634a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7459d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_6c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
char var_58 = 0
int128_t var_54
__builtin_memset(&var_54, 0, 0x15)
int32_t var_3c = 0
int32_t var_38 = 0
char var_34 = 0
int32_t var_30 = 0
int32_t var_2c = 0
char var_28 = 0
int32_t var_8_1 = 0
int32_t var_14 = 0
void var_5c
int32_t edx_5
int32_t* esi_2

if (sub_632f50(&var_5c, arg5, edi, &var_5c, arg6, 0, edi) == 0)
label_634c08:
    esi_2 = arg4
    edx_5 = arg5
else
    while (true)
        int16_t* edi_1 = var_54:0xc.d
        int32_t ebx_1 = 0
        int32_t* esi_1 = arg4
        int32_t var_44
        uint32_t ecx_4 = (var_44 - edi_1 + 1) u>> 1
        
        if (edi_1 u> var_44)
            ecx_4 = 0
        
        if (ecx_4 != 0)
            do
                sub_637b50(esi_1, *edi_1)
                ebx_1 += 1
                edi_1 = &edi_1[1]
            while (ebx_1 != ecx_4)
        
        void** ecx_6 = arg7
        arg4 = esi_1
        int32_t edi_2 = ecx_6[5]
        void** edx_1
        
        if (edi_2 u< 8)
            edx_1 = ecx_6
        else
            edx_1 = *ecx_6
        
        void* eax_7 = edx_1 + (ecx_6[4] << 1)
        
        if (edi_2 u>= 8)
            ecx_6 = *ecx_6
        
        void* edx_2 = &var_5c
        void** var_70_2 = ecx_6
        int16_t* var_78_1 = ecx_6
        int32_t** eax_8
        int32_t* var_24
        int32_t* var_20
        
        if ((var_14 & 0x400) == 0)
            eax_8 = sub_637900(eax_7, edx_2, &var_24, esi_1, var_78_1, eax_7)
        else
            eax_8 = sub_637780(eax_7, edx_2, &var_20, esi_1, var_78_1, eax_7)
        esi_2 = *eax_8
        int32_t* ebx_2 = var_54.d
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = muls.dp.d(0x2aaaaaab, var_54:4.d - ebx_2)
        int32_t* eax_10 = &var_30
        arg4 = esi_2
        int32_t edx_4 = edx_3 s>> 1
        int32_t ecx_13 = (var_54:4.d - ebx_2) s/ 0xc
        edx_5 = arg5
        
        if (edx_4 u>> 0x1f != neg.d(edx_4))
            eax_10 = ebx_2
        
        edi = eax_10[1]
        
        if (edi == edx_5)
            break
        
        int32_t* eax_11 = &var_30
        int32_t* ecx_14 = &var_30
        
        if (ecx_13 != 0)
            eax_11 = ebx_2
        
        if (ecx_13 u> 0)
            ecx_14 = ebx_2
        
        int32_t ecx_15 = var_14
        int32_t eax_13
        
        if (*eax_11 != ecx_14[1])
            eax_13 = 0
            ecx_15 |= 0x100
            var_14 = ecx_15
        else
            eax_13 = 0x2000
        
        if (sub_632f50(&var_5c, edx_5, edi, &var_5c, arg6, eax_13 | ecx_15, edi) == 0)
            goto label_634c08

int32_t ebx_3 = 0
uint32_t eax_20 = (edx_5 - edi + 1) u>> 1

if (edi u> edx_5)
    eax_20 = 0

if (eax_20 != 0)
    do
        sub_637b50(esi_2, *edi)
        ebx_3 += 1
        edi += 2
    while (ebx_3 != eax_20)

*arg3 = esi_2
void* esi_3 = var_54.d

if (esi_3 != 0)
    sub_403160(esi_3, (var_54:8.d - esi_3) s/ 0xc, 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
