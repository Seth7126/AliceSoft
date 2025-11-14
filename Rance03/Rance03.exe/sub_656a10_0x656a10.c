// 函数: sub_656a10
// 地址: 0x656a10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf529
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::dpparts::CDPPartsListWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_10 = arg1
*arg1 = &dpparts::CDPPartsListWindow::`vftable'{for `dpparts::CWindow'}
int32_t var_4 = 0x23
arg1[0x114] = &dpparts::CListItem::`vftable'
sub_671ac0(&arg1[0xf2])
var_4.b = 0x22
sub_670c40(&arg1[0xd2])
void* ecx_2 = arg1[0xcf]

if (ecx_2 != 0)
    struct dpparts::CWindow::dpparts::CDPPartsListWindow::VTable** var_20_1 = var_10
    void* var_24_1 = ecx_2
    sub_65af30(ecx_2, arg1[0xd0])
    j__free(arg1[0xcf])
    arg1[0xcf] = 0
    arg1[0xd0] = 0
    arg1[0xd1] = 0

int32_t* eax_3 = arg1[0xcc]

if (eax_3 != 0)
    sub_4107c0(eax_3, arg1[0xcd])
    j__free(arg1[0xcc])
    arg1[0xcc] = 0
    arg1[0xcd] = 0
    arg1[0xce] = 0

int32_t** eax_4 = arg1[0xca]
sub_4200d0(&arg1[0xca], &var_10, *eax_4, eax_4)
j__free(arg1[0xca])
int32_t** eax_5 = arg1[0xc8]
sub_4200d0(&arg1[0xc8], &var_10, *eax_5, eax_5)
j__free(arg1[0xc8])
arg1[0xc1] = &dpparts::CGuiScrollBar::`vftable'
arg1[0xba] = &dpparts::CGuiScrollBar::`vftable'
arg1[0xb3] = &dpparts::CMouse::`vftable'

if (arg1[0xaf] u>= 0x10)
    j__free(arg1[0xaa])

arg1[0xaf] = 0xf
arg1[0xae] = 0
arg1[0xaa].b = 0

if (arg1[0xa9] u>= 0x10)
    j__free(arg1[0xa4])

arg1[0xa9] = 0xf
arg1[0xa8] = 0
arg1[0xa4].b = 0

if (arg1[0xa3] u>= 0x10)
    j__free(arg1[0x9e])

arg1[0xa3] = 0xf
arg1[0xa2] = 0
arg1[0x9e].b = 0

if (arg1[0x9d] u>= 0x10)
    j__free(arg1[0x98])

arg1[0x9d] = 0xf
arg1[0x9c] = 0
arg1[0x98].b = 0

if (arg1[0x97] u>= 0x10)
    j__free(arg1[0x92])

arg1[0x97] = 0xf
arg1[0x96] = 0
arg1[0x92].b = 0

if (arg1[0x91] u>= 0x10)
    j__free(arg1[0x8c])

arg1[0x91] = 0xf
arg1[0x90] = 0
arg1[0x8c].b = 0

if (arg1[0x8b] u>= 0x10)
    j__free(arg1[0x86])

arg1[0x8b] = 0xf
arg1[0x8a] = 0
arg1[0x86].b = 0

if (arg1[0x85] u>= 0x10)
    j__free(arg1[0x80])

arg1[0x85] = 0xf
arg1[0x84] = 0
arg1[0x80].b = 0

if (arg1[0x7f] u>= 0x10)
    j__free(arg1[0x7a])

arg1[0x7f] = 0xf
arg1[0x7e] = 0
arg1[0x7a].b = 0

if (arg1[0x79] u>= 0x10)
    j__free(arg1[0x74])

arg1[0x79] = 0xf
arg1[0x78] = 0
arg1[0x74].b = 0

if (arg1[0x73] u>= 0x10)
    j__free(arg1[0x6e])

arg1[0x73] = 0xf
arg1[0x72] = 0
arg1[0x6e].b = 0

if (arg1[0x6d] u>= 0x10)
    j__free(arg1[0x68])

arg1[0x6d] = 0xf
arg1[0x6c] = 0
arg1[0x68].b = 0

if (arg1[0x67] u>= 0x10)
    j__free(arg1[0x62])

arg1[0x67] = 0xf
arg1[0x66] = 0
arg1[0x62].b = 0

if (arg1[0x61] u>= 0x10)
    j__free(arg1[0x5c])

arg1[0x61] = 0xf
arg1[0x60] = 0
arg1[0x5c].b = 0

if (arg1[0x5b] u>= 0x10)
    j__free(arg1[0x56])

arg1[0x5b] = 0xf
arg1[0x5a] = 0
arg1[0x56].b = 0

if (arg1[0x55] u>= 0x10)
    j__free(arg1[0x50])

arg1[0x55] = 0xf
arg1[0x54] = 0
arg1[0x50].b = 0

if (arg1[0x4f] u>= 0x10)
    j__free(arg1[0x4a])

arg1[0x4f] = 0xf
arg1[0x4e] = 0
arg1[0x4a].b = 0

if (arg1[0x49] u>= 0x10)
    j__free(arg1[0x44])

arg1[0x49] = 0xf
arg1[0x48] = 0
arg1[0x44].b = 0

if (arg1[0x43] u>= 0x10)
    j__free(arg1[0x3e])

arg1[0x43] = 0xf
arg1[0x42] = 0
arg1[0x3e].b = 0

if (arg1[0x3d] u>= 0x10)
    j__free(arg1[0x38])

arg1[0x3d] = 0xf
arg1[0x3c] = 0
arg1[0x38].b = 0

if (arg1[0x37] u>= 0x10)
    j__free(arg1[0x32])

arg1[0x37] = 0xf
arg1[0x36] = 0
arg1[0x32].b = 0

if (arg1[0x31] u>= 0x10)
    j__free(arg1[0x2c])

arg1[0x31] = 0xf
arg1[0x30] = 0
arg1[0x2c].b = 0

if (arg1[0x2b] u>= 0x10)
    j__free(arg1[0x26])

arg1[0x2b] = 0xf
arg1[0x2a] = 0
arg1[0x26].b = 0

if (arg1[0x25] u>= 0x10)
    j__free(arg1[0x20])

arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0

if (arg1[0x1f] u>= 0x10)
    j__free(arg1[0x1a])

arg1[0x1f] = 0xf
arg1[0x1e] = 0
arg1[0x1a].b = 0

if (arg1[0x19] u>= 0x10)
    j__free(arg1[0x14])

arg1[0x19] = 0xf
arg1[0x18] = 0
arg1[0x14].b = 0

if (arg1[0x13] u>= 0x10)
    j__free(arg1[0xe])

arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0
int32_t result = sub_684ea0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
