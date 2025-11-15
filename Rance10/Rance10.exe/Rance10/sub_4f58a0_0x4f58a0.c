// 函数: sub_4f58a0
// 地址: 0x4f58a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7273dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIEngine::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg1[0x6d]
*arg1 = &partsengine::CGUIEngine::`vftable'

if (ecx != 0)
    (**ecx)(1)

arg1[0x6d] = 0
sub_403f90(&arg1[0x73])
int32_t* eax_4 = arg1[0x71]
int32_t* var_24 = eax_4
sub_4bbad0(&arg1[0x71], &var_14, *eax_4)
sub_403160(arg1[0x71], 1, 0x38)
arg1[0x6e] = &partsengine::CDrawD3DPluginManager::`vftable'{for `IDrawD3DPluginManager'}
sub_51af90(&arg1[0x3d])
arg1[0x27] = &partsengine::CLLPartsFactory::`vftable'
sub_4c55c0(&arg1[0x2a])
int32_t var_8_1 = 0
void* ecx_5 = data_7fcb6c
arg1[0x26] = &partsengine::CSoundManager::`vftable'
void* eax_5 = *(ecx_5 + 0x934)

if (eax_5 != 0)
    int32_t var_24_1 = 2
    sub_47fc90(eax_5 + 0x78)
    ecx_5 = data_7fcb6c

void* ecx_7 = *(ecx_5 + 0x934)

if (ecx_7 != 0)
    int32_t var_24_2 = 3
    sub_47fc90(ecx_7 + 0x78)

sub_524540(&arg1[0x17])
int32_t var_8_2 = 1
arg1[3] = &partsengine::CFlatEngine::`vftable'
sub_4d5860(&arg1[3])
int32_t* eax_6 = arg1[0x15]
int32_t* var_24_3 = eax_6
sub_4572d0(&arg1[0x15], &var_14, *eax_6)
sub_403160(arg1[0x15], 1, 0x2c)
arg1[0x13] = &thread::CCriticalSection::`vftable'
int32_t* ecx_12 = arg1[0x14]

if (ecx_12 != 0)
    (**ecx_12)(1)

int32_t result = sub_406310(&arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
