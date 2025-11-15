// 函数: sub_511d60
// 地址: 0x511d60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7380e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if (arg5 == 0)
    result.b = 0
else
    int32_t* ecx = *(arg4 + 4)
    
    if (ecx == 0)
    label_511fad:
        result.b = 1
    else
        char* ebx_1 = (*(*ecx + 0x14))(eax_2)
        int32_t esi_1 = 0
        struct common::CEXTreeReader::VTable* const var_4c
        void** var_2c
        char* var_18
        
        if (ebx_1 s> 0)
            var_4c = &common::CEXTreeReader::`vftable'
            
            while (true)
                sub_403dc0(arg4, &var_2c, esi_1)
                int32_t var_8_1 = 0
                int32_t* ecx_2 = *(arg4 + 4)
                int32_t eax_4
                
                if (ecx_2 != 0)
                    void** edx_1 = &var_2c
                    
                    if (var_18 u>= 0x10)
                        edx_1 = var_2c
                    
                    eax_4 = (*(*ecx_2 + 0x24))(edx_1)
                else
                    eax_4 = 0
                
                int32_t var_48_1 = eax_4
                var_8_1.b = 1
                bool cond:2_1 = sub_514320(arg1, &var_2c, arg2, arg3, &var_4c, arg5, arg6) == 0
                var_8_1.b = 0
                var_4c = &common::CEXTreeReader::`vftable'
                
                if (cond:2_1 != 0)
                    break
                
                int32_t var_8_2 = 0xffffffff
                
                if (var_18 u>= 0x10)
                    sub_403160(var_2c, &var_18[1], 1)
                
                esi_1 += 1
                
                if (esi_1 s>= ebx_1)
                    goto label_511e4f
            
            goto label_511e81
        
    label_511e4f:
        int32_t esi_2 = 0
        
        if (ebx_1 s<= 0)
        label_511f0b:
            int32_t esi_3 = 0
            
            if (ebx_1 s<= 0)
            label_511fad_1:
                result.b = 1
            else
                var_4c = &common::CEXTreeReader::`vftable'
                void** var_44
                char* var_30
                
                while (true)
                    sub_403dc0(arg4, &var_44, esi_3)
                    int32_t var_8_5 = 4
                    int32_t* ecx_8 = *(arg4 + 4)
                    int32_t eax_13
                    
                    if (ecx_8 != 0)
                        void** edx_3 = &var_44
                        
                        if (var_30 u>= 0x10)
                            edx_3 = var_44
                        
                        eax_13 = (*(*ecx_8 + 0x24))(edx_3)
                    else
                        eax_13 = 0
                    
                    int32_t var_48_3 = eax_13
                    var_8_5.b = 5
                    bool cond:5_1 = sub_5148e0(arg1, &var_44, arg2, arg3, &var_4c, arg5, arg6) == 0
                    var_8_5.b = 4
                    var_4c = &common::CEXTreeReader::`vftable'
                    
                    if (cond:5_1 != 0)
                        break
                    
                    int32_t var_8_6 = 0xffffffff
                    
                    if (var_30 u>= 0x10)
                        sub_403160(var_44, &var_30[1], 1)
                    
                    esi_3 += 1
                    
                    if (esi_3 s>= ebx_1)
                        goto label_511fad_1
                
                if (var_30 u< 0x10)
                    result.b = 0
                else
                    sub_403160(var_44, &var_30[1], 1)
                    result.b = 0
        else
            var_4c = &common::CEXTreeReader::`vftable'
            
            while (true)
                sub_403dc0(arg4, &var_2c, esi_2)
                int32_t var_8_3 = 2
                int32_t* ecx_5 = *(arg4 + 4)
                int32_t eax_8
                
                if (ecx_5 != 0)
                    void** edx_2 = &var_2c
                    
                    if (var_18 u>= 0x10)
                        edx_2 = var_2c
                    
                    eax_8 = (*(*ecx_5 + 0x24))(edx_2)
                else
                    eax_8 = 0
                
                int32_t var_48_2 = eax_8
                var_8_3.b = 3
                bool cond:4_1 = sub_514630(arg1, &var_2c, arg2, arg3, &var_4c, arg5, arg6) == 0
                var_8_3.b = 2
                var_4c = &common::CEXTreeReader::`vftable'
                
                if (cond:4_1 != 0)
                    break
                
                int32_t var_8_4 = 0xffffffff
                
                if (var_18 u>= 0x10)
                    sub_403160(var_2c, &var_18[1], 1)
                
                esi_2 += 1
                
                if (esi_2 s>= ebx_1)
                    goto label_511f0b
            
        label_511e81:
            
            if (var_18 u< 0x10)
                result.b = 0
            else
                sub_403160(var_2c, &var_18[1], 1)
                result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
