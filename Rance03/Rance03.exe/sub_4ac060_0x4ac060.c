// 函数: sub_4ac060
// 地址: 0x4ac060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcffc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIInputController::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIInputController::VTable** var_10_1 = arg1
*arg1 = &partsengine::CGUIInputController::`vftable'
arg1[1] = arg2
__builtin_memset(&arg1[2], 0, 0x1c)
sub_4e3510(&arg1[9])
int32_t var_4 = 0
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x18].b = 0
arg1[0x19] = 0
arg1[0x1a].b = 0
arg1[0x1b] = &partsengine::CIbisInputWrapper::`vftable'
arg1[0x1c] = &partsengine::CEventSubject::`vftable'
arg2 = &arg1[0x1c]
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
var_4.b = 2
arg1[0x20] = 0
sub_42f420(&arg1[0x21], 0x19)
var_4.b = 3
void* eax_4 = arg1[0x21]
arg1[0x20] = 0
*(eax_4 + 4) = 1
arg1[0x21][3].vFunc_0 = 1
__builtin_memcpy(&arg1[0x21][6], 
    "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x"
"01\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
arg1[0x21]
arg1[0x21]
arg1[0x21]
arg1[0x21]
arg1[0x21]
arg1[0x21]
arg1[0x21]
__builtin_memcpy(&arg1[0x21][0x12], 
    "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x"
"01\x00\x00\x00", 
    0x1c)
arg1[0x21]
arg1[0x21]->vFunc_0 = 1
arg1[0x21]
arg1[0x21]
arg1[0x21]
arg1[0x21]
arg1[0x21]
int32_t eax_22 = arg1[2]
arg1[0x1a].b = 0
arg1[0x15] = eax_22
arg1[0x19] = eax_22
__builtin_memset(&arg1[3], 0, 0x14)
arg1[0x18].b = 0
sub_4ac380(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
