// 函数: sub_4bafb0
// 地址: 0x4bafb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg2 + 4)
int32_t eax_3

if (ecx != 0)
    eax_3 = (*(*ecx + 8))(eax_2)
else
    eax_3 = 0

*arg1 = 0
arg1[2] = arg1[1]
sub_4bb400(&arg1[1], eax_3)
int32_t esi = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (eax_3 s> 0)
    while (true)
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_403490(&var_2c, "Frame", 5)
        int32_t var_8_1 = 0
        int32_t* ecx_4 = *(arg2 + 4)
        int32_t ebx_1
        
        if (ecx_4 != 0)
            char* edx_1 = &var_2c
            
            if (var_18_1 u>= 0x10)
                edx_1 = var_2c.d
            
            ebx_1 = (*(*ecx_4 + 0x24))(edx_1)
        else
            ebx_1 = 0xffffffff
        
        int32_t var_8_2 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        int32_t* ecx_7 = *(arg2 + 4)
        int32_t ecx_8
        
        if (ecx_7 != 0)
            ecx_8 = (*(*ecx_7 + 0x10))(esi, ebx_1, 0xffffffff)
        else
            ecx_8 = 0xffffffff
        
        void* var_5c
        int32_t var_48
        
        if (ecx_8 s< 0)
            struct _EXCEPTION_REGISTRATION_RECORD** var_18_2 = 0xf
            int32_t var_1c_2 = 0
            var_2c = 0
            int32_t var_8_4 = 1
            var_8_4.b = 2
            sub_45aae0(sub_4175e0(sub_403490(&var_2c, 0x761f5c, 0x38), &var_2c, &var_5c, U"\n"))
            
            if (var_48 u>= 0x10)
                sub_403160(var_5c, var_48 + 1, 1)
            
            if (var_18_2 u>= 0x10)
                sub_403160(var_2c.d, var_18_2 + 1, 1)
        else
            if (esi == 0)
                *arg1 = ecx_8
            
            if (*arg1 + esi != ecx_8)
                struct _EXCEPTION_REGISTRATION_RECORD** var_30_1 = 0xf
                int32_t var_34_1 = 0
                char var_44 = 0
                int32_t var_8_3 = 3
                var_8_3.b = 4
                sub_45aae0(sub_4175e0(sub_403490(&var_44, 0x761f98, 0x4e), &var_44, &var_5c, U"\n"))
                
                if (var_48 u>= 0x10)
                    sub_403160(var_5c, var_48 + 1, 1)
                
                if (var_30_1 u>= 0x10)
                    sub_403160(var_44.d, var_30_1 + 1, 1)
                    result.b = 0
                    goto label_4bb0cf
            else
                int16_t top = top + 1
                
                if (sub_4ba130(esi * 0x64 + arg1[1], esi, arg2).b != 0)
                    esi += 1
                    
                    if (esi s>= eax_3)
                        break
                    
                    continue
        result.b = 0
        goto label_4bb0cf

result.b = 1
label_4bb0cf:
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
