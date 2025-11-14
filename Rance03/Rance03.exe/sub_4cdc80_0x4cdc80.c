// 函数: sub_4cdc80
// 地址: 0x4cdc80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bef28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t var_98 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx
void* var_80 = ecx
void* ebx = arg5
var_84 = ebx
void** result

if (ebx != 0)
    int32_t eax_5 = sub_4c98e0(ecx, arg2)
    char var_74
    int32_t* eax_6 = sub_410930(eax_5, arg1, &var_74, U".")
    int32_t var_4 = 0
    void* var_44
    sub_410ad0(eax_6, eax_6, &var_44, arg2)
    var_4.b = 2
    int32_t var_60
    
    if (var_60 u>= 0x10)
        j__free(var_74.d)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    result = sub_4cc620(arg3, arg4, ebx, eax_5, &var_44)
    
    if (result.b != 0)
        void** var_5c
        sub_410930(result, &var_44, &var_5c, 0x6e1800)
        var_4.b = 3
        int32_t* ecx_5 = arg4[1]
        int32_t var_48
        int32_t esi_1
        void** edi_1
        
        if (ecx_5 != 0)
            void** edx_4 = &var_5c
            
            if (var_48 u>= 0x10)
                edx_4 = var_5c
            
            edi_1 = (*(*ecx_5 + 0x10))(edx_4)
            esi_1 = 0
        
        if (ecx_5 == 0 || edi_1 s<= 0)
        label_4cde62:
            ebx.b = 1
        else
            while (true)
                var_4.b = 4
                var_4.b = 5
                var_4.b = 4
                int32_t var_2c
                ebx.b = sub_4cdc80(
                    sub_410930(sub_401d70(arg4, &var_74, &var_5c, esi_1), &var_44, &var_2c, 
                        0x6e1848), 
                    &var_74, arg3, arg4, ebx).b == 0
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    j__free(var_2c)
                
                if (ebx.b != 0)
                    if (var_60_1 u>= 0x10)
                        j__free(var_74.d)
                    
                    ebx.b = 0
                    break
                
                var_4.b = 3
                
                if (var_60_1 u>= 0x10)
                    j__free(var_74.d)
                
                ebx = var_84
                esi_1 += 1
                
                if (esi_1 s>= edi_1)
                    goto label_4cde62
        
        if (var_48 u>= 0x10)
            j__free(var_5c)
        
        int32_t var_48_1 = 0xf
        int32_t var_4c_1 = 0
        var_5c.b = 0
    else
        ebx.b = 0
    
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_84)
return result
