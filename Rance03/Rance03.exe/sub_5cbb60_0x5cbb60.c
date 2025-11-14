// 函数: sub_5cbb60
// 地址: 0x5cbb60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
int32_t result = sub_5cea10(arg1, &var_28, "system.MsgBoxOkCancel")

if (result.b != 0)
    char* eax_5 = &var_28
    
    if (var_14 u>= 0x10)
        eax_5 = var_28.d
    
    enum MESSAGEBOX_RESULT eax_6 = sub_64b620(eax_5)
    int32_t ecx = *(arg1 + 0x22c)
    int32_t edi_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2
    
    if (edi_3 + 1 u>= ecx)
        sub_64ad90(arg1 + 0x224, ecx * 2)
        *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_3 << 2)
    
    result = *(arg1 + 0x234)
    int32_t ecx_2
    ecx_2.b = eax_6 == IDOK
    *result = ecx_2
    *(arg1 + 0x234) += 4

if (var_14 u>= 0x10)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
