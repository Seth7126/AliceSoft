// 函数: sub_4e1900
// 地址: 0x4e1900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0278
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_6
eax_6.b = *(*(*arg1 + 0x200) + 0x8d)

if (*(arg2 + 0x8d) != eax_6.b)
    *(arg2 + 0x8d) = eax_6.b
    *(arg2 + 0x70) = 1

void* ecx = *(*arg1 + 0x200)
void* eax_8 = *(ecx + 0xd8)

if (eax_8 == 0)
    int32_t eax_11 = *(*(*(ecx + 0x50) + 0x58) + 0x90)
    
    if (eax_11 s<= 0)
        eax_8 = nullptr
    else
        int32_t var_54_1 = eax_11
        void* eax_12 = sub_4a56f0(*(ecx + 0x54))
        
        if (eax_12 == 0)
            eax_8 = nullptr
        else
            eax_8 = sub_4a2ab0(eax_12)
            
            if (eax_8 == 0)
                eax_8 = nullptr

sub_4a2af0(arg2, eax_8)
int32_t eax_13 = sub_4a2720(*(*arg1 + 0x200))
var_3c = eax_13
int32_t* ecx_6 = &var_3c
int32_t var_34 = 0xff
int32_t var_38 = 0

if (eax_13 s>= 0xff)
    ecx_6 = &var_34

int32_t* eax_14 = &var_38

if (*ecx_6 s> 0)
    eax_14 = ecx_6

int32_t eax_15 = *eax_14

if (*(arg2 + 0x90) != eax_15)
    *(arg2 + 0x90) = eax_15
    *(arg2 + 0x70) = 1

int32_t eax_18 = *(*(*arg1 + 0x200) + 0xf0)

if (*(arg2 + 0xf0) != eax_18)
    *(arg2 + 0xf0) = eax_18
    *(arg2 + 0x70) = 1

void* eax_20
eax_20.b = *(*(*arg1 + 0x200) + 0xf4)

if (*(arg2 + 0xf4) != eax_20.b)
    *(arg2 + 0xf4) = eax_20.b
    *(arg2 + 0x70) = 1

void* ebp_1 = *(*arg1 + 0x200)
int32_t eax_23 = sub_4a1bb0(ebp_1) + *(ebp_1 + 0xa0)
var_38 = eax_23
int32_t* ecx_8 = &var_38
var_3c = 0xff

if (eax_23 s>= 0xff)
    ecx_8 = &var_3c

int32_t ebx_1 = *ecx_8
int32_t eax_25 = sub_4a1b50(ebp_1) + *(ebp_1 + 0x9c)
var_38 = eax_25
int32_t* edx = &var_38
var_3c = 0xff

if (eax_25 s>= 0xff)
    edx = &var_3c

int32_t edi = *edx
int32_t eax_27 = sub_4a1af0(ebp_1) + *(ebp_1 + 0x98)
var_38 = eax_27
int32_t var_54_3 = ebx_1
int32_t* ecx_11 = &var_38

if (eax_27 s>= 0xff)
    ecx_11 = &var_3c

var_3c = 0xff
int32_t var_58 = edi
sub_4b7960(arg2 + 0x6c, *ecx_11)
void* esi = *(*arg1 + 0x200)
int32_t eax_31 = *(*(*(esi + 0x50) + 0x58) + 0x90)
void* eax_32

if (eax_31 s> 0)
    int32_t var_54_4 = eax_31
    eax_32 = sub_4a56f0(*(esi + 0x54))

if (eax_31 s<= 0 || eax_32 == 0)
    var_34 = 0xff
else
    var_34 = sub_4a2850(eax_32)

int32_t eax_34 = *(esi + 0xac)
int32_t eax_37 = *(*(*(esi + 0x50) + 0x58) + 0x90)
void* eax_38

if (eax_37 s> 0)
    int32_t var_54_5 = eax_37
    eax_38 = sub_4a56f0(*(esi + 0x54))

if (eax_37 s<= 0 || eax_38 == 0)
    var_3c = 0xff
else
    var_3c = sub_4a2800(eax_38)

int32_t eax_40 = *(esi + 0xa8)
int32_t eax_43 = *(*(*(esi + 0x50) + 0x58) + 0x90)
void* eax_44

if (eax_43 s> 0)
    int32_t var_54_6 = eax_43
    eax_44 = sub_4a56f0(*(esi + 0x54))

int32_t ebp_2

if (eax_43 s<= 0 || eax_44 == 0)
    ebp_2 = 0xff
else
    ebp_2 = sub_4a27b0(eax_44)

int32_t var_54_7 = eax_34 * var_34 s/ 0xff
int32_t var_58_1 = eax_40 * var_3c s/ 0xff
sub_4b7a20(arg2 + 0x6c, *(esi + 0xa4) * ebp_2 s/ 0xff)
int32_t eax_57 = *(*(*arg1 + 0x200) + 0xb0)

if (*(arg2 + 0xb0) != eax_57)
    *(arg2 + 0xb0) = eax_57
    *(arg2 + 0x70) = 1

int32_t eax_60 = *(*(*arg1 + 0x200) + 0xf8)

if (*(arg2 + 0xf8) != eax_60)
    *(arg2 + 0xf8) = eax_60
    *(arg2 + 0x70) = 1

int32_t var_28
char* eax_61 = sub_4a3390(*(*arg1 + 0x200), &var_28, 2)
int32_t var_4 = 0

if (sub_4058a0(*(arg2 + 0x480) + 0x30, eax_61) == 0)
    char* ecx_32 = *(arg2 + 0x480) + 0x30
    
    if (ecx_32 != eax_61)
        sub_401ff0(ecx_32, eax_61, 0, 0xffffffff)
    
    *(arg2 + 0x70) = 1

int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

void* result
result.b = *(*(*arg1 + 0x200) + 0x47d)

if (*(arg2 + 0x47d) != result.b)
    *(arg2 + 0x47d) = result.b
    *(arg2 + 0x70) = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
