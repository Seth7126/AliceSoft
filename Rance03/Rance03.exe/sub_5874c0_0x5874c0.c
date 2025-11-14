// 函数: sub_5874c0
// 地址: 0x5874c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7848
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CReignModel::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CReignModel::VTable** var_10_1 = arg1
void* arg_4
void* ebp = arg_4
*arg1 = &sealengine::CReignModel::`vftable'
arg1[1] = &sealengine::CInstanceList::`vftable'
arg1[2] = 0
arg1[5] = ebp
arg1[6].b = 1
arg1[7] = 0
arg1[8] = 0
int32_t var_4 = 0
arg1[9] = &sealengine::CCamera::`vftable'
__builtin_memset(&arg1[0xa], 0, 0x15)
var_4.b = 1
__builtin_memset(&arg1[0x10], 0, 0x24)
arg1[0x19] = 0xbf800000
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0x3f800000
arg1[0x1f] = 0x3f800000
arg1[0x20] = 0x3f800000
arg1[0x21] = 0
arg1[0x22] = 0x3be56042
arg1[0x23] = 2
arg_4 = nullptr
__builtin_memset(&arg1[0x24], 0, 0x14)
sub_42f4d0(&arg1[0x24], 4, &arg_4)
var_4.b = 2
arg_4 = nullptr
arg1[0x27] = 0
arg1[0x28] = 0
arg1[0x29] = 0
sub_42f4d0(&arg1[0x27], 4, &arg_4)
var_4.b = 3
sub_42f420(&arg1[0x2a], 4)
arg1[0x2d] = 0x3f000000
arg1[0x2e] = 0
__builtin_memcpy(&arg1[0x2f], 
    "\x00\x00\x80\x3f\x00\x00\x20\x41\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x0a\xd7\xa3\x3c", 
    0x20)
__builtin_memset(&arg1[0x37], 0, 0x14)
sub_5855b0(&arg1[0x3c])
var_4.b = 5
__builtin_memset(&arg1[0x56], 0, 0x14)
arg1[0x5b] = 0
arg1[0x5c] = 0
arg1[0x5b] = sub_4203c0()
var_4.b = 6
__builtin_memset(&arg1[0x5d], 0, 0x28)
arg1[0x67] = &sealengine::CDebugMode::`vftable'
arg_4 = nullptr
arg1[0x68] = 0
arg1[0x69] = 0
arg1[0x6a] = 0
sub_42f4d0(&arg1[0x68], 6, &arg_4)
var_4.b = 7
arg1[0x6b] = 0
arg1[0x6c] = 1
void* eax_4 = sub_69adc6(0x1c)
arg_4 = eax_4
var_4.b = 8
struct sealengine::CLightParamList::VTable** eax_5

if (eax_4 == 0)
    eax_5 = nullptr
else
    eax_5 = sub_547530(eax_4)

var_4.b = 7
arg1[0x6d] = eax_5
arg_4 = nullptr
arg1[0x6e] = 0
arg1[0x6f] = 0
arg1[0x70] = 0
sub_42f4d0(&arg1[0x6e], 9, &arg_4)
var_4.b = 9
sub_5243b0(&arg1[0x71])
arg1[0x79] = &sealengine::CBackCGModel::`vftable'
arg_4 = &arg1[0x79]
arg1[0x7a] = 0
arg1[0x7b] = 0
arg1[0x7c] = 0
var_4.b = 0xb
sub_528030(&arg1[0x7a], 0x10)
var_4.b = 0xc
arg_4 = nullptr
arg1[0x7d] = 0
arg1[0x7e] = 0
arg1[0x7f] = 0
sub_42f4d0(&arg1[0x7d], 4, &arg_4)
var_4.b = 0xd
int32_t* eax_7 = arg1[0x2a]
arg1[0x80] = ebp
arg1[0x81] = 0
arg1[0x82] = 0
*eax_7 = 0
int32_t eax_8 = arg1[0x2a]
arg_4 = nullptr
__builtin_strncpy(eax_8 + 4, "=\nw?", 4)
arg1[0x2a][2].vFunc_0 = 0x3f79999a
arg1[0x2a][3].vFunc_0 = 0x3f800000
*sub_42f350(&arg1[0x5b], &arg_4) = 0
arg_4 = 1
*sub_42f350(&arg1[0x5b], &arg_4) = 1
arg_4 = 2
*sub_42f350(&arg1[0x5b], &arg_4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
