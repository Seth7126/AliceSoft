// 函数: sub_485fd0
// 地址: 0x485fd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ed88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** ecx_1 = (*(*arg2 + 0x20))("timemap_")
    
    if (ecx_1 s<= 0)
        result.b = 1
    else
        result = nullptr
        int32_t edi_1 = 0
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
        
        if (ecx_1 s> 0)
            do
                struct IString::common::CStringWrapper::VTable* var_30 =
                    &common::CStringWrapper::`vftable'{for `IString'}
                int32_t var_18_1 = 0xf
                int32_t var_1c_1 = 0
                char var_2c = 0
                int32_t var_8_1 = 0
                (*(*arg2 + 0x2c))(&var_30, edi_1)
                char* ecx_3 = &var_2c
                
                if (var_18_1 u>= 0x10)
                    ecx_3 = var_2c.d
                
                int32_t* eax_6 = (*(*arg2 + 0xc))(ecx_3)
                
                if (eax_6 != 0)
                    void* eax_10 = (*(*eax_6 + 0x14))(eax_2)
                    struct common::SuicideRefCounter<class IEXReader>::exfile::CEXReader::VTable** 
                        eax_12 = sub_46d3b0((*(*eax_6 + 0x18))(), eax_10)
                    (*(*eax_6 + 4))()
                    
                    if (eax_12 == 0)
                        sub_404c60(&var_30)
                        result.b = 0
                        goto label_486102
                    
                    if (sub_486130(arg1, eax_12) != 0)
                        result_1 += 1
                    
                    (*eax_12)->vFunc_1()
                    int32_t var_8_3 = 0xffffffff
                    sub_404c60(&var_30)
                else
                    int32_t var_8_2 = 0xffffffff
                    var_30 = &common::CStringWrapper::`vftable'{for `IString'}
                    
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                edi_1 += 1
            while (edi_1 s< ecx_1)
            
            result = result_1
        
        result.b = result s> 0
else
    result.b = 1

label_486102:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
