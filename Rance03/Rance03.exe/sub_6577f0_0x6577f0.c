// 函数: sub_6577f0
// 地址: 0x6577f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cf560
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5
eax_5.b = *(*(arg1 + 0x2c8) + 0x10)
int32_t* var_50
int32_t var_4c

if (eax_5.b != 0)
    sub_41fff0(arg1 + 0x320)
    int32_t ecx_2 = sub_41fff0(arg1 + 0x328)
    var_50 = nullptr
    var_4c = 0
    int32_t var_48_1 = 0
    int32_t var_c_1 = 0
    void* esi_1 = *(arg1 + 0x2c8)
    
    if (*(esi_1 + 4) != *(esi_1 + 8))
        sub_42f470(&var_50, (*(esi_1 + 8) - *(esi_1 + 4)) s>> 2)
        int32_t* ecx_4 = *(esi_1 + 4)
        ecx_2 = _memcpy(var_50, ecx_4, (*(esi_1 + 8) - ecx_4) & 0xfffffffc, eax_4)
    
    int32_t var_68_3 = var_54.d
    int32_t var_6c_2 = ecx_2
    sub_65af30(*(arg1 + 0x33c), *(arg1 + 0x340))
    *(arg1 + 0x340) = *(arg1 + 0x33c)
    sub_657e00(arg1, arg1 + 0x33c, &var_50)
    int32_t eax_14
    int32_t edx_2
    edx_2:eax_14 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x340) - *(arg1 + 0x33c))
    int32_t edx_3 = edx_2 s>> 5
    *(arg1 + 0x2fc) = (edx_3 u>> 0x1f) + edx_3 + 1
    sub_670600(arg1 + 0x2e8)
    int32_t ecx_11 = sub_657ac0(arg1, arg1 + 0x450) + 2
    int32_t eax_21
    int32_t edx_5
    edx_5:eax_21 = sx.q(*(arg1 + 0x34))
    *(arg1 + 0x318) = ecx_11 * ((eax_21 - edx_5) s>> 1)
    sub_670600(arg1 + 0x304)
    int32_t var_c_2 = 0xffffffff
    int32_t* eax_24 = var_50
    
    if (eax_24 != 0)
        j__free(eax_24)

sub_657bf0(arg1 + 0x33c, *(arg1 + 0x44c))
int32_t eax_25 = GetScrollPos(*(arg1 + 0x2ec), *(arg1 + 0x2f4))
RECT rect
GetClientRect(*(arg1 + 8), &rect)
sub_4107c0(*(arg1 + 0x330), *(arg1 + 0x334))
int32_t bottom = rect.bottom
*(arg1 + 0x334) = *(arg1 + 0x330)
int32_t var_c_3 = 1
sub_65a3a0(arg1 + 0x330, sub_658a00(arg1, &var_50, arg1 + 0x33c, eax_25, *(arg1 + 0x34), bottom))
int32_t var_c_4 = 0xffffffff
int32_t* eax_28 = var_50

if (eax_28 != 0)
    sub_4107c0(eax_28, var_4c)
    j__free(var_50)

enum SCROLLBAR_CONSTANTS nBar_1 = *(arg1 + 0x310)
eax_28.b = *(arg1 + 0x2d0)
HWND hWnd_1 = *(arg1 + 0x308)
char esi_4 = (*(arg1 + 0x2d8)).b
var_54 = eax_28.b
int32_t eax_29
int32_t ecx_16
eax_29, ecx_16 = GetScrollPos(hWnd_1, nBar_1)
int32_t var_68_14 = var_54.d
char var_34
sub_671cc0(&var_34, arg1 + 0x330, eax_29, ecx_16, esi_4 - (*(arg1 + 0x2c)).b)
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34.d)

int32_t var_68_16 = *(arg1 + 0x2d8)
int32_t var_6c_11 = *(arg1 + 0x2d4)
var_54 = *(arg1 + 0x2e4)
char var_70_4 = (var_54.d).b
int32_t var_20_1 = 0xf
enum SCROLLBAR_CONSTANTS nBar = *(arg1 + 0x310)
int32_t var_24 = 0
HWND hWnd = *(arg1 + 0x308)
var_34 = 0
sub_670d10(arg1 + 0x348, GetScrollPos(hWnd, nBar), var_70_4, var_6c_11, var_68_16)
InvalidateRect(*(arg1 + 8), nullptr, 0)
BOOL result = UpdateWindow(*(arg1 + 8))
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
