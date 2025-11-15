// 函数: sub_5cb390
// 地址: 0x5cb390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740660
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__Smtx_lock_shared(&arg1[0x11])
int32_t esi = arg1[0x10]
__Smtx_unlock_shared(&arg1[0x11])
char* result

if (esi == 0)
    result.b = 0
else
    __Smtx_lock_shared(&arg1[0xd])
    int32_t esi_1 = arg1[0xc]
    __Smtx_unlock_shared(&arg1[0xd])
    
    if (esi_1 == 0)
    label_5cb5da:
        result.b = 1
    else
        int32_t var_68_1 = 0
        
        while (true)
            __Smtx_lock_shared(&arg1[0xd])
            int32_t* edi_2 = arg1[0xc]
            __Smtx_unlock_shared(&arg1[0xd])
            
            if (var_68_1 s>= (*(*edi_2 + 0x14))(eax_2))
                goto label_5cb5da
            
            struct IString::common::CStringWrapper::VTable* var_48 =
                &common::CStringWrapper::`vftable'{for `IString'}
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            char var_44 = 0
            int32_t var_8_1 = 0
            __Smtx_lock_shared(&arg1[0xd])
            int32_t* edi_3 = arg1[0xc]
            __Smtx_unlock_shared(&arg1[0xd])
            (*(*edi_3 + 0x18))(&var_48, var_68_1)
            char* edx_1 = &var_44
            int32_t var_18_1 = 0xf
            
            if (var_30_1 u>= 0x10)
                edx_1 = var_44.d
            
            int32_t var_1c_1 = 0
            char var_2c = 0
            void* eax_5
            
            if (*edx_1 != 0)
                char* eax_6 = edx_1
                char i
                
                do
                    i = *eax_6
                    eax_6 = &eax_6[1]
                while (i != 0)
                eax_5 = eax_6 - &eax_6[1]
            else
                eax_5 = nullptr
            
            sub_403490(&var_2c, edx_1, eax_5)
            var_8_1.b = 1
            char var_60
            char eax_8 = sub_407560(sub_404d80(&var_60, &var_2c), 0x76a75c)
            int32_t var_4c
            
            if (var_4c u>= 0x10)
                sub_403160(var_60.d, var_4c + 1, 1)
            
            var_4c = 0xf
            int32_t var_50_1 = 0
            var_60 = 0
            
            if (eax_8 != 0)
                if (sub_5ceaf0(arg1, &var_2c) == 0)
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                    
                    int32_t var_18_4 = 0xf
                    int32_t var_1c_4 = 0
                    var_2c = 0
                    sub_404c60(&var_48)
                    break
                
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                int32_t var_18_3 = 0xf
                int32_t var_1c_3 = 0
                var_2c = 0
                int32_t var_8_3 = 0xffffffff
                sub_404c60(&var_48)
            else
                if (var_18_1 u>= 0x10)
                    sub_403160(var_2c.d, var_18_1 + 1, 1)
                
                int32_t var_8_2 = 0xffffffff
                int32_t var_18_2 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
                var_48 = &common::CStringWrapper::`vftable'{for `IString'}
                
                if (var_30_1 u>= 0x10)
                    sub_403160(var_44.d, var_30_1 + 1, 1)
                    var_68_1 += 1
                    continue
            
            var_68_1 += 1
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
