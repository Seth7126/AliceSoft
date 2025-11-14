// 函数: sub_64f500
// 地址: 0x64f500
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = var_2c
void* var_3c = arg1
sub_41a5c0(*(arg1 + 0x7c), *(arg1 + 0x80))
*(arg1 + 0x80) = *(arg1 + 0x7c)
*(arg1 + 0x88) = 0xffffffff
*(arg1 + 0x8c) = 0xffffffff
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, "DPLogViewerTabWindow", 0x14)
int32_t var_4 = 0
char* ecx_3 = *(arg1 + 8) + 0x30

if (ecx_3 != &var_28)
    sub_401ff0(ecx_3, &var_28, 0, 0xffffffff)

if (var_14 u>= 0x10)
    j__free(var_28.d)

*(*(arg1 + 8) + 0x60) = arg3
*(*(arg1 + 8) + 0x68) = 0x52000000
*(*(arg1 + 8) + 0x7c) = arg2
void* eax_9 = *(arg1 + 8)
*(eax_9 + 0x6c) = 0
*(eax_9 + 0x70) = 0
*(eax_9 + 0x74) = 0x258
*(eax_9 + 0x78) = 0x190
*(*(arg1 + 8) + 0x84) = arg1
bool result = sub_698a60(*(arg1 + 8)) != 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
