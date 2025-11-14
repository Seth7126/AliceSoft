// 函数: sub_4a9360
// 地址: 0x4a9360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcc52
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIEngine::VTable** var_14 = arg1
*arg1 = &partsengine::CGUIEngine::`vftable'
arg1[1] = &partsengine::CFlatEngine::`vftable'
arg1[2] = 0
arg1[3].b = 0
arg1[4] = 0
arg1[5] = 0
arg1[4] = sub_42f580()
int32_t var_4 = 0
sub_4e56b0(&arg1[6])
arg1[0x15] = &partsengine::CSoundManager::`vftable'
arg1[0x16] = &partsengine::CLLPartsFactory::`vftable'
arg1[0x17] = &arg1[0x15]
arg1[0x18] = &arg1[1]
arg1[0x19] = &partsengine::CConstructionSurfaceMaker::`vftable'
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
var_4.b = 3
sub_4d5c20(&arg1[0x1d], &arg1[6], &arg1[0x15], &arg1[0x16])
var_4.b = 4
struct partsengine::CGUIScene::VTable** eax_4 = sub_69adc6(0x180)
struct partsengine::CGUIScene::VTable** var_10 = eax_4
var_4.b = 5

if (eax_4 == 0)
    arg1[0x7d] = 0
else
    arg1[0x7d] = sub_4d5c20(eax_4, &arg1[6], &arg1[0x15], &arg1[0x16])

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
