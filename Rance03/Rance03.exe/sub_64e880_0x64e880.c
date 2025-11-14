// 函数: sub_64e880
// 地址: 0x64e880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ceb68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t var_90 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_6 = zx.d(arg3)

if (eax_6 == 0x9c43)
    DestroyWindow(arg2)
else if (eax_6 == 0x9c5f)
    struct filedialog::CSaveFileDlg::VTable* const var_7c_1 = &filedialog::CSaveFileDlg::`vftable'
    int32_t* eax_9 = sub_69adc6(0x764)
    int32_t* param0
    
    if (eax_9 == 0)
        param0 = nullptr
    else
        param0 = sub_6024a0(eax_9)
    
    int32_t* param0_1 = param0
    int32_t var_4 = 0
    param0[1] = arg2
    char var_74
    sub_401f60(&var_74, "*.txt")
    var_4.b = 1
    char var_44
    sub_401f60(&var_44, 0x70080c)
    sub_6023e0(param0, &var_44, &var_74)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44.d)
    
    var_4.b = 0
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_60
    
    if (var_60 u>= 0x10)
        j__free(var_74.d)
    
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    var_74 = 0
    char var_2c
    sub_401f60(&var_2c, "*.*")
    var_4.b = 2
    char var_5c
    sub_401f60(&var_5c, 0x700824)
    sub_6023e0(param0, &var_5c, &var_2c)
    int32_t var_48
    
    if (var_48 u>= 0x10)
        j__free(var_5c.d)
    
    var_4.b = 0
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    var_5c = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    *(param0[0x1d8] + param0 + 0x35d) = 0
    
    if (GetSaveFileNameA(param0) != 0 && param0 != 0xffffffa8)
        int32_t ecx_7 = *(arg1 + 0xa0)
        
        if (ecx_7 s>= 0 && ecx_7 s< (*(arg1 + 0x144) - *(arg1 + 0x140)) s>> 2
                && sub_64ce90(*(*(arg1 + 0x140) + (ecx_7 << 2)), &param0[0x16], 1) == 0)
            void* var_94_8 = &param0[0x16]
            sub_64b530(0x700838)
    
    j__free(param0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_80)
return 0
