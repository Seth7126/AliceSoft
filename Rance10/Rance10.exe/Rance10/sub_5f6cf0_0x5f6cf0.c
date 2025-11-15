// 函数: sub_5f6cf0
// 地址: 0x5f6cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_741ff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_6d = 0
int32_t edi = (*(*arg1 + 8))(eax_2)
int32_t var_78 = edi
int32_t result = (*(*arg2 + 8))()
int32_t esi_1 = 0
int32_t result_1 = result
int32_t var_84 = 0

if (result s<= 0)
label_5f7020:
    result.b = var_6d
else
    while (true)
        int32_t var_74
        struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_96bfcace587c6a288ffee3679e8ba14c>,class std::allocator<int32_t>,bool,int32_t>::VTable
            * const var_3c
        struct std::_Func_base<bool, int32_t>::std::_Func_impl<class <lambda_96bfcace587c6a288ffee3679e8ba14c>,class std::allocator<int32_t>,bool,int32_t>::VTable
            * const* var_18_1
        int32_t esi_2
        
        switch ((**arg1)() - 0xa)
            case 0, 0x52
                int32_t* var_8c_1 = arg2
                var_3c = &std::_Func_impl<class <lambda_2afeb30b1c919a7abbfa93308b376b6d>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}
                int64_t var_38_1 = arg1.q
                int32_t var_30_1 = esi_1
                var_18_1 = &var_3c
                int32_t var_8_1 = 0
                int32_t eax_12 = (*(*arg1 + 8))()
                
                if (var_78 s> eax_12)
                    edi = eax_12
                
                esi_2 = 0
                
                if (edi s<= 0)
                label_5f6dd8:
                    esi_2 = 0xffffffff
                else
                    while (true)
                        var_74 = esi_2
                        
                        if (var_18_1 == 0)
                            goto label_5f6f89
                        
                        if ((*var_18_1)->__offset(0x8).d(&var_74) != 0)
                            break
                        
                        esi_2 += 1
                        
                        if (esi_2 s>= edi)
                            goto label_5f6dd8
                
                int32_t var_8_2 = 1
            label_5f6f3d:
                
                if (var_18_1 != 0)
                    (*var_18_1)->__offset(0x10).d(var_18_1 != &var_3c)
                
                int32_t var_8_9 = 0xffffffff
                result = (*(*arg1 + 0x50))(esi_2)
                bool cond:0_1
                
                if (result.b == 0)
                    cond:0_1 = var_6d == result.b
                    var_6d = result.b
                
                if (result.b != 0 || not(cond:0_1))
                    var_6d = 1
                
                esi_1 = var_84 + 1
                var_84 = esi_1
                
                if (esi_1 s>= result_1)
                    goto label_5f7020
                
                edi = var_78
                continue
            case 1
                int32_t* var_5c_1 = arg2
                var_3c = &std::_Func_impl<class <lambda_c8416a198b52a2f9e3521d8b9df3bb7b>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}
                int64_t var_38_3 = arg1.q
                int32_t var_30_3 = esi_1
                var_18_1 = &var_3c
                int32_t var_8_5 = 4
                int32_t eax_24 = (*(*arg1 + 8))()
                
                if (var_78 s> eax_24)
                    edi = eax_24
                
                esi_2 = 0
                
                if (edi s<= 0)
                label_5f6ec2:
                    esi_2 = 0xffffffff
                else
                    while (true)
                        var_74 = esi_2
                        
                        if (var_18_1 == 0)
                            goto label_5f6f89
                        
                        if ((*var_18_1)->__offset(0x8).d(&var_74) != 0)
                            break
                        
                        esi_2 += 1
                        
                        if (esi_2 s>= edi)
                            goto label_5f6ec2
                
                int32_t var_8_6 = 5
                goto label_5f6f3d
            case 2
                int32_t* var_44_1 = arg2
                var_3c = &std::_Func_impl<class <lambda_96bfcace587c6a288ffee3679e8ba14c>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}
                int64_t var_38_4 = arg1.q
                int32_t var_30_4 = esi_1
                var_18_1 = &var_3c
                int32_t var_8_7 = 6
                int32_t eax_30 = (*(*arg1 + 8))()
                
                if (var_78 s> eax_30)
                    edi = eax_30
                
                esi_2 = 0
                
                if (edi s<= 0)
                label_5f6f2e:
                    esi_2 = 0xffffffff
                else
                    while (true)
                        var_74 = esi_2
                        
                        if (var_18_1 == 0)
                        label_5f6f89:
                            sub_6d090a()
                            noreturn
                        
                        if ((*var_18_1)->__offset(0x8).d(&var_74) != 0)
                            break
                        
                        esi_2 += 1
                        
                        if (esi_2 s>= edi)
                            goto label_5f6f2e
                
                int32_t var_8_8 = 7
                goto label_5f6f3d
            case 0x25
                int32_t* var_98_1 = arg2
                var_3c = &std::_Func_impl<class <lambda_43393257983fa644cd700a84175ceb51>,class std::allocator<int32_t>,bool,int32_t>::`vftable'{for `std::_Func_base<bool, int32_t>'}
                int64_t var_38_2 = arg1.q
                int32_t var_30_2 = esi_1
                var_18_1 = &var_3c
                int32_t var_8_3 = 2
                int32_t eax_18 = (*(*arg1 + 8))()
                
                if (var_78 s> eax_18)
                    edi = eax_18
                
                esi_2 = 0
                
                if (edi s<= 0)
                label_5f6e52:
                    esi_2 = 0xffffffff
                else
                    while (true)
                        var_74 = esi_2
                        
                        if (var_18_1 == 0)
                            goto label_5f6f89
                        
                        if ((*var_18_1)->__offset(0x8).d(&var_74) != 0)
                            break
                        
                        esi_2 += 1
                        
                        if (esi_2 s>= edi)
                            goto label_5f6e52
                
                int32_t var_8_4 = 3
                goto label_5f6f3d
        
        result_1 = (**arg1)()
        int32_t var_40_1 = 0xf
        int32_t var_44_2 = 0
        char var_54 = 0
        sub_403490(&var_54, 0x76a8fc, 0x1e)
        int32_t var_8_10 = 8
        var_8_10.b = 9
        char var_6c
        sub_6c52e0(sub_409350(&result_1, &var_54, &var_6c, &result_1))
        int32_t var_58
        
        if (var_58 u>= 0x10)
            sub_403160(var_6c.d, var_58 + 1, 1)
        
        int32_t var_58_1 = 0xf
        int32_t var_5c_2 = 0
        var_6c = 0
        
        if (var_40_1 u>= 0x10)
            sub_403160(var_54.d, var_40_1 + 1, 1)
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
