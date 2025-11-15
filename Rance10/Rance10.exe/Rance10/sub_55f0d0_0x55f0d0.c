// 函数: sub_55f0d0
// 地址: 0x55f0d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
char* edi

if (arg2[5] u< 0x10)
    edi = arg2
else
    edi = *arg2

while (true)
    int32_t* ecx_1
    
    if (arg2[5] u< 0x10)
        ecx_1 = arg2
    else
        ecx_1 = *arg2
    
    if (edi == arg2[4] + ecx_1)
        break
    
    struct _EXCEPTION_REGISTRATION_RECORD*** edx
    edx.b = *edi
    
    if (edx.b != 0x22)
        void* esi_1 = arg3[1]
        char* eax_12 = *arg3
        void* eax_13
        eax_13, edx = _memchr(eax_12, edx.b, esi_1 - eax_12)
        
        if (eax_13 != 0)
            esi_1 = eax_13
        
        if (esi_1 == arg3[1])
            sub_405500(&var_30, 1, *edi)
        else if (var_20 != 0)
            sub_424db0(arg1, &var_30)
            char* eax_15 = &var_30
            var_20 = 0
            
            if (result_1 u>= 0x10)
                eax_15 = var_30.d
            
            edi = &edi[1]
            *eax_15 = 0
            continue
    else
        sub_405500(&var_30, 1, 0x22)
        
        do
            edi = &edi[1]
            int32_t* ecx_3
            
            if (arg2[5] u< 0x10)
                ecx_3 = arg2
            else
                ecx_3 = *arg2
            
            if (edi == arg2[4] + ecx_3)
                break
            
            sub_405500(&var_30, 1, *edi)
        while (*edi != 0x22)
        
        int32_t* ecx_5
        
        if (arg2[5] u< 0x10)
            ecx_5 = arg2
        else
            ecx_5 = *arg2
        
        if (edi == arg2[4] + ecx_5)
            break
    
    edi = &edi[1]

if (var_20 != 0)
    sub_424db0(arg1, &var_30)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_30.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
