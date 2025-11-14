// 函数: sub_495420
// 地址: 0x495420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb766
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::IFlatGraphicLayer::partsengine::CFlatView::VTable** var_10 = arg1
int32_t __saved_esi
int32_t eax_2 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::IFlatGraphicLayer::partsengine::CFlatView::VTable** var_10_1 = arg1
*arg1 = &partsengine::CFlatView::`vftable'{for `partsengine::IFlatGraphicLayer'}
int32_t var_4 = 1
int32_t result = sub_4954b0(arg1)
int32_t* ecx = arg1[0x3e]

if (ecx != 0)
    result = (*(*ecx + 4))(eax_2)
    arg1[0x3e] = 0

arg1[0xa] = &partsengine::CProjection::`vftable'

if (arg1[7] u>= 0x10)
    result = j__free(arg1[2])

arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
