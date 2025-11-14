// 函数: sub_45c520
// 地址: 0x45c520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8390
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_4c = arg1
void** edi = arg4
*(arg3 + 4) = 6
struct exfile::CDefineDataTree::VTable** eax_6 = sub_460a20(arg3)
sub_4681d0(eax_6, edi)
int32_t ebx
ebx.b = *(arg3 + 8)
struct exfile::CDefineDataTree::VTable** esi_1 = nullptr

if (ebx.b != 0)
    esi_1 = sub_69adc6(0x30)
    
    if (esi_1 == 0)
        esi_1 = nullptr
    else
        *esi_1 = &exfile::CDefineDataTree::`vftable'
        esi_1[6] = 0xf
        esi_1[5] = 0
        esi_1[1].b = 0
        __builtin_memset(&esi_1[7], 0, 0x14)
    
    sub_4681d0(esi_1, edi)

struct exfile::CDefineDataTree::VTable** eax_8 = eax_6

if (ebx.b != 0)
    eax_8 = esi_1

char result

if (sub_45c700(var_4c, arg2, eax_8) == 0)
    if (esi_1 != 0)
        (*esi_1)->vFunc_0(1)
    
    result = 0
else if (ebx.b == 0)
    result = 1
else
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    int32_t var_4 = 0
    
    if (sub_468590(eax_6, esi_1, &var_44) != 0)
        if (esi_1 != 0)
            (*esi_1)->vFunc_0(1)
        
        if (var_30_1 u>= 0x10)
            j__free(var_44.d)
        
        result = 1
    else
        if (esi_1 != 0)
            (*esi_1)->vFunc_0(1)
        
        if (edi[5] u>= 0x10)
            edi = *edi
        
        void** var_64_4 = edi
        var_4.b = 1
        int32_t var_2c
        sub_403110(&var_44, sub_4691f0(&var_2c, 0x6dc2cc), nullptr, 0xffffffff)
        var_4.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        sub_456a00(*(var_4c + 4), &var_44)
        
        if (var_30_1 u>= 0x10)
            j__free(var_44.d)
        
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_4c)
return result
