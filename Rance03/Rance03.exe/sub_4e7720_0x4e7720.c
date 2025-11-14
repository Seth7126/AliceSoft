// 函数: sub_4e7720
// 地址: 0x4e7720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5eeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::VTable** eax_3 = sub_69adc6(0x4b0)
struct IInterface::VTable** var_10_1 = eax_3
int32_t var_4 = 0
struct IInterface::VTable** result

if (eax_3 == 0)
    result = nullptr
else
    result = sub_4a17b0(eax_3, arg2, *(arg1 + 0x18), *(arg1 + 0x24), 0)

int32_t var_4_1 = 0xffffffff
result[1][0xd].vFunc_0(*(arg1 + 0x1c))
*(*(arg1 + 0xc) + ((arg2 - *(arg1 + 8)) << 2)) = result
void* ecx_4 = *(arg1 + 0x28)

if (ecx_4 != 0)
    int32_t var_24_1 = arg2
    sub_4e7bb0(ecx_4)

int32_t* ecx_5 = *(arg1 + 0x20)

if (ecx_5 != 0)
    (*(*ecx_5 + 4))(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
