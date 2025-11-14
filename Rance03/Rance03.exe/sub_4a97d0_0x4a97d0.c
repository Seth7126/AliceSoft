// 函数: sub_4a97d0
// 地址: 0x4a97d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcd10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
int32_t result = (*(*arg2 + 8))(__security_cookie ^ &__saved_edi)

if (result s> 1)
    int32_t* var_18
    sub_448e90(&var_18, (result << 2) + 0xfffffffc)
    int32_t var_4 = 0
    int32_t ebp_1 = *(*(*arg2 + 0x10))(0)
    int32_t* eax_7 = (*(*arg2 + 0x10))(1, (result << 2) + 0xfffffffc)
    int32_t* edi_1 = var_18
    sub_69d850(edi_1, eax_7)
    struct commonsystemdata::CZlibDecompressor::VTable* const var_20_1 =
        &commonsystemdata::CZlibDecompressor::`vftable'
    int32_t var_1c_1 = 0
    var_4.b = 1
    struct IDecompressor::nutria::CZlibDecompressor::VTable** esi_2 = sub_69adc6(8)
    
    if (esi_2 == 0)
        esi_2 = nullptr
    else
        *esi_2 = &nutria::CZlibDecompressor::`vftable'{for `IDecompressor'}
        esi_2[1] = 1
    
    struct IDecompressor::nutria::CZlibDecompressor::VTable** var_1c_2 = esi_2
    sub_403540(arg1, ebp_1)
    int32_t* ebx
    int32_t var_14
    
    if (esi_2 != 0)
        ebx.b = (*esi_2)->vFunc_2(*arg1, ebp_1, edi_1, var_14 - edi_1).b
    else
        ebx.b = 0
    var_4.b = 0
    
    if (esi_2 != 0)
        (*esi_2)->vFunc_1()
    
    if (edi_1 != 0)
        j__free(edi_1)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
