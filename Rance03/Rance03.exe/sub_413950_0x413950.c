// 函数: sub_413950
// 地址: 0x413950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3cf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *(arg1 + 0x70) * 0x6c
int32_t var_30 = 0
struct win32only::CDialog::dpanalysis::CDialogBPConfig::VTable* const dwInitParam =
    &dpanalysis::CDialogBPConfig::`vftable'{for `win32only::CDialog'}
int32_t var_2c = 1
int32_t var_14 = 0xf
void* esi_1 = esi + *(arg1 + 0x60)
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t eax_5 = *(esi_1 + 0x14)

if (&var_28 != esi_1 + 0x18)
    sub_401ff0(&var_28, esi_1 + 0x18, 0, 0xffffffff)

int32_t result = DialogBoxParamA(*(arg1 + 0x80), 0x89, *(arg1 + 0xc), sub_697100, &dwInitParam)
int32_t result_1 = result

if (result != 0)
    *(esi_1 + 0x14) = eax_5
    sub_4053a0(esi_1)
    sub_4054e0(esi_1, &var_28)
    result = InvalidateRect(*(arg1 + 0xc), nullptr, 1)

dwInitParam = &dpanalysis::CDialogBPConfig::`vftable'{for `win32only::CDialog'}

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
