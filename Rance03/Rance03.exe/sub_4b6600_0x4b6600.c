// 函数: sub_4b6600
// 地址: 0x4b6600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bda4d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_848
int32_t eax_2 = __security_cookie ^ &var_848
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CGUIModel::`vftable'
arg1[1].b = 1
arg1[2] = 0xffffffff
arg1[3].w = 1
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 1
arg1[8].w = 1
arg1[9] = 0xff
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0xff
arg1[0xf] = 0xff
arg1[0x10] = 0xff
arg1[0x11] = 0
arg1[0x12] = 0x3f800000
arg1[0x13] = 0x3f800000
__builtin_memset(&arg1[0x14], 0, 0x34)
arg1[0x21] = 1
arg1[0x22].b = 0
arg1[0x23] = 3
__builtin_memset(&arg1[0x24], 0, 0x30)
struct partsengine::CGUIModel::VTable** var_844 = arg1
int32_t var_4 = 0
var_4.b = 2
sub_42f420(&arg1[0x30], 0x400)
var_4.b = 3
sub_42f420(&arg1[0x33], 0x400)
arg1[0x36] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0x37], 0, 0x18)
arg1[0x3d] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0x3e], 0, 0x20)
arg1[0x46] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x47], 0, 0x18)
arg1[0x4d] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x4e], 0, 0x18)
arg1[0x54] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x55], 0, 0x18)
arg1[0x5b] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x5c], 0, 0x18)
arg1[0x62] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x63], 0, 0x18)
arg1[0x69] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0x6a], 0, 0x18)
arg1[0x70] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x71], 0, 0x18)
arg1[0x77] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x78], 0, 0x18)
arg1[0x7e] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x7f], 0, 0x18)
arg1[0x85] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x86], 0, 0x18)
arg1[0x8c] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0x8d], 0, 0x18)
arg1[0x93] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x94], 0, 0x18)
arg1[0x9a] = &partsengine::CMotionDataList<float>::`vftable'
__builtin_memset(&arg1[0x9b], 0, 0x18)
arg1[0xa1] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0xa2], 0, 0x18)
arg1[0xa8] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0xa9], 0, 0x18)
arg1[0xaf] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0xb0], 0, 0x18)
arg1[0xb6] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0xb7], 0, 0x18)
arg1[0xbd] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0xbe], 0, 0x18)
arg1[0xc4] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0xc5], 0, 0x18)
arg1[0xcb] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0xcc], 0, 0x18)
var_4.b = 0x1a
void* esi = data_75d514
int32_t eax_5
int32_t ebx

if (esi != 0)
    if (sub_5ed1f0(esi) != 0)
        ebx = (*(**(esi + 0x2c) + 0x14))(eax_4)
    else
        ebx = 0
    
    void* esi_1 = data_75d514
    
    if (esi_1 != 0)
        if (sub_5ed1f0(esi_1) != 0)
            eax_5 = (*(**(esi_1 + 0x2c) + 0x10))(eax_4)
        else
            eax_5 = 0
    else
        eax_5 = 0
else
    ebx = 0
    eax_5 = 0

sub_512360(&arg1[0xd2], eax_5, ebx)
var_4.b = 0x1b
arg1[0x104] = 0
sub_43e6d0(&arg1[0x105], 4)
var_4.b = 0x1c
var_848 = 1
arg1[0x108] = 0
arg1[0x109] = 0
arg1[0x10a] = 0
sub_42f4d0(&arg1[0x108], 4, &var_848)
arg1[0x10b].b = 0
struct math::CMRand::VTable* const var_840 = &math::CMRand::`vftable'
sub_47cb30(&var_840, 0)
sub_47cb30(&var_840, 0)
int32_t* i = arg1[0x30]
double xmm1 = 2.3283064365386963e-10
int32_t var_83c
int32_t edx = var_83c
int32_t var_838[0x20a]

for (; i != arg1[0x31]; i = &i[1])
    edx += 1
    int32_t var_83c_1 = edx
    
    if (edx s>= 0x209)
        sub_47cac0(&var_840)
        edx = 0
        int32_t var_83c_2 = 0
    
    int32_t eax_11 = var_838[edx]
    *i = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_11)) f+ *((eax_11 u>> 0x1f << 3) + &data_709480))
        * xmm1)

for (int32_t* i_1 = arg1[0x33]; i_1 != arg1[0x34]; i_1 = &i_1[1])
    edx += 1
    int32_t var_83c_3 = edx
    
    if (edx s>= 0x209)
        sub_47cac0(&var_840)
        edx = 0
        int32_t var_83c_4 = 0
    
    int32_t ecx_13 = var_838[edx]
    *i_1 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(ecx_13)) f+ *((ecx_13 u>> 0x1f << 3) + &data_709480))
        * xmm1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_848)
return arg1
