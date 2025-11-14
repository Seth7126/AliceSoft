// 函数: sub_4cf830
// 地址: 0x4cf830
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcd10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *arg1
uint32_t esi_2 = arg1[1] - eax_3 - 4
int32_t ebp = *eax_3
int32_t* var_18
sub_448e90(&var_18, esi_2)
int32_t var_4 = 0
int32_t* edi = var_18
sub_69d850(edi, *arg1 + 4, esi_2, eax_2)
struct commonsystemdata::CZlibDecompressor::VTable* const var_20 =
    &commonsystemdata::CZlibDecompressor::`vftable'
int32_t var_1c = 0
var_4.b = 1
struct IDecompressor::nutria::CZlibDecompressor::VTable** esi_3 = sub_69adc6(8)

if (esi_3 == 0)
    esi_3 = nullptr
else
    *esi_3 = &nutria::CZlibDecompressor::`vftable'{for `IDecompressor'}
    esi_3[1] = 1

struct IDecompressor::nutria::CZlibDecompressor::VTable** var_1c_1 = esi_3
sub_403540(arg1, ebp)
int32_t* ebx
int32_t var_14

if (esi_3 != 0)
    ebx.b = (*esi_3)->vFunc_2(*arg1, ebp, edi, var_14 - edi)
else
    ebx.b = 0
var_4.b = 0

if (esi_3 != 0)
    (*esi_3)->vFunc_1()

if (edi != 0)
    j__free(edi)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
