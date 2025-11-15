// 函数: sub_503c20
// 地址: 0x503c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737094
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIModel::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIModel::VTable** var_14_1 = arg1
*arg1 = &partsengine::CGUIModel::`vftable'
arg1[1] = 0xffffffff
arg1[2].w = 0x101
*(arg1 + 0xa) = 0
__builtin_memset(&arg1[3], 0, 0x14)
arg1[8] = 1
arg1[9] = 0x1010000
arg1[0xa].w = 0
arg1[0xb] = 0xff
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10] = 0xff
arg1[0x11] = 0xff
arg1[0x12] = 0xff
arg1[0x13] = 0
arg1[0x14] = 0x3f800000
arg1[0x15] = 0x3f800000
__builtin_memset(&arg1[0x16], 0, 0x1d)
__builtin_memset(&arg1[0x1e], 0, 0x38)
arg1[0x2c] = 1
arg1[0x2d] = 0
arg1[0x2e].b = 0
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32] = 0
int32_t var_8_1 = 0
void* esi = data_7fcbbc
int32_t eax_3
int32_t ebx

if (esi != 0)
    if (sub_63c080(esi) != 0)
        ebx = (*(**(esi + 0x2c) + 0x4c))(eax_2)
    else
        ebx = 0
    
    void* esi_1 = data_7fcbbc
    char eax_7
    
    if (esi_1 != 0)
        eax_7 = sub_63c080(esi_1)
    
    if (esi_1 != 0 && eax_7 != 0)
        eax_3 = (*(**(esi_1 + 0x2c) + 0x48))(eax_2)
    else
        eax_3 = 0
else
    ebx = 0
    eax_3 = 0

arg1[0x33] = &partsengine::CProjection::`vftable'
__builtin_memset(&arg1[0x34], 0, 0x14)
int32_t var_28 = 0x41f00000
float var_2c
sub_5572c0(&arg1[0x33], eax_3, ebx, var_2c)
arg1[0x49].w = 0
*(arg1 + 0x126) = 0
arg1[0x4a] = 0
arg1[0x4b] = 0
arg1[0x4c].w = 0
_memset(&arg1[0x4d], 0, 0x60)
char* (__fastcall* var_28_1)(int32_t* arg1) = sub_403320
var_8_1.b = 1
`eh vector constructor iterator'(&arg1[0x4d], 0x18, 4, sub_404d40)
arg1[0x65].b = 0
arg1[0x66] = 0
arg1[0x67].b = 0
arg1[0x6d] = 0xf
arg1[0x6c] = 0
arg1[0x68].b = 0
arg1[0x6e].w = 0x100
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
