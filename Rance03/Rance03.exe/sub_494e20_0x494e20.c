// 函数: sub_494e20
// 地址: 0x494e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb6e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_493690(arg1)
int32_t var_4 = 0
void* var_70
void** var_40
int32_t* eax_7 =
    sub_410930(sub_410930(sub_4932b0(arg1), arg4, &var_40, .\"), &var_40, &var_70, 0x6dfcc8)
int32_t* ecx_3 = eax_7
var_4.b = 1
int32_t* edx_2 = *(arg3 + 4)
int32_t* ebx_1

if (edx_2 != 0)
    if (ecx_3[5] u>= 0x10)
        ecx_3 = *ecx_3
    
    eax_7 = (*(*edx_2 + 0x10))(ecx_3)
    ebx_1 = eax_7
else
    ebx_1 = nullptr

var_4.b = 0
int32_t var_5c

if (var_5c u>= 0x10)
    eax_7 = j__free(var_70)

int32_t edi = 0
char var_58
int32_t var_44
int32_t var_2c
int32_t var_28
int32_t var_14
void* esi_2

if (ebx_1 s>= 0)
    esi_2 = arg1
else
    do
        void** eax_9 = &var_40
        int32_t var_90_3 = edi
        
        if (var_2c u>= 0x10)
            eax_9 = var_40
        
        void** var_94_1 = eax_9
        sub_4691f0(&var_70, 0x6dfcac)
        var_4.b = 2
        char* eax_10 = sub_401d70(arg3, &var_28, &var_70, 1)
        var_4.b = 3
        esi_2 = arg1
        var_4.b = 4
        eax_7 = sub_493010(esi_2, sub_401d70(arg3, &var_58, &var_70, 0), eax_10)
        
        if (var_44 u>= 0x10)
            eax_7 = j__free(var_58.d)
        
        var_44 = 0xf
        int32_t var_48_1 = 0
        var_58 = 0
        
        if (var_14 u>= 0x10)
            eax_7 = j__free(var_28)
        
        var_4.b = 0
        
        if (var_5c u>= 0x10)
            eax_7 = j__free(var_70)
        
        edi += 2
    while (edi s> ebx_1)

void* eax_12 = sub_410930(eax_7, &var_40, &var_28, 0x6dfcfc)
void* ecx_9 = eax_12
var_4.b = 5
int32_t* edx_4 = *(arg3 + 4)
void* ebx_2

if (edx_4 != 0)
    if (*(ecx_9 + 0x14) u>= 0x10)
        ecx_9 = *ecx_9
    
    eax_12 = (*(*edx_4 + 0x10))(ecx_9)
    ebx_2 = eax_12
else
    ebx_2 = nullptr

var_4.b = 0

if (var_14 u>= 0x10)
    eax_12 = j__free(var_28)

int32_t edi_1 = 0

if (ebx_2 s< 0)
    do
        void** eax_14 = &var_40
        int32_t var_90_10 = edi_1
        
        if (var_2c u>= 0x10)
            eax_14 = var_40
        
        void** var_94_5 = eax_14
        sub_4691f0(&var_70, 0x6dfcdc)
        var_4.b = 6
        char* eax_15 = sub_401d70(arg3, &var_28, &var_70, 1)
        var_4.b = 7
        esi_2 = arg1
        var_4.b = 8
        eax_12 = sub_493380(esi_2, sub_401d70(arg3, &var_58, &var_70, 0), eax_15)
        
        if (var_44 u>= 0x10)
            eax_12 = j__free(var_58.d)
        
        var_44 = 0xf
        int32_t var_48_2 = 0
        var_58 = 0
        
        if (var_14 u>= 0x10)
            eax_12 = j__free(var_28)
        
        var_4.b = 0
        
        if (var_5c u>= 0x10)
            eax_12 = j__free(var_70)
        
        edi_1 += 2
    while (edi_1 s> ebx_2)

int32_t* ecx_15 = sub_410930(eax_12, &var_40, &var_28, "FPS")
var_4.b = 9
int32_t* edx_6 = *(arg3 + 4)
int32_t xmm0

if (edx_6 != 0)
    if (ecx_15[5] u>= 0x10)
        ecx_15 = *ecx_15
    
    (*(*edx_6 + 0x48))(ecx_15)
    xmm0 = fconvert.s(arg2)
else
    xmm0 = (zx.o(0)).d

*(esi_2 + 0x30) = xmm0

if (var_14 u>= 0x10)
    j__free(var_28)

if (var_2c u>= 0x10)
    j__free(var_40)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return result
