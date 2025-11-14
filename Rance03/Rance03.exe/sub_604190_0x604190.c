// 函数: sub_604190
// 地址: 0x604190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char filename
int32_t eax_1 = __security_cookie ^ &filename
filename = 0
char var_10f[0x10b]
_memset(&var_10f, 0, 0x104)
GetModuleFileNameA(nullptr, &filename, 0x104)
void* ecx

if (filename != 0)
    char* ecx_1 = &filename
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &var_10f
else
    ecx = nullptr

sub_402110(arg1 + 4, &filename, ecx)
char* result = sub_6047d0(arg1)
sub_69a5bc(eax_1 ^ &filename)
return result
