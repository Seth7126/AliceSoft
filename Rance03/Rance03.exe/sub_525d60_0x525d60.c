// 函数: sub_525d60
// 地址: 0x525d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3333
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_20 = &filesystem::CFile::`vftable'
HANDLE var_1c = 0xffffffff
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_4 = 0

if (sub_6049e0(&var_20, arg1 + 0x10) == 0)
    goto label_525e87

struct IMemory::common::CIMemory::VTable** result = sub_69adc6(0x20)
struct IMemory::common::CIMemory::VTable** result_1 = result
var_4.b = 1

if (result == 0)
    result = nullptr
else
    *result = &common::CIMemory::`vftable'{for `IMemory'}
    sub_5f4370(&result[1])
    result[5] = 0
    result[6] = 0
    result[7] = 0

var_4.b = 0
HANDLE edi_1 = var_1c
int32_t lDistanceToMove = *(arg2 + 4)

if (edi_1 == 0xffffffff || lDistanceToMove u>= var_14)
    (*result)->vFunc_1(eax_2)
    goto label_525e8b

SetFilePointer(edi_1, lDistanceToMove, nullptr, FILE_BEGIN)
int32_t ecx_2 = *(arg2 + 8)
int32_t lDistanceToMove_1 = lDistanceToMove

if (ecx_2 == 0)
    goto label_525eb7

bool cond:0_1 = (*result)->vFunc_2(ecx_2) != 0
struct IMemory::common::CIMemory::VTable* eax_9 = *result

if (not(cond:0_1))
    eax_9->vFunc_1(eax_2)
    goto label_525e8b

if (sub_604e90(&var_20, (*result)->vFunc_6(eax_9->vFunc_5(eax_2))) != 0)
    edi_1 = var_1c
label_525eb7:
    
    if (edi_1 != 0xffffffff)
        if (CloseHandle(edi_1) == 0)
            (*result)->vFunc_1(eax_2)
            goto label_525e8b
        
        edi_1 = 0xffffffff
        goto label_525e8d
else
    (*result)->vFunc_1()
label_525e87:
    edi_1 = var_1c
label_525e8b:
    result = nullptr
label_525e8d:
    
    if (edi_1 != 0xffffffff)
        CloseHandle(edi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
