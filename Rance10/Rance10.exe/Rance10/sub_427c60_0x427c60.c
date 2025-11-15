// 函数: sub_427c60
// 地址: 0x427c60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??$raise_error@Vdomain_error@std@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_94 = ebx
int32_t var_a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char result

if (sub_42c740(arg2) != 0)
label_427de7:
    result = 0
else
    while (true)
        struct advengine::CToken::VTable* var_64
        sub_42b9d0(arg2, &var_64)
        int32_t var_8_1 = 0
        void* var_5c
        int32_t var_48
        
        if (sub_407560(&var_5c, "void") == 0)
            ebx.b = 0
        else
            struct advengine::CToken::VTable* var_3c
            sub_42b9d0(arg2, &var_3c)
            var_8_1.b = 1
            int32_t* edx_1
            
            if (arg1[5] u< 0x10)
                edx_1 = arg1
            else
                edx_1 = *arg1
            
            int32_t* var_34
            int32_t* ecx_4 = &var_34
            int32_t edi_1 = arg1[4]
            int32_t eax_4 = edi_1
            int32_t var_20
            
            if (var_20 u>= 0x10)
                ecx_4 = var_34
            
            int32_t var_24
            
            if (var_24 u< edi_1)
                eax_4 = var_24
            
            if (sub_406ac0(eax_4, edx_1, ecx_4, eax_4) != 0 || var_24 u< edi_1 || var_24 u> edi_1)
                while (sub_42c740(arg2) == 0)
                    struct advengine::CToken::VTable* var_8c
                    int32_t edi_2 = sub_42b9d0(arg2, &var_8c)[1]
                    var_8c = &advengine::CToken::`vftable'
                    int32_t var_70
                    void* var_84
                    
                    if (var_70 u>= 0x10)
                        sub_403160(var_84, var_70 + 1, 1)
                    
                    if (edi_2 == 0xf)
                        *(arg2 + 8) = *(arg2 + 4)
                        break
                
                char eax_11
                int32_t edx_2
                eax_11, edx_2 = sub_42c740(arg2)
                
                if (eax_11 != 0)
                    sub_42b720(&var_3c)
                    sub_42b720(&var_64)
                    goto label_427de7
                
                int32_t* var_c8 = &std::_Func_impl<class <lambda_7a45136cb21245acaa96dab1bf059293>,class std::allocator<int32_t>,void,class advengine::CToken const&>::`vftable'{for `std::_Func_base<void, class advengine::CToken const&>'}
                int32_t** var_a4_6 = &var_c8
                sub_427a10(&var_c8, edx_2, arg2, var_c8)
                var_3c = &advengine::CToken::`vftable'
                
                if (var_20 u>= 0x10)
                    sub_403160(var_34, var_20 + 1, 1)
                
                int32_t var_8_2 = 0xffffffff
                var_20 = 0xf
                var_24 = 0
                var_34.b = 0
                var_64 = &advengine::CToken::`vftable'
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c, var_48 + 1, 1)
                
                if (sub_42c740(arg2) != 0)
                    goto label_427de7
                
                continue
            else
                *(arg2 + 8) = *(arg2 + 4)
                ebx.b = 1
                sub_42b720(&var_3c)
        
        var_64 = &advengine::CToken::`vftable'
        
        if (var_48 u>= 0x10)
            sub_403160(var_5c, var_48 + 1, 1)
        
        result = ebx.b
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
