// 函数: sub_42d540
// 地址: 0x42d540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726de8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
char i

if (arg4 == 0)
label_42d5d9:
    struct IString::common::CStringWrapper::VTable* const var_30 =
        &common::CStringWrapper::`vftable'{for `IString'}
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    int32_t var_8_1 = 0
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    int32_t* ebx
    
    if (sub_63a470(esi, &var_30) != 0)
        char* edx_2 = &var_2c
        
        if (var_18_1 u>= 0x10)
            edx_2 = var_2c.d
        
        void* ecx_8
        
        if (*edx_2 != 0)
            char* ecx_9 = edx_2
            
            do
                i = *ecx_9
                ecx_9 = &ecx_9[1]
            while (i != 0)
            
            ecx_8 = ecx_9 - &ecx_9[1]
        else
            ecx_8 = nullptr
        
        sub_403490(arg3, edx_2, ecx_8)
        ebx.b = 1
    else
        ebx.b = 0
    
    var_30 = &common::CStringWrapper::`vftable'{for `IString'}
    
    if (var_18_1 u>= 0x10)
        sub_403160(var_2c.d, var_18_1 + 1, 1)
    
    i = ebx.b
else
    int32_t* ecx
    
    if (esi[5] u< 0x10)
        ecx = esi
    else
        ecx = *esi
    
    if ((*(*arg4 + 0x40))(ecx) == 0)
        goto label_42d5d9
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    char* edx = (*(*arg4 + 0x44))(esi)
    
    if (*edx != 0)
        char* ecx_4 = edx
        char* eax_7
        
        do
            eax_7.b = *ecx_4
            ecx_4 = &ecx_4[1]
        while (eax_7.b != 0)
        sub_403490(arg3, edx, ecx_4 - &ecx_4[1])
        i = 1
    else
        sub_403490(arg3, edx, nullptr)
        i = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return i
