// 函数: sub_45ccf0
// 地址: 0x45ccf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8470
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5

if (*(arg2 + 0x20) != 0)
    eax_5 = *(arg2 + 0x24)

void* ecx

if (*(arg2 + 0x20) == 0 || eax_5 == *(arg2 + 0x1c))
    ecx = nullptr
else
    ecx = eax_5 + 8

int32_t* result = sub_40c250(ecx + 4, "#gamename")

if (result.b != 0)
    void** var_28
    int32_t var_14
    
    if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
    label_45cdc8:
        sub_401f60(&var_28, "#gamename")
        int32_t var_4_1 = 0
        void** eax_8 = &var_28
        void* esi_3 = *(arg1 + 4)
        
        if (var_14 u>= 0x10)
            eax_8 = var_28
        
        sub_455870(eax_8)
        result = sub_403110(esi_3 + 4, &var_28, nullptr, 0xffffffff)
        goto label_45ce00
    
    result = **(arg2 + 0x24)
    *(arg2 + 0x24) = result
    
    if (*(arg2 + 0x20) == 0 || result == *(arg2 + 0x1c) || result == 0xfffffff8)
        goto label_45cdc8
    
    if (result[9] == 0x11)
        sub_401f60(&var_28, "#gamename")
        int32_t var_4 = 1
        result = sub_456ab0(*(arg1 + 4), &var_28, &result[2])
    label_45ce00:
        
        if (var_14 u>= 0x10)
            result = j__free(var_28)
    else if (arg3 + 4 != &result[3])
        result = sub_401ff0(arg3 + 4, &result[3], 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
