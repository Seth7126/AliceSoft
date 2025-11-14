// 函数: sub_5e58d0
// 地址: 0x5e58d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cb418
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_5e8960() == 0 && arg2 != 0)
    int32_t lpmii
    _memset(&lpmii, 0, 0x30)
    lpmii = 0x30
    int32_t var_44_1 = 1
    int32_t var_3c_1 = 3
    SetMenuItemInfoA(arg2, 0x9caa, 0, &lpmii)

void* esi_2 = *(arg1 + 0x254)
int32_t var_c_1 = 0
int32_t* result_1
sub_5e59b0(esi_2 + 0x148, sub_5e0f20(esi_2 + 0x470, &result_1))
int32_t* result = result_1

if (result != 0)
    int32_t var_50
    sub_4107c0(result, var_50)
    result = j__free(result_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
