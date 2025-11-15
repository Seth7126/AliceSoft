// 函数: sub_5bafc0
// 地址: 0x5bafc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f945
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_5c = esi
int32_t* ecx = arg5
int32_t var_70 = arg3
int32_t* edi = *(arg2 + 0xc)
int32_t ebx_1 = *(arg2 + 0x10)
int32_t* result = arg4
int32_t* result_1 = result
int32_t* var_7c = ecx
int32_t var_54 = 0

if (edi == ebx_1)
label_5bb2d3:
    result.b = 1
else
    while (true)
        int32_t* var_6c
        int32_t* eax_5 = sub_432270(&var_6c, sub_56cd60(*edi, result, ecx, eax_2))
        int32_t* var_50 = nullptr
        SRWLOCK var_4c
        __builtin_memset(&var_4c, 0, 4)
        sub_4323a0(&var_50, eax_5)
        int32_t var_8_1 = 0
        SRWLOCK var_68
        __seterrormode(&var_68)
        var_8_1.b = 1
        int32_t* ecx_4 = var_6c
        
        if (ecx_4 != 0)
            var_6c = nullptr
            (*(*ecx_4 + 4))()
        
        var_8_1.b = 0
        ___crtSetUnhandledExceptionFilter(&var_68)
        __Smtx_lock_shared(&var_4c)
        bool var_45 = var_50 != 0
        __Smtx_unlock_shared(&var_4c)
        
        if (var_45 != 0)
            int32_t var_30_1 = 0xf
            int32_t var_34_1 = 0
            char var_44 = 0
            sub_403490(&var_44, "Combine(%d) Numof(%d)", 0x15)
            var_8_1.b = 2
            void* eax_7 = *edi
            int32_t eax_8
            int32_t edx_2
            edx_2:eax_8 = muls.dp.d(0x38e38e39, *(eax_7 + 0x20) - *(eax_7 + 0x1c))
            int32_t edx_3 = edx_2 s>> 3
            char var_2c
            sub_5be300(&var_54, &var_44, &var_2c, &var_54, (edx_3 u>> 0x1f) + edx_3)
            
            if (var_30_1 u>= 0x10)
                sub_403160(var_44.d, var_30_1 + 1, 1)
            
            int32_t eax_16 = *(esi + 0x50) + var_54
            var_45 = false
            int32_t var_90 = 0
            int32_t var_8c_1 = 0
            int32_t var_88_1 = 0
            var_8_1.b = 5
            int32_t* var_58
            sub_5be180(&var_45, &var_2c, &var_58, &var_45, &var_90)
            var_8_1.b = 7
            sub_5b47d0(&var_90)
            void* var_64
            sub_57f760(&var_64, &var_70)
            var_8_1.b = 8
            __Smtx_lock_shared(&var_4c)
            int32_t* esi_1 = var_50
            __Smtx_unlock_shared(&var_4c)
            int32_t* var_60
            int32_t var_18
            
            if (sub_57d4a0(var_64, esi_1, &var_2c) == 0)
                var_8_1.b = 9
                
                if (var_60 != 0)
                    bool cond:0_1 = var_60[1] != 1
                    var_60[1]
                    var_60[1] -= 1
                    
                    if (not(cond:0_1))
                        (**var_60)()
                        int32_t ebx_2 = var_60[2]
                        var_60[2] -= 1
                        
                        if (ebx_2 == 1)
                            (*(*var_60 + 4))()
                
                int32_t* esi_6 = var_58
                
                if (esi_6 != 0)
                    sub_5bd0e0(esi_6)
                    int32_t var_a8_17 = 0x54
                    operator new(esi_6)
                
                if (var_18 u>= 0x10)
                    sub_403160(var_2c.d, var_18 + 1, 1)
                
                int32_t var_18_1 = 0xf
                int32_t var_1c_2 = 0
                var_2c = 0
            else
                void* ecx_13 = var_64
                
                if (var_60 != 0)
                    var_60[1] += 1
                
                void* var_84 = ecx_13
                var_8_1.b = 0xc
                sub_56a250(&var_58[0xa], &var_84)
                var_8_1.b = 0xd
                
                if (var_60 != 0)
                    bool cond:1_1 = var_60[1] != 1
                    var_60[1]
                    var_60[1] -= 1
                    
                    if (not(cond:1_1))
                        (**var_60)()
                        bool cond:3_1 = var_60[2] != 1
                        var_60[2]
                        var_60[2] -= 1
                        
                        if (not(cond:3_1))
                            (*(*var_60 + 4))()
                
                var_8_1.b = 8
                sub_5c1f80(var_5c + 0x48, eax_16, &var_58)
                var_54 += 1
                var_8_1.b = 0xe
                
                if (var_60 != 0)
                    bool cond:2_1 = var_60[1] != 1
                    var_60[1]
                    var_60[1] -= 1
                    
                    if (not(cond:2_1))
                        (**var_60)()
                        bool cond:4_1 = var_60[2] != 1
                        var_60[2]
                        var_60[2] -= 1
                        
                        if (not(cond:4_1))
                            (*(*var_60 + 4))()
                
                int32_t* esi_4 = var_58
                
                if (esi_4 != 0)
                    sub_5bd0e0(esi_4)
                    int32_t var_a8_14 = 0x54
                    operator new(esi_4)
                
                if (var_18 u>= 0x10)
                    sub_403160(var_2c.d, var_18 + 1, 1)
                
                var_18 = 0xf
                int32_t var_1c_1 = 0
                var_2c = 0
                __seterrormode(&var_4c)
                int32_t var_8_2 = 0xf
                int32_t* ecx_23 = var_50
                
                if (ecx_23 != 0)
                    var_50 = nullptr
                    (*(*ecx_23 + 4))()
                
                int32_t var_8_3 = 0xffffffff
                ___crtSetUnhandledExceptionFilter(&var_4c)
                esi = var_5c
                edi = &edi[1]
                result = result_1
                ecx = var_7c
                
                if (edi == ebx_1)
                    goto label_5bb2d3
                
                continue
        
        __seterrormode(&var_4c)
        int32_t var_8_4 = 0xa
        int32_t* ecx_30 = var_50
        
        if (ecx_30 != 0)
            var_50 = nullptr
            (*(*ecx_30 + 4))()
        
        ___crtSetUnhandledExceptionFilter(&var_4c)
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
