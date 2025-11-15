// 函数: sub_46fb70
// 地址: 0x46fb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d7c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 != 0)
    void* var_40 = nullptr
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_8_1 = 0
    void* var_2c
    char eax_4 = sub_407560(sub_403360(&var_2c, arg3), 0x75ce75)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    int32_t* ebx
    
    if (eax_4 == 0)
        sub_403360(&var_2c, arg3)
        var_8_1.b = 1
        void** var_58_4 = &var_2c
        void* eax_5 =
            Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection(arg1 + 0xc)
        var_8_1.b = 0
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c.b = 0
        
        if (eax_5 != 0)
            sub_4756c0(eax_5, &var_40)
            goto label_46fc69
        
        ebx.b = 0
    else
        sub_46ee90(arg1 + 0xc, &var_40)
    label_46fc69:
        int32_t eax_7 = (*(*arg2 + 8))(eax_2)
        void* esi_2 = var_40
        int32_t eax_11 = (var_3c_1 - esi_2) s/ 0x18
        (*(*arg2 + 0x44))(eax_11 + eax_7)
        int32_t edi_2 = 0
        
        if (eax_11 u<= 0)
        label_46fcc9:
            ebx.b = 1
        else
            while (true)
                void* eax_13
                
                if (*(esi_2 + 0x14) u< 0x10)
                    eax_13 = esi_2
                else
                    eax_13 = *esi_2
                
                if ((*(*arg2 + 0x34))(eax_7 + edi_2, eax_13) == 0)
                    break
                
                edi_2 += 1
                esi_2 += 0x18
                
                if (edi_2 u>= eax_11)
                    goto label_46fcc9
            
            ebx.b = 0
    
    sub_417070(&var_40)
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
