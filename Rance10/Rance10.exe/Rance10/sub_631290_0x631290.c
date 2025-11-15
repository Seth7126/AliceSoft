// 函数: sub_631290
// 地址: 0x631290
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_745690
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_48 = arg3
int32_t var_74 = 0
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
var_8_1.b = 1
int64_t var_58

if (*(arg1 + 0x48) == 0)
    var_58 = 0
    *(arg1 + 0x40) = var_58.d
    *(arg1 + 0x44) = var_58:4.d

sub_631b70(&var_44, 8, 0)
void* eax_6 = arg1
char* esi = var_48
*(eax_6 + 0x4c) = 0
int16_t* result

if (esi != arg4)
    void* ecx_1 = eax_6 + 0x40
    
    while (true)
        int16_t* ebx_1 = &var_44
        
        if (var_30 u>= 8)
            ebx_1 = var_44.d
        
        int32_t eax_9 =
            (*(**(eax_6 + 4) + 0x18))(ecx_1, esi, arg4, &var_48, ebx_1, &ebx_1[var_34], &var_58:4)
        struct std::exception::VTable* const var_6c
        
        if (eax_9 s>= 0)
            if (eax_9 s<= 1)
                int32_t eax_11 = var_58:4.d
                
                if (ebx_1 u>= eax_11)
                    if (var_34 u>= 0x10)
                        if (*(arg1 + 0x4a) == 0)
                            void* var_88_5 = arg1
                            sub_62bfa0(&var_6c)
                            sub_70021b(&var_6c, 0x7de8c0)
                            noreturn
                        
                        *(arg2 + 0x14) = 7
                        *(arg2 + 0x10) = 0
                        *arg2 = 0
                        sub_631a50(arg2, arg1 + 0x28, 0, 0xffffffff)
                        sub_630db0(&var_2c)
                        sub_630db0(&var_44)
                        result = arg2
                        goto label_63144d
                    
                    sub_631b70(&var_44, 8, 0)
                else
                    sub_631c20(&var_2c, ebx_1, (eax_11 - ebx_1) s>> 1)
                
                esi = var_48
                goto label_6313d8
            
            if (eax_9 == 3)
                esi = var_48
                
                while (esi != arg4)
                    sub_631b70(&var_2c, 1, zx.w(*esi))
                    esi = &var_48[1]
                    var_48 = esi
                
            label_6313d8:
                *(arg1 + 0x4c) = esi - arg3
                eax_6 = arg1
                
                if (esi == arg4)
                    break
                
                continue
        
        if (*(arg1 + 0x4a) == 0)
            var_6c = &std::exception::`vftable'
            char const* const var_60 = "bad conversion"
            char* var_5c
            var_5c.b = 1
            int64_t var_68 = 0
            ___std_exception_copy(&var_60, &var_68)
            var_6c = &std::range_error::`vftable'{for `std::runtime_error'}
            sub_70021b(&var_6c, 0x7de8c0)
            noreturn
        
        *(arg2 + 0x14) = 7
        *(arg2 + 0x10) = 0
        *arg2 = 0
        sub_631a50(arg2, arg1 + 0x28, 0, 0xffffffff)
        
        if (var_18 u>= 8)
            sub_403160(var_2c.d, var_18 + 1, 2)
        
        int32_t var_18_2 = 7
        var_2c = 0
        int32_t var_1c_2 = 0
        
        if (var_30 u>= 8)
            sub_403160(var_44.d, var_30 + 1, 2)
        
        result = arg2
        goto label_63144d

*(arg2 + 0x14) = 7
*(arg2 + 0x10) = 0
*arg2 = 0
sub_631d30(arg2, &var_2c)

if (var_18 u>= 8)
    sub_403160(var_2c.d, var_18 + 1, 2)

int32_t var_18_1 = 7
var_2c = 0
int32_t var_1c_1 = 0

if (var_30 u>= 8)
    sub_403160(var_44.d, var_30 + 1, 2)

result = arg2
label_63144d:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
