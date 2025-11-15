// 函数: sub_41ef40
// 地址: 0x41ef40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728d2e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_80 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_60 = nullptr
int32_t i = 0
int32_t var_58 = 0
int32_t var_8_1 = 0
int32_t ebx

if (sub_420c00(*(arg1 + 4), &var_60, arg2) != 0)
    struct fileimage::CFileImageMaker::VTable* const var_54 = &fileimage::CFileImageMaker::`vftable'
    void* var_50 = nullptr
    char* var_4c_1 = nullptr
    int32_t var_48_1 = 0
    var_8_1.b = 2
    void* esi_1 = var_60
    sub_6ca100(&var_54, (i - esi_1) s>> 6)
    
    if (esi_1 != i)
        void* esi_2 = esi_1 + 0x24
        
        do
            sub_6ca100(&var_54, *(esi_2 - 0x20))
            sub_6ca100(&var_54, *(esi_2 - 0x1c))
            sub_6ca100(&var_54, *(esi_2 - 0x18))
            int32_t eax_7 = *esi_2
            void* ecx_5 = esi_2 - 0x14
            void* edx_1
            
            if (eax_7 u< 0x10)
                edx_1 = ecx_5
            else
                edx_1 = *ecx_5
            
            if (eax_7 u>= 0x10)
                ecx_5 = *ecx_5
            
            int32_t var_84_5 = 0.d
            sub_6ca200(&var_50, var_4c_1, ecx_5, edx_1 + *(esi_2 - 4))
            char var_41 = 0
            sub_4263a0(&var_50, &var_41)
            int32_t edx_2 = *(esi_2 + 0x18)
            void* ecx_8 = esi_2 + 4
            void* eax_9
            
            if (edx_2 u< 0x10)
                eax_9 = ecx_8
            else
                eax_9 = *ecx_8
            
            if (edx_2 u>= 0x10)
                ecx_8 = *ecx_8
            
            int32_t var_84_7 = 0.d
            sub_6ca200(&var_50, var_4c_1, ecx_8, eax_9 + *(esi_2 + 0x14))
            var_41 = 0
            sub_4263a0(&var_50, &var_41)
            esi_2 += 0x40
        while (esi_2 - 0x24 != i)
    
    struct win32only::CFileMapping::VTable* const var_40 = &win32only::CFileMapping::`vftable'
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30_1 = 0
    int32_t var_3c_1 = 0
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    var_8_1.b = 3
    
    if (sub_41f180(&var_40, &var_54) != 0)
        SendMessageA(*(arg1 + 0xc), 0x80a, arg2, 0)
        ebx.b = 1
    else
        ebx.b = 0
    
    var_40 = &win32only::CFileMapping::`vftable'
    sub_6cdf10(&var_40)
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30_1.d, var_1c_1 + 1, 1)
    
    void* ecx_13 = var_50
    int32_t var_1c_2 = 0xf
    int32_t var_20_2 = 0
    char var_30_2 = 0
    
    if (ecx_13 != 0)
        sub_403160(ecx_13, var_48_1 - ecx_13, 1)
else
    ebx.b = 0

int32_t var_8_2 = 5
sub_41f4b0(&var_60)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
