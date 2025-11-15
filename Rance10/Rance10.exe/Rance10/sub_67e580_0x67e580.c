// 函数: sub_67e580
// 地址: 0x67e580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char filename
int32_t eax_1 = __security_cookie ^ &filename
_memset(&filename, 0, 0x105)
GetModuleFileNameA(nullptr, &filename, 0x104)
void* ecx

if (filename != 0)
    char* ecx_1 = &filename
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    void var_10f
    ecx = ecx_1 - &var_10f
else
    ecx = nullptr

sub_403490(arg1 + 4, &filename, ecx)
void* result = sub_67eb70(arg1)
@__security_check_cookie@4(eax_1 ^ &filename)
return result
