// 函数: sub_672a40
// 地址: 0x672a40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d01d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1b0 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CDialog::dpparts::CDialogSelectViewItem::VTable* dwInitParam
sub_653ae0(&dwInitParam)
int32_t var_4 = 0
struct dpparts::CListItem::VTable* var_1a8
void var_180
sub_6541d0(&var_180, sub_681da0(*(arg1 + 0x5c), &var_1a8))
char var_184

if (var_184 != 0)
    sub_654270(&dwInitParam, &var_180)

int32_t var_188 = DialogBoxParamA(*(*(arg1 + 4) + 0x14), 0x84, arg2, sub_697100, &dwInitParam)
struct dpparts::CListItem::VTable** result = sub_6546f0(&dwInitParam, &var_1a8)
var_4.b = 1
void* ecx_6 = *(*(arg1 + 0x5c) + 0xdc)

if (ecx_6 != 0)
    void* ecx_7 = *(ecx_6 + 0x5c)
    
    if (ecx_7 != 0)
        result = sub_65a160(ecx_7, result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
