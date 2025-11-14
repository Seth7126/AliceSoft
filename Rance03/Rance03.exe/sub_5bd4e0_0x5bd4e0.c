// 函数: sub_5bd4e0
// 地址: 0x5bd4e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct sys43vm::CJabFile::VTable** var_4 = arg1
*arg1 = &sys43vm::CJabFile::`vftable'
sub_5dd6b0(&arg1[0x43])
int32_t** eax = arg1[0x39]
sub_417e10(&arg1[0x39], &var_4, *eax, eax)
j__free(arg1[0x39])
int32_t** eax_1 = arg1[0x37]
sub_4200d0(&arg1[0x37], &var_4, *eax_1, eax_1)
j__free(arg1[0x37])
int32_t** eax_2 = arg1[0x35]
sub_417e10(&arg1[0x35], &var_4, *eax_2, eax_2)
j__free(arg1[0x35])
int32_t** eax_3 = arg1[0x33]
sub_417e10(&arg1[0x33], &var_4, *eax_3, eax_3)
j__free(arg1[0x33])
int32_t* eax_4 = arg1[0x30]

if (eax_4 != 0)
    sub_4107c0(eax_4, arg1[0x31])
    j__free(arg1[0x30])
    arg1[0x30] = 0
    arg1[0x31] = 0
    arg1[0x32] = 0

int32_t* ecx_5 = arg1[0x2d]

if (ecx_5 != 0)
    struct sys43vm::CJabFile::VTable** var_10_10 = var_4
    int32_t* var_14_5 = ecx_5
    sub_5bf8f0(ecx_5, arg1[0x2e])
    j__free(arg1[0x2d])
    arg1[0x2d] = 0
    arg1[0x2e] = 0
    arg1[0x2f] = 0

int32_t eax_5 = arg1[0x2a]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x2a] = 0
    arg1[0x2b] = 0
    arg1[0x2c] = 0

void* ecx_6 = arg1[0x27]

if (ecx_6 != 0)
    struct sys43vm::CJabFile::VTable** var_10_12 = var_4
    void* var_14_6 = ecx_6
    sub_5bbed0(ecx_6, arg1[0x28])
    j__free(arg1[0x27])
    arg1[0x27] = 0
    arg1[0x28] = 0
    arg1[0x29] = 0

int32_t* eax_6 = arg1[0x24]

if (eax_6 != 0)
    sub_5b66e0(eax_6, arg1[0x25])
    j__free(arg1[0x24])
    arg1[0x24] = 0
    arg1[0x25] = 0
    arg1[0x26] = 0

void* ecx_7 = arg1[0x21]

if (ecx_7 != 0)
    struct sys43vm::CJabFile::VTable** var_10_15 = var_4
    void* var_14_8 = ecx_7
    sub_5bc9e0(ecx_7, arg1[0x22])
    j__free(arg1[0x21])
    arg1[0x21] = 0
    arg1[0x22] = 0
    arg1[0x23] = 0

void* ecx_8 = arg1[0x1e]

if (ecx_8 != 0)
    struct sys43vm::CJabFile::VTable** var_10_16 = var_4
    void* var_14_9 = ecx_8
    sub_5bf850(ecx_8, arg1[0x1f])
    j__free(arg1[0x1e])
    arg1[0x1e] = 0
    arg1[0x1f] = 0
    arg1[0x20] = 0

sub_5b68f0(&arg1[0x1b])
sub_5b68f0(&arg1[0x18])
sub_5b68f0(&arg1[0x15])
int32_t eax_7 = arg1[0x12]

if (eax_7 != 0)
    j__free(eax_7)
    arg1[0x12] = 0
    arg1[0x13] = 0
    arg1[0x14] = 0

int32_t eax_8 = arg1[0xf]

if (eax_8 != 0)
    j__free(eax_8)
    arg1[0xf] = 0
    arg1[0x10] = 0
    arg1[0x11] = 0

int32_t eax_9 = arg1[0xc]

if (eax_9 != 0)
    j__free(eax_9)
    arg1[0xc] = 0
    arg1[0xd] = 0
    arg1[0xe] = 0

int32_t eax_10 = arg1[9]

if (eax_10 != 0)
    j__free(eax_10)
    arg1[9] = 0
    arg1[0xa] = 0
    arg1[0xb] = 0

arg1[5] = &sys43vm::CMessageTextList::`vftable'
int32_t* ecx_12 = arg1[6]

if (ecx_12 != 0)
    struct sys43vm::CJabFile::VTable** var_10_21 = var_4
    int32_t* var_14_10 = ecx_12
    sub_48c2c0(ecx_12, arg1[7])
    j__free(arg1[6])
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0

BOOL lpMem = arg1[2]
arg1[1] = &memory::CFastMemory::`vftable'

if (lpMem == 0)
    return lpMem

return HeapFree(data_75dc38, HEAP_NONE, lpMem)
