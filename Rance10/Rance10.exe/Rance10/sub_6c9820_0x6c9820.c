// 函数: sub_6c9820
// 地址: 0x6c9820
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax
eax.b = *(arg1 + 0xc) != 0

if (eax + 4 + *(arg1 + 4) u> *(arg1 + 8))
    int32_t eax_2
    eax_2.b = 0
    return eax_2

char var_10
char var_f
char var_e
char var_d

if (sub_6c96d0(arg1, &var_10) != 0 && sub_6c96d0(arg1, &var_f) != 0 && sub_6c96d0(arg1, &var_e) != 0
        && sub_6c96d0(arg1, &var_d) != 0)
    struct fileimage::CFileImageAnalyser::VTable* const var_c =
        &fileimage::CFileImageAnalyser::`vftable'
    char* var_8 = &var_10
    struct fileimage::CFileImageAnalyser::VTable* const* var_4 = &var_c
    *arg2 = sub_6c94f0(&var_c)
    uint32_t eax_8
    eax_8.b = 1
    return eax_8

*arg2 = 0
int32_t eax_4
eax_4.b = 1
return 1
