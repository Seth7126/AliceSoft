// 函数: sub_491950
// 地址: 0x491950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb38c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSprite::partsengine::CFlatSprite::VTable** var_10 = arg1
*arg1 = &partsengine::CFlatSprite::`vftable'{for `partsengine::CSprite'}
arg1[1] = 1
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_401ff0(&arg1[2], &data_74f614, 0, 0xffffffff)
int32_t var_4 = 0
arg1[8].b = 1
arg1[9] = &partsengine::CRect::`vftable'
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
var_4.b = 1
struct partsengine::IFlatGraphicLayer::partsengine::CFlatView::VTable** edi = arg2
sub_492e80(&arg1[0xe], edi)
var_4.b = 2
arg1[0x1b] = arg3
arg1[0x1d] = edi
struct partsengine::IFlatGraphicLayer::partsengine::CFlatView::VTable** eax_4 = sub_69adc6(0x170)
arg2 = eax_4
var_4.b = 3

if (eax_4 == 0)
    arg1[0x1c] = 0
else
    arg1[0x1c] = sub_4951a0(eax_4, edi, &arg1[0xe])

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
