// 函数: sub_428a60
// 地址: 0x428a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char string
int32_t eax_1 = __security_cookie ^ &string
uint32_t eax_3 = zx.d(arg3)
int32_t result

if (eax_3 == 1)
    string = 0
    char var_803[0x7ff]
    _memset(&var_803, 0, 0x7ff)
    GetWindowTextA(GetDlgItem(arg2, 0x9cce), &string, 0x800)
    void* ecx
    
    if (string != 0)
        char* ecx_1 = &string
        char i
        
        do
            i = *ecx_1
            ecx_1 = &ecx_1[1]
        while (i != 0)
        ecx = ecx_1 - &var_803
    else
        ecx = nullptr
    
    sub_402110(arg1 + 8, &string, ecx)
    
    if (*(arg1 + 0x18) == 0)
        goto label_428a9a
    
    EndDialog(arg2, 0)
    result = 1
else if (eax_3 == 2 || eax_3 == 0x9cd0)
label_428a9a:
    EndDialog(arg2, 0xffffffff)
    result = 1
else
    result = 0

sub_69a5bc(eax_1 ^ &string)
return result
