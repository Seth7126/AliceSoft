// 函数: sub_588030
// 地址: 0x588030
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d7a4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** result_2 = arg1
int32_t* var_4c
int32_t esi_2

if (arg1[3] == 0)
    var_4c = &arg1[5]
    __Smtx_lock_shared(&arg1[6])
    esi_2 = arg1[5]
    __Smtx_unlock_shared(&arg1[6])

struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** result

if (arg1[3] != 0 || esi_2 == 0)
    result.b = 0
else
    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** result_3 = result_2
    sub_589b30(&result_2, &result_3[0x21])
    int32_t var_8_1 = 0
    struct sealengine::CDrawInstance::sealengine::CPolyObject::VTable** result_1 = result_2
    void* ebx
    
    if (sub_5c3c20(result_1, &result_3[5], result_3[0x23]) != 0)
        if (&arg1[3] != &result_2)
            int32_t* ecx_7 = arg1[3]
            result = result_1
            result_1 = nullptr
            arg1[3] = result
            result_2 = nullptr
            
            if (ecx_7 != 0)
                var_8_1.b = 4
                (*(*ecx_7 + 0x1c))(1)
        
        result.b = 0
        result_3[4].b = 0
        result.b = result_3[4].b
        ebx.b = 1
    else
        int32_t* edi_2 = var_4c
        __Smtx_lock_shared(&edi_2[1])
        void* edi_3 = *edi_2
        __Smtx_unlock_shared(&edi_2[1])
        void** edi_4 = edi_3 + 8
        
        if (edi_4[5] u>= 0x10)
            edi_4 = *edi_4
        
        var_4c = edi_4
        void var_2c
        sub_403360(&var_2c, 0x76834c)
        var_8_1.b = 1
        var_8_1.b = 2
        void var_44
        sub_5e01e0(sub_409240(&var_4c, &var_2c, &var_44, &var_4c))
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
