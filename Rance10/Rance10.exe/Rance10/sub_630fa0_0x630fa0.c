// 函数: sub_630fa0
// 地址: 0x630fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745650
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_48 = arg3
int32_t var_74 = 0
int32_t var_30 = 0xf
void* var_34 = nullptr
char var_44 = 0
int32_t var_8_1 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_8_1.b = 1
int64_t var_58

if (*(arg1 + 0x48) == 0)
    var_58 = 0
    *(arg1 + 0x40) = var_58.d
    *(arg1 + 0x44) = var_58:4.d

sub_405500(&var_44, 8, 0)
void* eax_6 = arg1
char* esi = var_48
*(eax_6 + 0x4c) = 0
char* result

if (esi != arg4)
    void* ecx_1 = eax_6 + 0x40
    
    while (true)
        char* ebx_1 = &var_44
        
        if (var_30 u>= 0x10)
            ebx_1 = var_44.d
        
        int32_t eax_9 =
            (*(**(eax_6 + 4) + 0x1c))(ecx_1, esi, arg4, &var_48, ebx_1, var_34 + ebx_1, &var_58:4)
        struct std::exception::VTable* const var_6c
        
        if (eax_9 s>= 0)
            if (eax_9 s<= 1)
                int32_t eax_11 = var_58:4.d
                
                if (ebx_1 u>= eax_11)
                    if (var_34 u>= 0x10)
                        if (*(arg1 + 0x49) == 0)
                            void* var_88_5 = arg1
                            sub_62bfa0(&var_6c)
                            sub_70021b(&var_6c, 0x7de8c0)
                            noreturn
                        
                        *(arg2 + 0x14) = 0xf
                        *(arg2 + 0x10) = 0
                        *arg2 = 0
                        sub_403590(arg2, arg1 + 0x10, 0, 0xffffffff)
                        sub_403320(&var_2c)
                        sub_403320(&var_44)
                        result = arg2
                        goto label_63116a
                    
                    sub_405500(&var_44, 8, 0)
                else
                    sub_407430(&var_2c, ebx_1, eax_11 - ebx_1)
                
                esi = var_48
                goto label_6310f9
            
            if (eax_9 == 3)
                esi = var_48
                
                while (esi != arg4)
                    sub_405500(&var_2c, 1, *esi)
                    esi = &var_48[2]
                    var_48 = esi
                
            label_6310f9:
                *(arg1 + 0x4c) = (esi - arg3) s>> 1
                eax_6 = arg1
                
                if (esi == arg4)
                    break
                
                continue
        
        if (*(arg1 + 0x49) == 0)
            var_6c = &std::exception::`vftable'
            char const* const var_60 = "bad conversion"
            char* var_5c
            var_5c.b = 1
            int64_t var_68 = 0
            ___std_exception_copy(&var_60, &var_68)
            var_6c = &std::range_error::`vftable'{for `std::runtime_error'}
            sub_70021b(&var_6c, 0x7de8c0)
            noreturn
        
        *(arg2 + 0x14) = 0xf
        *(arg2 + 0x10) = 0
        *arg2 = 0
        sub_403590(arg2, arg1 + 0x10, 0, 0xffffffff)
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c.d, var_18 + 1, 1)
        
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (var_30 u>= 0x10)
            sub_403160(var_44.d, var_30 + 1, 1)
        
        result = arg2
        goto label_63116a

*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
sub_4056a0(arg2, &var_2c)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

result = arg2
label_63116a:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
