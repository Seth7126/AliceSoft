// 函数: sub_68a1b0
// 地址: 0x68a1b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1448
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t __saved_edi
int32_t var_7c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_64 = arg1
int32_t edi = arg2[1]

for (int32_t* i = *arg2; i != edi; i = &i[0x11])
    arg1 = (**i)(0)

arg2[1] = *arg2
int32_t edi_1 = arg3[1]

for (int32_t* i_1 = *arg3; i_1 != edi_1; i_1 = &i_1[0x11])
    arg1 = (**i_1)(0)

int32_t* var_80 = arg3
arg3[1] = *arg3
void* var_84 = arg1
int32_t ecx_3 = sub_46f580(*(var_64 + 4), *(var_64 + 8))
*(var_64 + 8) = *(var_64 + 4)
void* const result = data_75d4e4
void* ebx_1 = *(result + 0x93c)

if (ebx_1 != 0)
    int32_t* var_80_1 = arg3
    int32_t var_84_1 = ecx_3
    sub_46f580(*(var_64 + 4), *(var_64 + 8))
    *(var_64 + 8) = *(var_64 + 4)
    int32_t eax_11
    int32_t edx_2
    eax_11, edx_2 = sub_46f070(ebx_1 + 0x78, var_64 + 4)
    result = sub_46ec80(eax_11, edx_2, ebx_1 + 0x94, var_64 + 4)

void* i_2 = *(var_64 + 4)

for (int32_t edi_3 = *(var_64 + 8); i_2 != edi_3; i_2 += 0x34)
    int32_t xmm0_1 = *(i_2 + 0x28)
    int32_t ebp_1 = *(i_2 + 0x2c)
    int32_t ebx_2 = *(i_2 + 0x20)
    int32_t var_5c_1 = *(i_2 + 0x30)
    int32_t eax_12
    eax_12.b = *(i_2 + 0x24)
    char var_65_1 = eax_12.b
    eax_12.b = *i_2
    char var_50_1 = eax_12.b
    int32_t var_4c_1 = *(i_2 + 4)
    struct dpsound::CSoundData::VTable* var_54 = &dpsound::CSoundData::`vftable'
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    char var_48 = 0
    char var_20_1 = var_65_1
    int32_t var_30_1 = ebx_2
    void* const result_1 = nullptr
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    int32_t var_1c_1 = xmm0_1
    int32_t var_18_1 = ebp_1
    int32_t var_14_1 = var_5c_1
    int32_t var_80_4 = sub_401ff0(&var_48, i_2 + 8, 0, 0xffffffff)
    int32_t var_4 = 0
    sub_6893e0(&var_54)
    int32_t* ecx_11 = arg2
    
    if (*i_2 == 0)
        ecx_11 = arg3
    
    sub_68a3e0(ecx_11, &var_54)
    int32_t var_4_1 = 0xffffffff
    result = result_1
    var_54 = &dpsound::CSoundData::`vftable'
    void* const result_2 = result
    
    if (result != 0)
        result = j__free(result)
        int32_t var_2c_1 = 0
        int32_t var_28_2 = 0
        int32_t var_24_2 = 0
    
    if (var_34_1 u>= 0x10)
        result = j__free(var_48.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_68)
return result
