// 函数: sub_5663b0
// 地址: 0x5663b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73befc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = *(arg1 + 0x54)
int32_t ebx = *(arg1 + 0x58)

if (esi != ebx)
    void* __offset(_RTL_SRWLOCK, 0x8) eax_3 = &esi[1]
    SRWLOCK* var_14_1 = eax_3
    
    do
        __Smtx_lock_shared(eax_3)
        int32_t edi_1 = *esi
        __Smtx_unlock_shared(var_14_1)
        
        if (edi_1 != 0)
            __Smtx_lock_shared(var_14_1)
            void* eax_4 = *esi
            __Smtx_unlock_shared(var_14_1)
            void* ecx = *(eax_4 + 0x1d0)
            
            if (ecx != 0)
                sub_5c75f0(ecx)
            
            __seterrormode(eax_4 + 0x1cc)
            int32_t var_8_1 = 0
            int32_t* ecx_1 = *(eax_4 + 0x1c8)
            
            if (ecx_1 != 0)
                *(eax_4 + 0x1c8) = 0
                (*(*ecx_1 + 4))(eax_2)
            
            int32_t var_8_2 = 0xffffffff
            ___crtSetUnhandledExceptionFilter(eax_4 + 0x1cc)
        
        esi = &esi[2]
        eax_3 = &var_14_1[2]
        var_14_1 = eax_3
    while (esi != ebx)

__Smtx_lock_shared(arg1 + 0x14)
int32_t esi_1 = *(arg1 + 0x10)
__Smtx_unlock_shared(arg1 + 0x14)

if (esi_1 != 0)
    __Smtx_lock_shared(arg1 + 0x14)
    int32_t* edi_6 = *(arg1 + 0x10)
    __Smtx_unlock_shared(arg1 + 0x14)
    (*(*edi_6 + 0x3c))(arg1)
    __seterrormode(arg1 + 0x14)
    int32_t var_8_3 = 1
    int32_t* ecx_3 = *(arg1 + 0x10)
    
    if (ecx_3 != 0)
        *(arg1 + 0x10) = 0
        (*(*ecx_3 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(arg1 + 0x14)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
