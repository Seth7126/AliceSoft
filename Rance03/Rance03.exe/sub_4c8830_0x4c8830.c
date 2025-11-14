// 函数: sub_4c8830
// 地址: 0x4c8830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t ebx
int32_t var_34 = ebx
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0
var_30 = arg2[4]
int32_t var_14 = 0xf
void* var_18 = nullptr
char var_28 = 0
sub_402110(&var_28, 0x6da4eb, nullptr)
int32_t edx = var_30
int32_t esi = 0
int32_t var_4 = 0

if (edx s<= 0)
label_4c8958:
    sub_402210(arg2, arg2[4] - var_18, var_18)
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    int32_t ecx_5 = var_14
    
    if (ecx_5 u>= 0x10)
        *arg1 = var_28.d
    else if (var_18 != 0xffffffff)
        _memcpy(arg1, &var_28, var_18 + 1, eax_4)
        ecx_5 = var_14
    
    *(arg1 + 0x10) = var_18
    *(arg1 + 0x14) = ecx_5
else
    while (true)
        int32_t* eax_6
        
        if (arg2[5] u< 0x10)
            eax_6 = arg2
        else
            eax_6 = *arg2
        
        int32_t ecx_1 = var_14
        ebx.b = *(eax_6 + esi)
        
        if (ecx_1 u< 1)
            sub_4023a0(&var_28, 1, var_18)
            ecx_1 = var_14
            edx = var_30
        
        char* eax_7 = &var_28
        
        if (ecx_1 u>= 0x10)
            eax_7 = var_28.d
        
        *eax_7 = ebx.b
        char* eax_8 = &var_28
        var_18 = 1
        
        if (var_14 u>= 0x10)
            eax_8 = var_28.d
        
        eax_8[1] = 0
        
        if (ebx.b u< 0x81 || ebx.b u> 0x9f)
            ebx.b += 0x20
            
            if (ebx.b u<= 0xf)
                goto label_4c891d
        else
        label_4c891d:
            esi += 1
            
            if (edx s<= esi)
                *(arg1 + 0x14) = 0xf
                *(arg1 + 0x10) = 0
                *arg1 = 0
                sub_402110(arg1, 0x6da501, nullptr)
                
                if (var_14 u>= 0x10)
                    j__free(var_28.d)
                
                break
            
            int32_t* eax_9
            
            if (arg2[5] u< 0x10)
                eax_9 = arg2
            else
                eax_9 = *arg2
            
            sub_4031c0(&var_28, 1, *(eax_9 + esi))
            edx = var_30
        
        esi += 1
        
        if (esi s>= edx)
            goto label_4c8958

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return arg1
