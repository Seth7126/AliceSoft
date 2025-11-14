// 函数: sub_675400
// 地址: 0x675400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfc23
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CSplitWindow::VTable** var_30
int32_t eax_2 = __security_cookie ^ &var_30
int32_t __saved_esi
int32_t var_38 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x50) == 0)
    struct dpparts::CSplitWindow::VTable** eax_5 = sub_69adc6(0x98)
    var_30 = eax_5
    int32_t var_4 = 0
    struct dpparts::CSplitWindow::VTable** eax_6
    
    if (eax_5 == 0)
        eax_6 = nullptr
    else
        eax_6 = sub_67d8b0(eax_5)
    
    int32_t var_4_1 = 0xffffffff
    *(arg1 + 0x50) = eax_6
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_402110(&var_2c, "DPPartsSubSplitWindow", 0x15)
    int32_t var_4_2 = 1
    int32_t var_3c_1 = *(arg1 + 0x48)
    int32_t var_40_1 = *(arg1 + 0x34)
    void var_48
    int32_t var_44
    sub_67dc60(*(arg1 + 0x50), &var_2c, arg2, *(*(arg1 + 4) + 0x14), *(arg1 + 0x2c), 
        *(arg1 + 0x30), var_48, var_44)
    int32_t var_4_3 = 0xffffffff
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 0xf
    int32_t var_1c_2 = 0
    var_2c = 0

int32_t result = *(arg1 + 0x54)

if (result != 0)
    sub_67e3d0(*(arg1 + 0x50), result, 0, 0)
    sub_67e3d0(*(arg1 + 0x50), *(arg1 + 0x58), 0, 1)
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
