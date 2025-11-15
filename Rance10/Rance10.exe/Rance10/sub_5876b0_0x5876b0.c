// 函数: sub_5876b0
// 地址: 0x5876b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d724
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &sealengine::CInstanceView::`vftable'
sub_587830(arg1)
int32_t* ecx = arg1[0x19]

if (ecx != 0)
    (*(*ecx + 0x1c))(1)

int32_t var_8_1 = 0
int32_t* esi = arg1[0x18]

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (**esi)(eax_2)
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi + 4))()

int32_t var_8_2 = 1
int32_t* esi_1 = arg1[0x16]

if (esi_1 != 0)
    bool cond:1_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:1_1))
        (**esi_1)(eax_2)
        bool cond:3_1 = esi_1[2] != 1
        esi_1[2]
        esi_1[2] -= 1
        
        if (not(cond:3_1))
            (*(*esi_1 + 4))()

int32_t* ecx_5 = arg1[0x13]

if (ecx_5 != 0)
    int32_t var_8_3 = 2
    (*(*ecx_5 + 0x1c))(1)

int32_t eax_13 = arg1[0x11]
void* esi_2 = &arg1[0xc]

if (eax_13 u>= 0x10)
    sub_403160(*esi_2, eax_13 + 1, 1)

*(esi_2 + 0x14) = 0xf
bool cond:4 = *(esi_2 + 0x14) u< 0x10
*(esi_2 + 0x10) = 0

if (not(cond:4))
    esi_2 = *esi_2

*esi_2 = 0
int32_t* ecx_6 = arg1[0xa]

if (ecx_6 != 0)
    (*(*ecx_6 + 0x1c))(1)

int32_t* ecx_7 = arg1[9]

if (ecx_7 != 0)
    (*(*ecx_7 + 0x1c))(1)

int32_t* ecx_8 = arg1[7]

if (ecx_8 != 0)
    int32_t var_8_4 = 3
    (*(*ecx_8 + 0x1c))(1)

__seterrormode(&arg1[6])
int32_t var_8_5 = 4
int32_t* ecx_9 = arg1[5]

if (ecx_9 != 0)
    arg1[5] = 0
    int32_t ebx_1 = ecx_9[1]
    ecx_9[1] -= 1
    (**ecx_9)(ebx_1 - 1)

int32_t var_8_6 = 0xffffffff
int32_t result = ___crtSetUnhandledExceptionFilter(&arg1[6])
int32_t* ecx_10 = arg1[3]

if (ecx_10 != 0)
    int32_t var_8_7 = 5
    result = (*(*ecx_10 + 0x1c))(1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
