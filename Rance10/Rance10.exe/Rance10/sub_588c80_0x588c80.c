// 函数: sub_588c80
// 地址: 0x588c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x28) == 0 && *(arg1 + 0x88) != 0)
    struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** var_4c
    sub_589c00(&var_4c, arg1 + 0x88)
    int32_t var_8_1 = 0
    void* var_48 = *(arg1 + 0x48)
    void* edi_1 = arg1 + 0x30
    struct sealengine::CDrawInstance::sealengine::CBillboard::VTable** esi_1 = var_4c
    sub_569640(esi_1)
    char** ebx
    
    if (sub_5691d0(esi_1, edi_1, var_48) == 0)
        if (*(edi_1 + 0x14) u>= 0x10)
            edi_1 = *edi_1
        
        var_48 = edi_1
        void var_2c
        sub_403360(&var_2c, 0x768388)
        var_8_1.b = 1
        var_8_1.b = 2
        void var_44
        sub_5e01e0(sub_409240(&var_48, &var_2c, &var_44, &var_48))
        sub_403320(&var_44)
        sub_403320(&var_2c)
        ebx.b = 0
    else
        if (&esi_1[0x14] != edi_1)
            sub_403590(&esi_1[0x14], edi_1, 0, 0xffffffff)
        
        esi_1[0x1a] = var_48
        char* ecx_3
        
        if (arg1 + 0x28 != &var_4c)
            ecx_3 = *(arg1 + 0x28)
            char* eax_6 = esi_1
            esi_1 = nullptr
            *(arg1 + 0x28) = eax_6
            
            if (ecx_3 != 0)
                (*(*ecx_3 + 0x1c))(1)
        
        ecx_3.b = 0
        char temp0_1 = *(arg1 + 0x2c)
        *(arg1 + 0x2c) = nullptr
        ecx_3.b = temp0_1
        ebx.b = 1
    
    if (esi_1 != 0)
        (*esi_1)->vFunc_7(1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
