// 函数: sub_597ff0
// 地址: 0x597ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bf2c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t xmm0 = *(arg1 + 0x80)
int32_t xmm1 = arg2[0x20]
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (not(xmm0 f<= xmm1))
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

if (not(xmm1 f<= xmm0))
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

void* var_24 = nullptr
int32_t* esi = nullptr
int32_t* var_18 = nullptr
int32_t ecx_4 = *(arg1 + 0x7c)
int32_t* var_20 = nullptr
void* var_1c = nullptr

if (ecx_4 s>= 0 && ecx_4 s< (*(arg1 + 0x68) - *(arg1 + 0x64)) s>> 3)
    sub_57f5d0(&var_24, *(arg1 + 0x64) + (ecx_4 << 3))
    esi = var_20

int32_t ecx_6 = arg2[0x1f]

if (ecx_6 s>= 0 && ecx_6 s< (arg2[0x1a] - arg2[0x19]) s>> 3)
    sub_57f5d0(&var_1c, arg2[0x19] + (ecx_6 << 3))

void* ecx_8 = var_24
eax_3.b = ecx_8 != 0
int32_t ecx_9

if (eax_3.b == 0)
    ecx_9 = 0
else
    ecx_9 = *(ecx_8 + 0x28)

void* edx = var_1c
eax_3.b = edx != 0
int32_t* eax_12

if (eax_3.b == 0)
    eax_12 = nullptr
else
    eax_12 = *(edx + 0x28)

int32_t* ebx

if (ecx_9 u< eax_12)
    ebx.b = 1
else if (ecx_9 u> eax_12)
    ebx.b = 0
else
    eax_12 = *(arg1 + 8)
    int32_t ecx_10 = arg2[2]
    
    if (eax_12 s< ecx_10)
        ebx.b = 1
    else if (eax_12 s> ecx_10)
        ebx.b = 0
    else if (sub_6caa60(arg1 + 0xc, &arg2[3]).b == 0)
        sub_6caac0(arg1 + 0xc, &arg2[3])
        ebx.b = 0
    else
        ebx.b = 1

int32_t var_8_1 = 0

if (var_18 != 0)
    bool cond:1_1 = var_18[1] != 1
    var_18[1]
    var_18[1] -= 1
    
    if (not(cond:1_1))
        (**var_18)(eax_2)
        bool cond:4_1 = var_18[2] != 1
        var_18[2]
        var_18[2] -= 1
        
        if (not(cond:4_1))
            (*(*var_18 + 4))()

int32_t var_8_2 = 1

if (esi != 0)
    bool cond:3_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:3_1))
        (**esi)(eax_2)
        int32_t edi_1 = esi[2]
        esi[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi + 4))()

eax_12.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_12
