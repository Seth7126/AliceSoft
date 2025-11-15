// 函数: sub_5884e0
// 地址: 0x5884e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d7f4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi_2

if (*(arg1 + 0x1c) == 0)
    __Smtx_lock_shared(&arg1[0x18])
    esi_2 = *(arg1 + 0x14)
    __Smtx_unlock_shared(&arg1[0x18])

char* result

if (*(arg1 + 0x1c) != 0 || esi_2 == 0)
    result.b = 0
else
    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** result_2
    sub_589b70(&result_2, &arg1[0x84])
    int32_t var_8_1 = 0
    struct sealengine::CDrawInstance::sealengine::CMotionObject::VTable** result_1 = result_2
    void* ebx
    
    if (sub_5959a0(result_1, &arg1[0x14], arg1[0x21] != 0, *(arg1 + 0x8c)) != 0)
        if (&arg1[0x1c] != &result_2)
            int32_t* ecx_7 = *(arg1 + 0x1c)
            result = result_1
            result_1 = nullptr
            *(arg1 + 0x1c) = result
            result_2 = nullptr
            
            if (ecx_7 != 0)
                var_8_1.b = 4
                (*(*ecx_7 + 0x1c))(1)
        
        result.b = 0
        char temp0_1 = arg1[0x20]
        arg1[0x20] = 0
        result.b = temp0_1
        ebx.b = 1
    else
        __Smtx_lock_shared(&arg1[0x18])
        void* edi_3 = *(arg1 + 0x14)
        __Smtx_unlock_shared(&arg1[0x18])
        void** edi_4 = edi_3 + 8
        
        if (edi_4[5] u>= 0x10)
            edi_4 = *edi_4
        
        void** var_50 = edi_4
        void var_2c
        sub_403360(&var_2c, 0x7683ec)
        var_8_1.b = 1
        var_8_1.b = 2
        void var_44
        sub_5e01e0(sub_409240(&var_50, &var_2c, &var_44, &var_50))
        sub_403320(&var_44)
        sub_403320(&var_2c)
        ebx.b = 0
    
    int32_t var_8_2 = 0xffffffff
    
    if (result_1 != 0)
        int32_t var_8_3 = 5
        (*result_1)->vFunc_7(1)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
