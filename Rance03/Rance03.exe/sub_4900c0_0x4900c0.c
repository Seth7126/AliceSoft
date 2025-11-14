// 函数: sub_4900c0
// 地址: 0x4900c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb2b1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CFlatLayerView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatLayerView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CFlatLayerView::`vftable'{for `IInterface'}
int32_t var_4 = 2
sub_490380(arg1)
int32_t eax_3 = arg1[0xd]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

int32_t eax_4 = arg1[0xa]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

int32_t result = arg1[7]

if (result != 0)
    result = j__free(result)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
