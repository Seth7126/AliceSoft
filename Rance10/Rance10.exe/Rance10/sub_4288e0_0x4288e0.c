// 函数: sub_4288e0
// 地址: 0x4288e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_84 = 0xffffffff
int32_t (* var_88)(void* arg1) = sub_729a88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct advengine::CToken::VTable* var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t var_ec = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_a8 = arg1
int32_t var_ac = 0
int32_t var_98 = 0
int32_t var_94 = 0
int32_t var_90 = 0
int32_t var_84_1 = 0
void* var_a4 = nullptr
int32_t var_a0 = 0
int32_t var_9c = 0
var_84_1.b = 1

if (sub_67edf0(arg2, &var_a4) != 0)
    void* ebx_1 = var_a4
    struct advengine::CTokenAnalyser::VTable* var_dc
    sub_42b840(&var_dc, ebx_1, var_a0 - ebx_1 - 1 + ebx_1)
    var_84_1.b = 2
    
    if (sub_42c740(&var_dc) == 0)
        while (true)
            struct advengine::CToken::VTable* var_58
            sub_42b9d0(&var_dc, &var_58)
            var_84_1.b = 3
            void* var_50
            
            if (sub_407560(&var_50, "void") != 0)
                struct advengine::CToken::VTable* var_30
                sub_42b9d0(&var_dc, &var_30)
                var_84_1.b = 4
                char var_28
                sub_424db0(&var_98, &var_28)
                
                while (sub_42c740(&var_dc) == 0)
                    int32_t esi_1 = sub_42b9d0(&var_dc, &var_80)[1]
                    var_80 = &advengine::CToken::`vftable'
                    int32_t var_64
                    void* var_78
                    
                    if (var_64 u>= 0x10)
                        sub_403160(var_78, var_64 + 1, 1)
                    
                    if (esi_1 == 0xf)
                        int32_t var_d8
                        int32_t var_d4_1 = var_d8
                        break
                
                char eax_16
                int32_t edx_2
                eax_16, edx_2 = sub_42c740(&var_dc)
                
                if (eax_16 != 0)
                    sub_42b720(&var_30)
                else
                    int32_t* var_114 = &std::_Func_impl<class <lambda_7a45136cb21245acaa96dab1bf059293>,class std::allocator<int32_t>,void,class advengine::CToken const&>::`vftable'{for `std::_Func_base<void, class advengine::CToken const&>'}
                    int32_t** var_f0_8 = &var_114
                    sub_427a10(&var_114, edx_2, &var_dc, var_114)
                    var_30 = &advengine::CToken::`vftable'
                    int32_t var_14
                    
                    if (var_14 u>= 0x10)
                        sub_403160(var_28.d, var_14 + 1, 1)
                    
                    var_84_1.b = 2
                    var_14 = 0xf
                    int32_t var_18_1 = 0
                    var_28 = 0
                    var_58 = &advengine::CToken::`vftable'
                    int32_t var_3c
                    
                    if (var_3c u>= 0x10)
                        sub_403160(var_50, var_3c + 1, 1)
                    
                    if (sub_42c740(&var_dc) != 0)
                        break
                    
                    continue
            
            sub_42b720(&var_58)
            break
    
    *arg1 = var_98
    arg1[1] = var_94
    arg1[2] = var_90
    var_98 = 0
    int32_t var_94_2 = 0
    int32_t var_90_2 = 0
    sub_42b960(&var_dc)
    
    if (ebx_1 != 0)
        sub_403160(ebx_1, var_9c - ebx_1, 1)
else
    void* edx_1 = var_a4
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0
    var_98 = 0
    int32_t var_94_1 = 0
    int32_t var_90_1 = 0
    
    if (edx_1 != 0)
        sub_403160(edx_1, var_9c - edx_1, 1)

sub_417070(&var_98)
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_80)
return arg1
