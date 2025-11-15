// 函数: sub_587830
// 地址: 0x587830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d764
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x64)
*(arg1 + 0x64) = 0

if (ecx != 0)
    (*(*ecx + 0x1c))(1)

if (*(arg1 + 0x50) != 0)
    sub_4068c0(*(arg1 + 0x7c))
    *(arg1 + 0x50)
    *(arg1 + 0x50) = 0

if (*(arg1 + 0x4c) != 0)
    int32_t* ecx_2 = *(arg1 + 0x4c)
    *(arg1 + 0x4c) = 0
    
    if (ecx_2 != 0)
        int32_t var_8_1 = 0
        (*(*ecx_2 + 0x1c))(1)
    
    sub_57e9e0(*(arg1 + 0x88))

int32_t* esi_1 = *(arg1 + 0x58)
*(arg1 + 0x58) = 0
*(arg1 + 0x54) = 0
int32_t var_8_2 = 1

if (esi_1 != 0)
    bool cond:0_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:0_1))
        (**esi_1)(eax_2)
        bool cond:2_1 = esi_1[2] != 1
        esi_1[2]
        esi_1[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi_1 + 4))()

int32_t* esi_2 = *(arg1 + 0x60)
*(arg1 + 0x60) = 0
*(arg1 + 0x5c) = 0
int32_t var_8_3 = 2

if (esi_2 != 0)
    bool cond:1_1 = esi_2[1] != 1
    esi_2[1]
    esi_2[1] -= 1
    
    if (not(cond:1_1))
        (**esi_2)(eax_2)
        bool cond:3_1 = esi_2[2] != 1
        esi_2[2]
        esi_2[2] -= 1
        
        if (not(cond:3_1))
            (*(*esi_2 + 4))()

if (*(arg1 + 0x2c) != 0)
    sub_4068c0(*(arg1 + 0x7c))
    int32_t eax_10
    eax_10.b = 0
    char temp0_6 = *(arg1 + 0x2c)
    *(arg1 + 0x2c) = 0
    eax_10.b = temp0_6

if (*(arg1 + 0x28) != 0)
    int32_t* ecx_9 = *(arg1 + 0x28)
    *(arg1 + 0x28) = 0
    
    if (ecx_9 != 0)
        (*(*ecx_9 + 0x1c))(1)
    
    sub_57e9e0(*(arg1 + 0x88))

bool cond:4 = *(arg1 + 0x44) u< 0x10
void* eax_12 = arg1 + 0x30
*(eax_12 + 0x10) = 0

if (not(cond:4))
    eax_12 = *eax_12

*eax_12 = 0
*(arg1 + 0x48) = 0

if (*(arg1 + 0x20) != 0)
    sub_4068c0(*(arg1 + 0x7c))
    *(arg1 + 0x20)
    *(arg1 + 0x20) = 0

int32_t* ecx_13 = *(arg1 + 0x24)
*(arg1 + 0x24) = 0

if (ecx_13 != 0)
    (*(*ecx_13 + 0x1c))(1)

if (*(arg1 + 0x1c) != 0)
    int32_t* ecx_14 = *(arg1 + 0x1c)
    *(arg1 + 0x1c) = 0
    
    if (ecx_14 != 0)
        int32_t var_8_4 = 3
        (*(*ecx_14 + 0x1c))(1)
    
    sub_57e9e0(*(arg1 + 0x88))

if (*(arg1 + 0x10) != 0)
    sub_4068c0(*(arg1 + 0x7c))
    int32_t eax_16
    eax_16.b = 0
    char temp0_8 = *(arg1 + 0x10)
    *(arg1 + 0x10) = 0
    eax_16.b = temp0_8

if (*(arg1 + 0xc) != 0)
    int32_t* ecx_17 = *(arg1 + 0xc)
    *(arg1 + 0xc) = 0
    
    if (ecx_17 != 0)
        int32_t var_8_5 = 4
        (*(*ecx_17 + 0x1c))(1)
    
    sub_57e9e0(*(arg1 + 0x88))

__seterrormode(arg1 + 0x18)
int32_t var_8_6 = 5
int32_t* ecx_19 = *(arg1 + 0x14)

if (ecx_19 != 0)
    *(arg1 + 0x14) = 0
    int32_t ebx_1 = ecx_19[1]
    ecx_19[1] -= 1
    (**ecx_19)(ebx_1 - 1)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0x18)
*(arg1 + 4) = 0
*(arg1 + 8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
