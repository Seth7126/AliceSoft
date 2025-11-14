// 函数: sub_489110
// 地址: 0x489110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bac91
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatEmitterView::`vftable'{for `partsengine::IFlatGraphicLayer'}
int32_t var_4 = 2
sub_489480(arg1)
int32_t* ecx = arg1[0x10]

if (ecx != 0)
    struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable** var_1c_1 = arg1
    int32_t* var_20_1 = ecx
    sub_48c2c0(ecx, arg1[0x11])
    j__free(arg1[0x10])
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

int32_t eax_3 = arg1[0xc]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0xc] = 0
    arg1[0xd] = 0
    arg1[0xe] = 0

int32_t result = arg1[7]

if (result != 0)
    result = j__free(result)
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
