// 函数: sub_5bd0a0
// 地址: 0x5bd0a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c978f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CJabFile::VTable** var_14 = arg1
*arg1 = &sys43vm::CJabFile::`vftable'
arg1[1] = &memory::CFastMemory::`vftable'
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_4 = 0
arg1[5] = &sys43vm::CMessageTextList::`vftable'
__builtin_memset(&arg1[6], 0, 0xbc)
var_4.b = 0xd
arg1[0x33] = sub_42f580()
var_4.b = 0xe
arg1[0x35] = 0
arg1[0x36] = 0
arg1[0x35] = sub_42f580()
var_4.b = 0xf
arg1[0x37] = 0
arg1[0x38] = 0
arg1[0x37] = sub_4203c0()
var_4.b = 0x10
arg1[0x39] = 0
arg1[0x3a] = 0
arg1[0x39] = sub_42f580()
arg1[0x3b] = 0
arg1[0x3c] = 0
arg1[0x3d] = 0xffffffff
arg1[0x3e] = 0xffffffff
arg1[0x3f] = 0
arg1[0x40] = 0x64
arg1[0x41] = 0
arg1[0x42] = 0
arg1[0x43] = &sys43vm::CVMFuncList::`vftable'{for `IVMFuncList'}
void* var_10 = &arg1[0x43]
__builtin_memset(&arg1[0x44], 0, 0x14)
var_4.b = 0x12
arg1[0x47] = sub_42f580()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
