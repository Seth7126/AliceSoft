// 函数: sub_427e50
// 地址: 0x427e50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729998
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_427910(arg1)
int32_t edx = *arg2
struct advengine::CTokenAnalyser::VTable* var_78
sub_42b840(&var_78, edx, arg2[1] - edx - 1 + edx)
int32_t var_8_1 = 0
void* ebx

if (sub_427c60(arg3, &var_78) != 0)
    char eax_8
    int32_t edx_1
    eax_8, edx_1 = sub_42c740(&var_78)
    
    if (eax_8 == 0)
        char i
        
        do
            struct advengine::CToken::VTable* var_3c
            sub_42b9d0(&var_78, &var_3c)
            var_8_1.b = 1
            int32_t var_74
            int32_t var_70
            int32_t var_38
            
            if (var_38 == 0xf)
                var_70 = var_74
                edx_1 = sub_42b720(&var_3c)
                break
            
            if (var_38 == 0xd)
                int32_t var_60
                sub_42ca30(&var_60, &var_70)
                var_70 = var_74
                
                if (sub_428010(arg1, &var_78) != 0)
                    int32_t var_5c = var_5c - 4
                else
                    int32_t edx_2 = var_60
                    
                    if (edx_2 != var_5c)
                        var_70 = *(edx_2 + ((var_5c - edx_2) s>> 2 << 2) - 4)
                        var_5c -= 4
            
            var_8_1.b = 0
            var_3c = &advengine::CToken::`vftable'
            int32_t var_20
            void* var_34
            
            if (var_20 u>= 0x10)
                sub_403160(var_34, var_20 + 1, 1)
            i, edx_1 = sub_42c740(&var_78)
        while (i == 0)
    
    int32_t var_48 = 0
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    var_8_1.b = 2
    int32_t* var_b4 = &std::_Func_impl<class <lambda_9d98934fe27a3a59229b2f4978dd24d2>,class std::allocator<int32_t>,void,class advengine::CToken const&>::`vftable'{for `std::_Func_base<void, class advengine::CToken const&>'}
    int32_t* var_b0_1 = &var_48
    int32_t** var_90_6 = &var_b4
    
    if (sub_427a10(&var_b4, edx_1, &var_78, var_b4) != 0)
        if (arg1 + 0x1c != &var_48)
            int32_t ecx_10 = *(arg1 + 0x1c)
            *(arg1 + 0x1c) = var_48
            var_48 = ecx_10
            int32_t ecx_11 = *(arg1 + 0x20)
            *(arg1 + 0x20) = var_44_1
            int32_t var_44_2 = ecx_11
            int32_t ecx_12 = *(arg1 + 0x24)
            *(arg1 + 0x24) = var_40_1
            int32_t var_40_2 = ecx_12
        
        ebx.b = 1
    else
        ebx.b = 0
    
    sub_429140(&var_48)
else
    ebx.b = 0

sub_42b960(&var_78)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
