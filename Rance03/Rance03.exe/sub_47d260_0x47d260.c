// 函数: sub_47d260
// 地址: 0x47d260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba190
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_esi
int32_t var_4c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d4f8
int32_t result

if (*(esi + 0x24) != *(esi + 0x28) && *(esi + 0x18) != 0)
    struct fileimage::CFileImageMaker::VTable* const var_3c = &fileimage::CFileImageMaker::`vftable'
    int32_t result_1 = 0
    int32_t* var_34_1 = nullptr
    int32_t var_30_1 = 0
    int32_t var_4 = 0
    int32_t var_28
    sub_401f60(&var_28, "MSK")
    var_4.b = 1
    sub_468f70(&var_3c, &var_28)
    var_4.b = 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    uint8_t var_3d = 0
    sub_414b60(&result_1, &var_3d)
    var_3d = 0
    sub_414b60(&result_1, &var_3d)
    var_3d = 0
    sub_414b60(&result_1, &var_3d)
    var_3d = 0
    sub_414b60(&result_1, &var_3d)
    sub_468f70(&var_3c, esi + 0x30)
    int32_t ebx_1 = *(esi + 0x20)
    var_3d = ebx_1.b
    sub_414b60(&result_1, &var_3d)
    var_3d = (ebx_1 u>> 8).b
    sub_414b60(&result_1, &var_3d)
    var_3d = (ebx_1 u>> 0x10).b
    sub_414b60(&result_1, &var_3d)
    var_3d = (ebx_1 u>> 0x18).b
    sub_414b60(&result_1, &var_3d)
    sub_468ec0(&var_3c, *(esi + 0x28) - *(esi + 0x24))
    int32_t eax_13 = *(esi + 0x28) - *(esi + 0x24)
    int32_t* ecx_13 = *(esi + 0x24)
    
    if (ecx_13 != 0 && eax_13 s> 0)
        int32_t var_2c
        int32_t var_50_13 = var_2c
        sub_468ff0(&result_1, var_34_1, ecx_13, eax_13 + ecx_13)
    
    void* esi_1 = esi + 8
    uint8_t ebx_2
    
    if (sub_604d10(esi_1, &result_1) != 0)
        ebx_2 = 1
    else
        if (*(esi_1 + 0x14) u>= 0x10)
            esi_1 = *esi_1
        
        void* var_50_15 = esi_1
        sub_64b530(0x6ddb30)
        ebx_2 = 0
    
    result = result_1
    
    if (result != 0)
        j__free(result)
    
    result.b = ebx_2
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
