// 函数: sub_5b6e90
// 地址: 0x5b6e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys43vm::CGlobalLoader::`vftable'
sub_5b7010(arg1)

if (arg1[0x1f] u>= 0x10)
    j__free(arg1[0x1a])

arg1[0x1f] = 0xf
arg1[0x1e] = 0
arg1[0x1a].b = 0

if (arg1[0x18] u>= 0x10)
    j__free(arg1[0x13])

arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0
void* ecx = arg1[0x10]

if (ecx != 0)
    struct sys43vm::CGlobalLoader::VTable** var_c_3 = arg1
    void* var_10_1 = ecx
    sub_5b9520(ecx, arg1[0x11])
    j__free(arg1[0x10])
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

int32_t eax = arg1[0xd]

if (eax != 0)
    j__free(eax)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

void* ecx_1 = arg1[0xa]

if (ecx_1 != 0)
    struct sys43vm::CGlobalLoader::VTable** var_c_5 = arg1
    void* var_10_2 = ecx_1
    sub_5b94a0(ecx_1, arg1[0xb])
    j__free(arg1[0xa])
    arg1[0xa] = 0
    arg1[0xb] = 0
    arg1[0xc] = 0

int32_t* result = arg1[7]

if (result != 0)
    sub_4107c0(result, arg1[8])
    result = j__free(arg1[7])
    arg1[7] = 0
    arg1[8] = 0
    arg1[9] = 0

void* ecx_2 = arg1[4]

if (ecx_2 != 0)
    struct sys43vm::CGlobalLoader::VTable** var_c_8 = arg1
    void* var_10_4 = ecx_2
    sub_5b9460(ecx_2, arg1[5])
    result = j__free(arg1[4])
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

void* ecx_3 = arg1[1]

if (ecx_3 != 0)
    struct sys43vm::CGlobalLoader::VTable** var_c_9 = arg1
    void* var_10_5 = ecx_3
    sub_5b9650(ecx_3, arg1[2])
    result = j__free(arg1[1])
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
