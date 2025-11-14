// 函数: sub_5b9e00
// 地址: 0x5b9e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sys43vm::CGlobalSaver::VTable** var_c = arg1
struct sys43vm::CGlobalSaver::VTable** var_10 = arg1
*arg1 = &sys43vm::CGlobalSaver::`vftable'
sub_5b9460(arg1[4], arg1[5])
arg1[5] = arg1[4]
int32_t ecx_1 = sub_4107c0(arg1[7], arg1[8])
struct sys43vm::CGlobalSaver::VTable** var_c_2 = arg1
arg1[8] = arg1[7]
int32_t var_10_2 = ecx_1
sub_5b94a0(arg1[0xa], arg1[0xb])
arg1[0xb] = arg1[0xa]
arg1[0xe] = arg1[0xd]

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
int32_t eax_4 = arg1[0x10]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0

int32_t eax_5 = arg1[0xd]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0xd] = 0
    arg1[0xe] = 0
    arg1[0xf] = 0

void* ecx_3 = arg1[0xa]

if (ecx_3 != 0)
    struct sys43vm::CGlobalSaver::VTable** var_c_7 = arg1
    void* var_10_3 = ecx_3
    sub_5b94a0(ecx_3, arg1[0xb])
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

void* ecx_4 = arg1[4]

if (ecx_4 != 0)
    struct sys43vm::CGlobalSaver::VTable** var_c_10 = arg1
    void* var_10_5 = ecx_4
    sub_5b9460(ecx_4, arg1[5])
    result = j__free(arg1[4])
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0

void* ecx_5 = arg1[1]

if (ecx_5 != 0)
    struct sys43vm::CGlobalSaver::VTable** var_c_11 = arg1
    void* var_10_6 = ecx_5
    sub_5b9650(ecx_5, arg1[2])
    result = j__free(arg1[1])
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

return result
