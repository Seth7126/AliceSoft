// 函数: sub_535f80
// 地址: 0x535f80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3f76
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CEmitter::VTable** var_10 = arg1
*arg1 = &sealengine::CEmitter::`vftable'
arg1[1] = 0
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
int32_t var_4 = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 1
arg1[0xc] = 0
arg1[0xd] = &sealengine::CParamWithRandRange::`vftable'
arg1[0xe] = 0x3f800000
arg1[0xf] = 0
arg1[0x10] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x11] = 0x3f800000
arg1[0x12] = 0
arg1[0x13] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x14] = 0x3f800000
arg1[0x15] = 0
arg1[0x16] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x17] = 0x3f800000
arg1[0x18] = 0
arg1[0x19] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x1a] = 0x3f800000
arg1[0x1b] = 0
arg1[0x1c] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x1d] = 0x3f800000
arg1[0x1e] = 0
arg1[0x1f] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x20] = 0
arg1[0x21] = 0
arg1[0x22] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x23] = 0
arg1[0x24] = 0
arg1[0x25] = &sealengine::CParamWithRandRange::`vftable'
__builtin_memset(&arg1[0x26], 0, 0x1c)
arg1[0x2d] = 1
arg1[0x33] = 0xf
arg1[0x32] = 0
arg1[0x2e].b = 0
arg1[0x34] = 0
arg1[0x35] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x36] = 0
arg1[0x37] = 0
arg1[0x38] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x39] = 0
arg1[0x3a] = 0
arg1[0x3b] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x3c] = 0
arg1[0x3d] = 0
arg1[0x3e] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x3f] = 0x3f800000
arg1[0x40] = 0
arg1[0x41].b = 0
arg1[0x42] = 0
arg1[0x43] = 0
arg1[0x44] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x45] = 0
arg1[0x46] = 0
arg1[0x47] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x48] = 0
arg1[0x49] = 0
arg1[0x4a] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x4b] = 0
arg1[0x4c] = 0
arg1[0x4d] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x4e] = 0
arg1[0x4f] = 0
arg1[0x50] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x51] = 0
arg1[0x52] = 0
arg1[0x53] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x54] = 0
arg1[0x55] = 0
arg1[0x56] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x57] = 0
arg1[0x58] = 0
arg1[0x59] = &sealengine::CParamWithRandRange::`vftable'
arg1[0x5a] = 0
arg1[0x5b] = 0
var_4.b = 0x16
arg1[0x5c] = 1
sub_43e6d0(&arg1[0x5d], 0x20)
arg1[0x60] = 0x3f800000
arg1[0x66] = 0xf
arg1[0x65] = 0
arg1[0x61].b = 0
__builtin_memset(&arg1[0x67], 0, 0x60)
arg1[0x7f].b = 1
arg1[0x80] = 0
arg1[0x81].w = 1
*(arg1 + 0x206) = 0
arg1[0x82] = 0
arg1[0x83] = 0
arg1[0x84] = 0
__builtin_memset(&arg1[0x86], 0, 0x54)
var_4.b = 0x28
sub_42f470(&arg1[0x82], 2)
int32_t eax_3 = arg1[0x83]
int32_t edx = 0
int32_t* ecx_2 = arg1[0x82]
uint32_t esi_3 = (eax_3 - ecx_2 + 3) u>> 2

if (ecx_2 u> eax_3)
    esi_3 = 0

if (esi_3 != 0)
    do
        edx += 1
        *ecx_2 = 0
        ecx_2 = &ecx_2[1]
    while (edx != esi_3)

arg1[0x85] = 0
sub_42f470(&arg1[0x86], 1)
int32_t eax_4 = arg1[0x87]
int32_t* ecx_4 = arg1[0x86]
int32_t esi_4 = 0
uint32_t edx_4 = (eax_4 - ecx_4 + 3) u>> 2

if (ecx_4 u> eax_4)
    edx_4 = 0

if (edx_4 != 0)
    int32_t* ecx_5 = ecx_4
    
    do
        esi_4 += 1
        *ecx_5 = 0
        ecx_5 = &ecx_5[1]
    while (esi_4 != edx_4)

sub_42f470(&arg1[0x89], 2)
int32_t eax_5 = arg1[0x8a]
int32_t* ecx_7 = arg1[0x89]
int32_t esi_5 = 0
uint32_t edx_8 = (eax_5 - ecx_7 + 3) u>> 2

if (ecx_7 u> eax_5)
    edx_8 = 0

if (edx_8 != 0)
    do
        esi_5 += 1
        *ecx_7 = 0
        ecx_7 = &ecx_7[1]
    while (esi_5 != edx_8)

sub_42f470(&arg1[0x8c], 2)
int32_t eax_6 = arg1[0x8d]
int32_t* ecx_9 = arg1[0x8c]
int32_t esi_6 = 0
uint32_t edx_12 = (eax_6 - ecx_9 + 3) u>> 2

if (ecx_9 u> eax_6)
    edx_12 = 0

if (edx_12 != 0)
    do
        esi_6 += 1
        *ecx_9 = 0
        ecx_9 = &ecx_9[1]
    while (esi_6 != edx_12)

sub_42f470(&arg1[0x8f], 2)
int32_t eax_7 = arg1[0x90]
int32_t* ecx_11 = arg1[0x8f]
int32_t esi_7 = 0
uint32_t edx_16 = (eax_7 - ecx_11 + 3) u>> 2

if (ecx_11 u> eax_7)
    edx_16 = 0

if (edx_16 != 0)
    do
        esi_7 += 1
        *ecx_11 = 0
        ecx_11 = &ecx_11[1]
    while (esi_7 != edx_16)

sub_42f470(&arg1[0x92], 2)
int32_t eax_8 = arg1[0x93]
int32_t* ecx_13 = arg1[0x92]
int32_t esi_8 = 0
uint32_t edx_20 = (eax_8 - ecx_13 + 3) u>> 2

if (ecx_13 u> eax_8)
    edx_20 = 0

if (edx_20 != 0)
    do
        esi_8 += 1
        *ecx_13 = 0
        ecx_13 = &ecx_13[1]
    while (esi_8 != edx_20)

sub_42f470(&arg1[0x95], 2)
int32_t eax_9 = arg1[0x96]
int32_t* ecx_15 = arg1[0x95]
int32_t esi_9 = 0
uint32_t edx_24 = (eax_9 - ecx_15 + 3) u>> 2

if (ecx_15 u> eax_9)
    edx_24 = 0

if (edx_24 != 0)
    do
        esi_9 += 1
        *ecx_15 = 0
        ecx_15 = &ecx_15[1]
    while (esi_9 != edx_24)

sub_42f470(&arg1[0x98], 2)
int32_t eax_10 = arg1[0x99]
int32_t* ecx_17 = arg1[0x98]
int32_t esi_10 = 0
uint32_t edx_28 = (eax_10 - ecx_17 + 3) u>> 2

if (ecx_17 u> eax_10)
    edx_28 = 0

if (edx_28 != 0)
    do
        esi_10 += 1
        *ecx_17 = 0
        ecx_17 = &ecx_17[1]
    while (esi_10 != edx_28)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
