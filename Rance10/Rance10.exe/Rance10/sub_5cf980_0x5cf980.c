// 函数: sub_5cf980
// 地址: 0x5cf980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740ec4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0

if ((*(*arg3 + 0x24))(var_3c) == 0)
    *arg2 = 0
    arg2[1] = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

__Smtx_lock_shared(arg1 + 0x20)
int32_t* edi_1 = *(arg1 + 0x1c)
__Smtx_unlock_shared(arg1 + 0x20)
int32_t* var_28
int32_t* eax_12 = sub_432270(&var_28, (*(*edi_1 + 0xc))((*(*arg3 + 0x10))((*(*arg3 + 0x14))(0x20))))
int32_t* var_20 = nullptr
SRWLOCK var_1c
__builtin_memset(&var_1c, 0, 4)
sub_4323a0(&var_20, eax_12)
int32_t var_8_1 = 0
SRWLOCK var_24
__seterrormode(&var_24)
var_8_1.b = 1
int32_t* ecx_8 = var_28

if (ecx_8 != 0)
    var_28 = nullptr
    (*(*ecx_8 + 4))()

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_24)
__Smtx_lock_shared(&var_1c)
int32_t* ebx
ebx.b = var_20 != 0
__Smtx_unlock_shared(&var_1c)
SRWLOCK* var_40_10 = &var_1c
int32_t* esp_1
int32_t* esi_2

if (ebx.b != 0)
    __Smtx_lock_shared(var_40_10)
    int32_t* esi_3 = var_20
    __Smtx_unlock_shared(&var_1c)
    esp_1 = &var_3c
    
    if (sub_5cfc10(arg1, arg3, esi_3, *(arg1 + 0x24)) == 0)
    label_5cfb47:
        esi_2 = arg2
        *esi_2 = 0
        esi_2[1] = 0
    else
        SRWLOCK* var_40_14 = &var_1c
        
        if ((*(*arg3 + 0x28))() == 0)
            __Smtx_lock_shared(var_40_14)
            int32_t* eax_20 = var_20
            __Smtx_unlock_shared(&var_1c)
            __Smtx_lock_shared(&var_1c)
            int32_t* ebx_1 = var_20
            __Smtx_unlock_shared(&var_1c)
            __Smtx_lock_shared(&var_1c)
            int32_t* edi_3 = var_20
            __Smtx_unlock_shared(&var_1c)
            int32_t esi_5 = **(arg1 + 0x24)
            int32_t eax_26 = (*(*ebx_1 + 0x10))((*(*eax_20 + 0x14))(0))
            int32_t var_44_1 = 0
            int32_t var_48_1 = 0
            int32_t* var_4c = edi_3
            esp_1 = &var_4c
            *(arg1 + 0x24)
            (*(esi_5 + 0x30))(var_4c, var_48_1, var_44_1, eax_26)
        else
            __Smtx_lock_shared(var_40_14)
            int32_t* esi_4 = var_20
            __Smtx_unlock_shared(&var_1c)
            esp_1 = &var_3c
            
            if (sub_5cfd60(esi_4, arg3) == 0)
                goto label_5cfb47
        
        esi_2 = arg2
        *(esp_1 - 4) = &var_20
        *esi_2 = 0
        esi_2[1] = 0
        sub_4323a0(esi_2)
    
    sub_431b10(&var_20)
else
    esi_2 = arg2
    *esi_2 = 0
    esi_2[1] = 0
    __seterrormode(var_40_10)
    int32_t var_8_2 = 2
    int32_t* ecx_9 = var_20
    
    if (ecx_9 != 0)
        var_20 = nullptr
        (*(*ecx_9 + 4))()
    
    ___crtSetUnhandledExceptionFilter(&var_1c)
    esp_1 = &var_3c

fsbase->NtTib.ExceptionList = ExceptionList
*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return esi_2
