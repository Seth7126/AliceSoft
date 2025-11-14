// 函数: sub_4d5c20
// 地址: 0x4d5c20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf785
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIScene::VTable** var_844
int32_t eax_2 = __security_cookie ^ &var_844
int32_t __saved_edi
int32_t var_858 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CGUIScene::`vftable'
arg1[1].b = 0
var_844 = arg1
__builtin_memset(&arg1[2], 0, 0x11)
int32_t var_4 = 0
arg1[7] = 3
__builtin_memset(&arg1[8], 0, 0x20)
arg1[0x10] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0x11], 0, 0x18)
arg1[0x17] = &partsengine::CMotionDataList<int32_t>::`vftable'
__builtin_memset(&arg1[0x18], 0, 0x30)
arg1[0x24] = &partsengine::CMotionDataList<class std::string>::`vftable'
__builtin_memset(&arg1[0x25], 0, 0x18)
arg1[0x2b] = &partsengine::CMotionSoundList::`vftable'
arg1[0x2c] = 0
arg1[0x2d] = 0
arg1[0x2e] = 0
arg1[0x2f] = &partsengine::CGUIMessageList::`vftable'{for `IEventObserver'}
__builtin_memset(&arg1[0x30], 0, 0x18)
arg1[0x3b] = 0xf
arg1[0x3a] = 0
arg1[0x36].b = 0
var_4.b = 9
arg1[0x3c] = &partsengine::CActivityDataList::`vftable'
arg1[0x3d] = 0
arg1[0x3e] = 0
arg1[0x3d] = sub_4d05b0()
arg1[0x3f] = 0
var_4.b = 0xa
sub_4a8080(&arg1[0x40], &arg1[0x2f], arg4)
arg1[0x5e] = arg2
arg1[0x5f] = arg3
struct math::CMRand::VTable* const var_840 = &math::CMRand::`vftable'
sub_47cb30(&var_840, 0)
var_4.b = 0xc
sub_47cb30(&var_840, 0)
sub_42f470(&arg1[0x1e], 0x400)
int32_t* i = arg1[0x1e]
int32_t var_83c
int32_t edi = var_83c
int32_t var_838[0x20a]

for (; i != arg1[0x1f]; i = &i[1])
    edi += 1
    int32_t var_83c_1 = edi
    
    if (edi s>= 0x209)
        sub_47cac0(&var_840)
        edi = 0
        int32_t var_83c_2 = 0
    
    int32_t eax_8 = var_838[edi]
    *i = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_8)) f+ *((eax_8 u>> 0x1f << 3) + &data_709480))
        * 2.3283064365386963e-10)

sub_42f470(&arg1[0x21], 0x400)
int32_t* i_1 = arg1[0x21]

if (i_1 != arg1[0x22])
    int32_t edi_1 = edi
    
    do
        edi_1 += 1
        int32_t var_83c_3 = edi_1
        
        if (edi_1 s>= 0x209)
            sub_47cac0(&var_840)
            edi_1 = 0
            int32_t var_83c_4 = 0
        
        int32_t eax_10 = var_838[edi_1]
        *i_1 = _mm_cvtpd_ps((_mm_cvtepi32_pd(zx.q(eax_10)) f+
            *((eax_10 u>> 0x1f << 3) + &data_709480)) * 2.3283064365386963e-10)
        i_1 = &i_1[1]
    while (i_1 != arg1[0x22])

arg1[0x3f] = arg1[0x5e]
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_844)
return arg1
