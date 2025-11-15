// 函数: sub_67eeb0
// 地址: 0x67eeb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_746988
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_3c = esi
int32_t edi
int32_t var_40 = edi
int32_t __saved_ebp
void** var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_34 = &filesystem::CFile::`vftable'
int32_t var_30 = 0xffffffff
int32_t var_2c = 0
void** var_28 = nullptr
void** var_48 = arg1
int32_t var_14_1 = 0
void*** esp_1 = &var_44

if (sub_67ed50(&var_34, var_48) == 0)
    goto label_67ef95

var_48 = 0x14
struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result =
    sub_6e810c(var_48)
struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result_1 = result
esp_1 = &var_44
__builtin_memset(result, 0, 0x14)
result[1] = 1
*result = &common::CIMemory::`vftable'{for `common::SuicideRefCounter<class IMemory>'}
result[2] = 0
result[3] = 0
result[4] = 0
int32_t edi_1

if (var_28 == 0)
label_67efbc:
    edi_1 = var_30
    
    if (edi_1 != 0xffffffff)
        *(esp_1 - 4) = edi_1
        
        if (CloseHandle() == 0)
            (*result)->vFunc_1()
            goto label_67ef98
        
        edi_1 = 0xffffffff
        goto label_67ef9a
else
    struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable* eax_5 = *result
    var_48 = var_28
    esp_1 = &var_48
    bool cond:0_1 = eax_5->vFunc_2(var_48) == 0
    struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable* eax_8 = *result
    
    if (cond:0_1)
        goto label_67ef92
    
    esp_1 = &var_48
    
    if (sub_67f160(&var_34, (*result)->vFunc_6(eax_8->vFunc_5())) != 0)
        goto label_67efbc
    
    eax_8 = *result
label_67ef92:
    eax_8->vFunc_1()
label_67ef95:
    edi_1 = var_30
label_67ef98:
    result = nullptr
label_67ef9a:
    
    if (edi_1 != 0xffffffff)
        *(esp_1 - 4) = edi_1
        CloseHandle()
fsbase->NtTib.ExceptionList = ExceptionList
*esp_1
esp_1[1]
esp_1[2]
return result
