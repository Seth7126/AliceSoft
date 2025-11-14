// 函数: sub_50ff50
// 地址: 0x50ff50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c1d61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IInterface::partsengine::CLLParts::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IInterface::partsengine::CLLParts::VTable** var_10_1 = arg1
*arg1 = &partsengine::CLLParts::`vftable'{for `IInterface'}
arg1[1] = 1
int32_t var_4 = 0
int32_t var_20 = sub_43e6d0(&arg1[2], 4)
arg1[5].b = 1
arg1[6] = 1
arg1[7].b = 1
arg1[8] = 0
arg1[9] = 0
sub_512310(&arg1[0xa])
var_4.b = 1
struct partsengine::CSprite::partsengine::CCGSprite::VTable*** i = arg1[0xa]
arg1[0xd] = arg2
arg1[0xe] = arg3
arg1[0xf] = arg4

for (; i != arg1[0xb]; i = &i[1])
    struct partsengine::CSprite::partsengine::CCGSprite::VTable** eax_6 = sub_69adc6(0x5c)
    arg2 = eax_6
    var_4.b = 2
    struct partsengine::CSprite::partsengine::CCGSprite::VTable** eax_7
    
    if (eax_6 == 0)
        eax_7 = nullptr
    else
        eax_7 = sub_4fdb30(eax_6)
    
    var_4.b = 1
    *i = eax_7

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
