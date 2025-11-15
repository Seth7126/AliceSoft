// 函数: sub_4f56e0
// 地址: 0x4f56e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7363b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CGUIEngine::`vftable'
arg1[1] = &partsengine::CFinalizer<class partsengine::CGUIEngine>::`vftable'{for `IInterface'}
arg1[2] = 0
sub_4d52a0(&arg1[3])
int32_t var_8_1 = 0
sub_524480(&arg1[0x17])
arg1[0x26] = &partsengine::CSoundManager::`vftable'
var_8_1.b = 2
void* var_18 = &arg1[0x27]
arg1[0x27] = &partsengine::CLLPartsFactory::`vftable'
arg1[0x28] = &arg1[0x26]
arg1[0x29] = &arg1[3]
sub_4c5500(&arg1[0x2a])
var_8_1.b = 3
sub_51ae60(&arg1[0x3d], &arg1[0x17], &arg1[0x27])
var_8_1.b = 4
struct partsengine::CGUIScene::VTable** eax_4 = sub_6e810c(0xc0)
struct partsengine::CGUIScene::VTable** var_18_1 = eax_4
var_8_1.b = 5
arg1[0x6d] = sub_51ae60(eax_4, &arg1[0x17], &arg1[0x27])
arg1[0x6e] = &partsengine::CDrawD3DPluginManager::`vftable'{for `IDrawD3DPluginManager'}
arg1[0x6f] = 1
arg1[0x70] = 0
var_8_1.b = 6
void* var_18_2 = &arg1[0x71]
arg1[0x71] = 0
arg1[0x72] = 0
arg1[0x71] = sub_4bbf80()
arg1[0x73] = &common::CIDManager::`vftable'
arg1[0x74] = 1
arg1[0x75] = 0x3b9ac9ff
arg1[0x76] = 0x3b9ac9fe
__builtin_memset(&arg1[0x77], 0, 0x19)
arg1[2] = arg1
arg1[0x70] = arg1
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
