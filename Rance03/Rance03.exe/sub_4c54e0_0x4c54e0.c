// 函数: sub_4c54e0
// 地址: 0x4c54e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bbf80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_6
eax_6.b = *(*(*arg1 + 0x204) + 0x8d)

if (*(arg2 + 0x8d) != eax_6.b)
    *(arg2 + 0x8d) = eax_6.b
    *(arg2 + 0x70) = 1

void* ecx = *(*arg1 + 0x204)
void* eax_8 = *(ecx + 0xd8)

if (eax_8 == 0)
    int32_t eax_11 = *(*(*(ecx + 0x50) + 0x58) + 0x90)
    
    if (eax_11 s<= 0)
        eax_8 = nullptr
    else
        int32_t var_78_1 = eax_11
        void* eax_12 = sub_4a56f0(*(ecx + 0x54))
        
        if (eax_12 == 0)
            eax_8 = nullptr
        else
            eax_8 = sub_4a2ab0(eax_12)
            
            if (eax_8 == 0)
                eax_8 = nullptr

sub_4a2af0(arg2, eax_8)
int32_t eax_13 = sub_4a2720(*(*arg1 + 0x204))
int32_t var_5c = eax_13
int32_t* ecx_6 = &var_5c
int32_t var_60 = 0xff
int32_t var_58 = 0

if (eax_13 s>= 0xff)
    ecx_6 = &var_60

int32_t* eax_14 = &var_58

if (*ecx_6 s> 0)
    eax_14 = ecx_6

int32_t eax_15 = *eax_14

if (*(arg2 + 0x90) != eax_15)
    *(arg2 + 0x90) = eax_15
    *(arg2 + 0x70) = 1

int32_t eax_18 = *(*(*arg1 + 0x204) + 0xf0)

if (*(arg2 + 0xf0) != eax_18)
    *(arg2 + 0xf0) = eax_18
    *(arg2 + 0x70) = 1

void* eax_20
eax_20.b = *(*(*arg1 + 0x204) + 0xf4)

if (*(arg2 + 0xf4) != eax_20.b)
    *(arg2 + 0xf4) = eax_20.b
    *(arg2 + 0x70) = 1

int32_t edi = *(*arg1 + 0x204)
var_58 = edi
int32_t eax_23 = sub_4a1bb0(edi) + *(edi + 0xa0)
var_5c = eax_23
int32_t* ecx_8 = &var_5c
var_60 = 0xff

if (eax_23 s>= 0xff)
    ecx_8 = &var_60

int32_t ebx_1 = *ecx_8
int32_t eax_25 = sub_4a1b50(edi) + *(edi + 0x9c)
var_5c = eax_25
int32_t* edx = &var_5c
var_60 = 0xff

if (eax_25 s>= 0xff)
    edx = &var_60

int32_t ecx_10 = var_58
int32_t edi_1 = *edx
int32_t eax_27 = sub_4a1af0(ecx_10) + *(ecx_10 + 0x98)
var_60 = 0xff
var_5c = eax_27
int32_t var_78_3 = ebx_1
int32_t* ecx_11 = &var_5c

if (eax_27 s>= 0xff)
    ecx_11 = &var_60

int32_t var_7c = edi_1
sub_4b7960(arg2 + 0x6c, *ecx_11)
void* esi_2 = *(*arg1 + 0x204)
int32_t eax_31 = *(*(*(esi_2 + 0x50) + 0x58) + 0x90)
void* eax_32

if (eax_31 s> 0)
    int32_t var_78_4 = eax_31
    eax_32 = sub_4a56f0(*(esi_2 + 0x54))

if (eax_31 s<= 0 || eax_32 == 0)
    var_58 = 0xff
else
    var_58 = sub_4a2850(eax_32)

int32_t eax_34 = *(esi_2 + 0xac)
int32_t eax_37 = *(*(*(esi_2 + 0x50) + 0x58) + 0x90)
void* eax_38

if (eax_37 s> 0)
    int32_t var_78_5 = eax_37
    eax_38 = sub_4a56f0(*(esi_2 + 0x54))

if (eax_37 s<= 0 || eax_38 == 0)
    var_60 = 0xff
else
    var_60 = sub_4a2800(eax_38)

int32_t eax_40 = *(esi_2 + 0xa8)
int32_t eax_43 = *(*(*(esi_2 + 0x50) + 0x58) + 0x90)
void* eax_44

if (eax_43 s> 0)
    int32_t var_78_6 = eax_43
    eax_44 = sub_4a56f0(*(esi_2 + 0x54))

if (eax_43 s<= 0 || eax_44 == 0)
    var_5c = 0xff
else
    var_5c = sub_4a27b0(eax_44)

int32_t var_78_7 = eax_34 * var_58 s/ 0xff
int32_t var_7c_1 = eax_40 * var_60 s/ 0xff
sub_4b7a20(arg2 + 0x6c, *(esi_2 + 0xa4) * var_5c s/ 0xff)
int32_t eax_57 = *(*(*arg1 + 0x204) + 0xb0)

if (*(arg2 + 0xb0) != eax_57)
    *(arg2 + 0xb0) = eax_57
    *(arg2 + 0x70) = 1

int32_t eax_60 = *(*(*arg1 + 0x204) + 0xf8)

if (*(arg2 + 0xf8) != eax_60)
    *(arg2 + 0xf8) = eax_60
    *(arg2 + 0x70) = 1

int32_t var_4c
char* eax_61 = sub_4a3390(*(*arg1 + 0x204), &var_4c, 2)
int32_t var_c_1 = 0

if (sub_4058a0(*(arg2 + 0x480) + 0x30, eax_61) == 0)
    char* ecx_32 = *(arg2 + 0x480) + 0x30
    
    if (ecx_32 != eax_61)
        sub_401ff0(ecx_32, eax_61, 0, 0xffffffff)
    
    *(arg2 + 0x70) = 1

int32_t var_c_2 = 0xffffffff
int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c)

int32_t var_34
char* eax_63 = sub_4a3390(*(*arg1 + 0x204), &var_34, 3)
int32_t var_c_3 = 1

if (sub_4058a0(*(arg2 + 0x480) + 0x48, eax_63) == 0)
    char* ecx_38 = *(arg2 + 0x480) + 0x48
    
    if (ecx_38 != eax_63)
        sub_401ff0(ecx_38, eax_63, 0, 0xffffffff)
    
    *(arg2 + 0x70) = 1

int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

void* result
result.b = *(*(*arg1 + 0x204) + 0x47d)

if (*(arg2 + 0x47d) != result.b)
    *(arg2 + 0x47d) = result.b
    *(arg2 + 0x70) = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
