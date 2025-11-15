// 函数: sub_5c71f0
// 地址: 0x5c71f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740234
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_8_1 = 0
void* var_18 = &arg1[3]
sub_5ca020(&arg1[3])
arg1[0x84] = 0
arg1[0x85] = 0
arg1[0x86] = 0
arg1[0x87] = 1
arg1[0x88] = 0
arg1[0x89].b = 0
arg1[0x8a] = 0
arg1[0x8b] = 0
arg1[0x8c] = 0
arg1[0x8d] = arg4
arg1[0x8e].b = 1
arg1[0x8f] = arg2
arg1[0x90] = arg3
arg1[0x91].b = 0
arg1[0x92] = 0xffffffff
sub_5dc200(&arg1[0x93])
arg1[0xca] = &sealengine::CSphereVolumeList::`vftable'
arg1[0xcb] = 0
arg1[0xcc] = 0
arg1[0xcd] = 0
*(arg1 + 0x338) = data_7fd4d8.q
arg1[0xd0] = data_7fd4e0
*(arg1 + 0x344) = data_7fd4d8.q
arg1[0xd3] = data_7fd4e0
sub_6cac10(&arg1[0xd4])
sub_6cac10(&arg1[0xe4])
__builtin_memset(&arg1[0xf4], 0, 0x19)
arg1[0xfb] = 0
arg1[0xfc].b = 0
sub_575720(&arg1[0xfd])
arg1[0x123].b = 0
__builtin_memset(&arg1[0x124], 0, 0x11)
arg1[0x129] = 0
arg1[0x12a].b = 0
arg1[0x12b].b = 0
sub_5dcd20(&arg1[0x12c])
arg1[0x15b] = &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}
arg1[0x15c] = 0
arg1[0x15d] = 0
arg1[0x15e] = 0
arg1[0x15f].w = 0x101
sub_6cac10(&arg1[0x160])
var_8_1.b = 0xa
arg1[0x170] = arg4
arg1[0x171].w = 1
arg1[0x172] = arg3
sub_5c7480(&arg1[0x173])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
