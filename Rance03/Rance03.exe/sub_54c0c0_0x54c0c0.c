// 函数: sub_54c0c0
// 地址: 0x54c0c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sealengine::CMotionData::VTable** var_4 = arg1
*arg1 = &sealengine::CMotionData::`vftable'
sub_54c430(arg1)
int32_t** eax = arg1[0x1e]
sub_54eaa0(&arg1[0x1e], &var_4, *eax, eax)
j__free(arg1[0x1e])
int32_t** eax_1 = arg1[0x1c]
sub_54e9e0(&arg1[0x1c], &var_4, *eax_1, eax_1)
j__free(arg1[0x1c])
int32_t** eax_2 = arg1[0x1a]
sub_54e920(&arg1[0x1a], &var_4, *eax_2, eax_2)
j__free(arg1[0x1a])
int32_t** eax_3 = arg1[0x18]
sub_54e860(&arg1[0x18], &var_4, *eax_3, eax_3)
j__free(arg1[0x18])
void* i = arg1[0x15]

if (i != 0)
    for (int32_t ecx_4 = arg1[0x16]; i != ecx_4; i += 0x14)
        *(i + 8) = &sealengine::CFrameMulAlpha::`vftable'
    
    j__free(arg1[0x15])
    arg1[0x15] = 0
    arg1[0x16] = 0
    arg1[0x17] = 0

void* i_1 = arg1[0x12]

if (i_1 != 0)
    for (int32_t ecx_5 = arg1[0x13]; i_1 != ecx_5; i_1 += 0x20)
        *(i_1 + 8) = &sealengine::CFrameAddColor::`vftable'
    
    j__free(arg1[0x12])
    arg1[0x12] = 0
    arg1[0x13] = 0
    arg1[0x14] = 0

void* i_2 = arg1[0xf]

if (i_2 != 0)
    for (int32_t ecx_6 = arg1[0x10]; i_2 != ecx_6; i_2 += 0x20)
        *(i_2 + 8) = &sealengine::CFrameMulColor::`vftable'
    
    i_2 = j__free(arg1[0xf])
    arg1[0xf] = 0
    arg1[0x10] = 0
    arg1[0x11] = 0

void* ecx_7 = arg1[0xc]

if (ecx_7 != 0)
    struct sealengine::CMotionData::VTable** var_10_11 = var_4
    void* var_14_4 = ecx_7
    sub_550060(ecx_7, arg1[0xd])
    i_2 = j__free(arg1[0xc])
    arg1[0xc] = 0
    arg1[0xd] = 0
    arg1[0xe] = 0

if (arg1[9] u>= 0x10)
    i_2 = j__free(arg1[4])

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
int32_t* ecx_8 = arg1[3]
arg1[2] = &thread::CCriticalSection::`vftable'

if (ecx_8 == 0)
    return i_2

return (**ecx_8)(1)
