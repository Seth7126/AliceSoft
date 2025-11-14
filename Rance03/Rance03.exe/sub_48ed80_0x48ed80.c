// 函数: sub_48ed80
// 地址: 0x48ed80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb1c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CFlatSpriteView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CFlatSpriteView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CFlatSpriteView::`vftable'{for `IInterface'}
int32_t var_4 = 1
sub_48eec0(arg1)
int32_t* eax_3 = arg1[8]

if (eax_3 != 0)
    sub_4107c0(eax_3, arg1[9])
    j__free(arg1[8])
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xa] = 0

int32_t result = arg1[5]

if (result != 0)
    result = j__free(result)
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
