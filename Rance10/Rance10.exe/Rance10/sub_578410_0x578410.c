// 函数: sub_578410
// 地址: 0x578410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73cd03
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
void** eax_3 = &arg1[2]
*arg1 = 0
arg1[1] = 0
eax_3[5] = 0xf
eax_3[4] = 0

if (eax_3[5] u>= 0x10)
    eax_3 = *eax_3

*eax_3 = nullptr
int32_t var_8_1 = 0
*(arg1 + 0x28) = _mm_unpacklo_ps(zx.o(0), 0)
arg1[8] = 0
arg1[9] = 0
arg1[0xc] = 0
arg1[0xd] = 1
arg1[0xe] = 0
arg1[0xf] = &sealengine::CParamWithRandRange<int32_t>::`vftable'
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x13] = 0x3f800000
arg1[0x14] = 0
arg1[0x15] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x16] = 0x3f800000
arg1[0x17] = 0
arg1[0x18] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x19] = 0x3f800000
arg1[0x1a] = 0
arg1[0x1b] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x1c] = 0x3f800000
arg1[0x1d] = 0
arg1[0x1e] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x1f] = 0x3f800000
arg1[0x20] = 0
arg1[0x21] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x22] = 0x3f800000
arg1[0x23] = 0
arg1[0x24] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x25] = 0x3f800000
arg1[0x26] = 0
arg1[0x27] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x28] = 0x3f800000
arg1[0x29] = 0
arg1[0x2a] = 0x1010101
arg1[0x2b] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x2c] = 0
arg1[0x2d] = 0
arg1[0x2e] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x31] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x34] = 0
*(arg1 + 0xd4) = data_7fd4d8.q
arg1[0x37] = data_7fd4e0
void* eax_5 = &arg1[0x3b]
arg1[0x38] = 0
arg1[0x39] = 0x3f800000
arg1[0x3a] = 0
*(eax_5 + 0x14) = 0xf
*(eax_5 + 0x10) = 0

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

*eax_5 = 0
void* eax_6 = &arg1[0x43]
arg1[0x41] = 0x3f800000
arg1[0x42] = 1
*(eax_6 + 0x14) = 0xf
*(eax_6 + 0x10) = 0

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

*eax_6 = 0
arg1[0x49] = 0
arg1[0x4a] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x4b] = 0
arg1[0x4c] = 0
arg1[0x4d] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x4e] = 0
arg1[0x4f] = 0
arg1[0x50] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x51] = 0
arg1[0x52] = 0
arg1[0x53] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x54] = 0x3f800000
__builtin_memset(&arg1[0x55], 0, 0x15)
arg1[0x5b] = 0
arg1[0x5c] = 0
arg1[0x5d] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x5e] = 0
arg1[0x5f] = 0
arg1[0x60] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x61] = 0
arg1[0x62] = 0
arg1[0x63] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x64] = 0
arg1[0x65] = 0
arg1[0x66] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x67] = 0
arg1[0x68] = 0
arg1[0x69] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x6a] = 0
arg1[0x6b] = 0
arg1[0x6c] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x6d] = 0
arg1[0x6e] = 0
arg1[0x6f].w = 0x101
*(arg1 + 0x1be) = 1
__builtin_memset(&arg1[0x70], 0, 0x30)
arg1[0x7c] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x7d] = 0
arg1[0x7e] = 0
arg1[0x7f] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x80] = 0
arg1[0x81] = 0
void* eax_7 = &arg1[0x84]
arg1[0x82] = 1
arg1[0x83].w = 0
*(eax_7 + 0x14) = 0xf
*(eax_7 + 0x10) = 0

if (*(eax_7 + 0x14) u>= 0x10)
    eax_7 = *eax_7

*eax_7 = 0
void* eax_8 = &arg1[0x8b]
arg1[0x8a] = 0x3f800000
*(eax_8 + 0x14) = 0xf
*(eax_8 + 0x10) = 0

if (*(eax_8 + 0x14) u>= 0x10)
    eax_8 = *eax_8

*eax_8 = 0
void* eax_9 = &arg1[0x91]
*(eax_9 + 0x14) = 0xf
*(eax_9 + 0x10) = 0

if (*(eax_9 + 0x14) u>= 0x10)
    eax_9 = *eax_9

*eax_9 = 0
void* eax_10 = &arg1[0x97]
*(eax_10 + 0x14) = 0xf
*(eax_10 + 0x10) = 0

if (*(eax_10 + 0x14) u>= 0x10)
    eax_10 = *eax_10

*eax_10 = 0
void* eax_11 = &arg1[0x9d]
*(eax_11 + 0x14) = 0xf
*(eax_11 + 0x10) = 0

if (*(eax_11 + 0x14) u>= 0x10)
    eax_11 = *eax_11

*eax_11 = 0
var_8_1.b = 0x1f
int32_t var_14 = 1
arg1[0xa3] = 0
arg1[0xa4] = 0
arg1[0xa5] = 0
sub_422540(&arg1[0xa3], 0xb, &var_14)
__builtin_memset(&arg1[0xa6], 0, 0x84)
var_8_1.b = 0x2b
arg1[0xc7].b = 1
arg1[0xc8] = 0
arg1[0xc9].b = 0
arg1[0xca] = 0
arg1[0xcb].b = 1
arg1[0xcc] = 0xffffffff
var_14 = 0
arg1[0xcd] = 0
arg1[0xce] = 0
arg1[0xcf] = 0
sub_422540(&arg1[0xcd], 2, &var_14)
arg1[0xd0] = 0
arg1[0xd1] = 0
arg1[0xd2] = 0x1000000
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
