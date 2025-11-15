// 函数: sub_5a4b90
// 地址: 0x5a4b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ee43
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t* edi = arg2
*arg1 = *edi
arg1[1] = edi[1]
arg1[7] = 0xf
arg1[6] = 0
char* eax_5

if (arg1[7] u< 0x10)
    eax_5 = &arg1[2]
else
    eax_5 = arg1[2]

*eax_5 = 0
sub_403590(&arg1[2], &edi[2], 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[8] = edi[8]
arg1[9] = edi[9]
*(arg1 + 0x28) = *(edi + 0x28)
arg1[0xc] = edi[0xc]
arg1[0xd] = edi[0xd]
arg1[0xe] = edi[0xe]
arg1[0xf] = &sealengine::CParamWithRandRange<int32_t>::`vftable'
arg1[0x10] = edi[0x10]
arg1[0x11] = edi[0x11]
arg1[0x12] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x13] = edi[0x13]
arg1[0x14] = edi[0x14]
arg1[0x15] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x16] = edi[0x16]
arg1[0x17] = edi[0x17]
arg1[0x18] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x19] = edi[0x19]
arg1[0x1a] = edi[0x1a]
arg1[0x1b] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x1c] = edi[0x1c]
arg1[0x1d] = edi[0x1d]
arg1[0x1e] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x1f] = edi[0x1f]
arg1[0x20] = edi[0x20]
arg1[0x21] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x22] = edi[0x22]
arg1[0x23] = edi[0x23]
arg1[0x24] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x25] = edi[0x25]
arg1[0x26] = edi[0x26]
arg1[0x27] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x28] = edi[0x28]
arg1[0x29] = edi[0x29]
arg1[0x2a].b = edi[0x2a].b
*(arg1 + 0xa9) = *(edi + 0xa9)
*(arg1 + 0xaa) = *(edi + 0xaa)
*(arg1 + 0xab) = *(edi + 0xab)
arg1[0x2b] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x2c] = edi[0x2c]
arg1[0x2d] = edi[0x2d]
arg1[0x2e] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x2f] = edi[0x2f]
arg1[0x30] = edi[0x30]
arg1[0x31] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x32] = edi[0x32]
arg1[0x33] = edi[0x33]
var_8_1.b = 0xc
arg1[0x34] = edi[0x34]
*(arg1 + 0xd4) = *(edi + 0xd4)
arg1[0x37] = edi[0x37]
arg1[0x38] = edi[0x38]
arg1[0x39] = edi[0x39]
arg1[0x3a] = edi[0x3a]
arg1[0x40] = 0xf
arg1[0x3f] = 0
void* eax_44

if (arg1[0x40] u< 0x10)
    eax_44 = &arg1[0x3b]
else
    eax_44 = arg1[0x3b]

*eax_44 = 0
sub_403590(&arg1[0x3b], &edi[0x3b], 0, 0xffffffff)
var_8_1.b = 0xd
arg1[0x41] = edi[0x41]
arg1[0x42] = edi[0x42]
arg1[0x48] = 0xf
arg1[0x47] = 0
void* eax_47

if (arg1[0x48] u< 0x10)
    eax_47 = &arg1[0x43]
else
    eax_47 = arg1[0x43]

*eax_47 = 0
sub_403590(&arg1[0x43], &edi[0x43], 0, 0xffffffff)
arg1[0x49] = edi[0x49]
arg1[0x4a] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x4b] = edi[0x4b]
arg1[0x4c] = edi[0x4c]
arg1[0x4d] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x4e] = edi[0x4e]
arg1[0x4f] = edi[0x4f]
arg1[0x50] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x51] = edi[0x51]
arg1[0x52] = edi[0x52]
arg1[0x53] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x54] = edi[0x54]
arg1[0x55] = edi[0x55]
*(arg1 + 0x158) = *(edi + 0x158)
arg1[0x5a].b = edi[0x5a].b
arg1[0x5b] = edi[0x5b]
arg1[0x5c] = edi[0x5c]
arg1[0x5d] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x5e] = edi[0x5e]
arg1[0x5f] = edi[0x5f]
arg1[0x60] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x61] = edi[0x61]
arg1[0x62] = edi[0x62]
arg1[0x63] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x64] = edi[0x64]
arg1[0x65] = edi[0x65]
arg1[0x66] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x67] = edi[0x67]
arg1[0x68] = edi[0x68]
arg1[0x69] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x6a] = edi[0x6a]
arg1[0x6b] = edi[0x6b]
arg1[0x6c] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x6d] = edi[0x6d]
arg1[0x6e] = edi[0x6e]
arg1[0x6f].b = edi[0x6f].b
*(arg1 + 0x1bd) = *(edi + 0x1bd)
*(arg1 + 0x1be) = *(edi + 0x1be)
*(arg1 + 0x1c0) = *(edi + 0x1c0)
*(arg1 + 0x1d0) = *(edi + 0x1d0)
*(arg1 + 0x1e0) = *(edi + 0x1e0)
arg1[0x7c] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x7d] = edi[0x7d]
arg1[0x7e] = edi[0x7e]
arg1[0x7f] = &sealengine::CParamWithRandRange<float>::`vftable'
arg1[0x80] = edi[0x80]
arg1[0x81] = edi[0x81]
var_8_1.b = 0x1a
arg1[0x82] = edi[0x82]
arg1[0x83].b = edi[0x83].b
*(arg1 + 0x20d) = *(edi + 0x20d)
arg1[0x89] = 0xf
arg1[0x88] = 0
void* eax_82

if (arg1[0x89] u< 0x10)
    eax_82 = &arg1[0x84]
else
    eax_82 = arg1[0x84]

*eax_82 = 0
sub_403590(&arg1[0x84], &edi[0x84], 0, 0xffffffff)
var_8_1.b = 0x1b
arg1[0x8a] = edi[0x8a]
arg1[0x90] = 0xf
arg1[0x8f] = 0
void* eax_84

if (arg1[0x90] u< 0x10)
    eax_84 = &arg1[0x8b]
else
    eax_84 = arg1[0x8b]

*eax_84 = 0
sub_403590(&arg1[0x8b], &edi[0x8b], 0, 0xffffffff)
var_8_1.b = 0x1c
arg1[0x96] = 0xf
arg1[0x95] = 0
void* eax_85

if (arg1[0x96] u< 0x10)
    eax_85 = &arg1[0x91]
else
    eax_85 = arg1[0x91]

*eax_85 = 0
sub_403590(&arg1[0x91], &edi[0x91], 0, 0xffffffff)
var_8_1.b = 0x1d
arg1[0x9c] = 0xf
arg1[0x9b] = 0
void* eax_86

if (arg1[0x9c] u< 0x10)
    eax_86 = &arg1[0x97]
else
    eax_86 = arg1[0x97]

*eax_86 = 0
sub_403590(&arg1[0x97], &edi[0x97], 0, 0xffffffff)
var_8_1.b = 0x1e
arg1[0xa2] = 0xf
arg1[0xa1] = 0
void* eax_87

if (arg1[0xa2] u< 0x10)
    eax_87 = &arg1[0x9d]
else
    eax_87 = arg1[0x9d]

*eax_87 = 0
sub_403590(&arg1[0x9d], &edi[0x9d], 0, 0xffffffff)
var_8_1.b = 0x1f
sub_4275f0(&arg1[0xa3], &edi[0xa3])
var_8_1.b = 0x20
arg2 = &arg1[0xa6]
sub_58fd80(&arg1[0xa6], &edi[0xa6])
var_8_1.b = 0x21
arg2 = &arg1[0xa9]
sub_564a30(&arg1[0xa9], &edi[0xa9])
var_8_1.b = 0x22
arg2 = &arg1[0xac]
sub_564a30(&arg1[0xac], &edi[0xac])
var_8_1.b = 0x23
arg2 = &arg1[0xaf]
sub_564a30(&arg1[0xaf], &edi[0xaf])
var_8_1.b = 0x24
arg2 = &arg1[0xb2]
sub_564a30(&arg1[0xb2], &edi[0xb2])
var_8_1.b = 0x25
arg2 = &arg1[0xb5]
sub_5a5540(&arg1[0xb5], &edi[0xb5])
var_8_1.b = 0x26
arg2 = &arg1[0xb8]
sub_564a30(&arg1[0xb8], &edi[0xb8])
var_8_1.b = 0x27
arg2 = &arg1[0xbb]
sub_5a54e0(&arg1[0xbb], &edi[0xbb])
var_8_1.b = 0x28
arg2 = &arg1[0xbe]
sub_5a54e0(&arg1[0xbe], &edi[0xbe])
var_8_1.b = 0x29
arg2 = &arg1[0xc1]
sub_5a54e0(&arg1[0xc1], &edi[0xc1])
var_8_1.b = 0x2a
arg2 = &arg1[0xc4]
sub_5a54e0(&arg1[0xc4], &edi[0xc4])
var_8_1.b = 0x2b
arg1[0xc7].b = edi[0xc7].b
arg1[0xc8] = edi[0xc8]
arg1[0xc9].b = edi[0xc9].b
arg1[0xca] = edi[0xca]
arg1[0xcb].b = edi[0xcb].b
arg1[0xcc] = edi[0xcc]
sub_4275f0(&arg1[0xcd], &edi[0xcd])
arg1[0xd0] = edi[0xd0]
arg1[0xd1] = edi[0xd1]
arg1[0xd2].b = edi[0xd2].b
*(arg1 + 0x349) = *(edi + 0x349)
*(arg1 + 0x34a) = *(edi + 0x34a)
*(arg1 + 0x34b) = *(edi + 0x34b)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
