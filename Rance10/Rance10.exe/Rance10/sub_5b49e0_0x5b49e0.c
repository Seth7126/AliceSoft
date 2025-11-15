// 函数: sub_5b49e0
// 地址: 0x5b49e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax
int32_t ecx
eax, ecx = sub_4046d0(arg2)
int32_t var_1c_1 = ecx
int32_t var_20 = 0.d
int32_t var_24 = ecx
sub_40a3d0(eax, arg1[1], *arg1, eax)
int32_t ebx = arg1[1]
void* i = *arg1
char var_8
var_8.d = (ebx - i) s>> 2

if (i != 0)
    for (; i != ebx; i += 4)
        sub_5b4620(i)
    
    void* ecx_3 = *arg1
    sub_403160(ecx_3, (arg1[2] - ecx_3) s>> 2, 4)

arg1[2] = &eax[arg2]
void* result = &eax[var_8.d]
arg1[1] = result
*arg1 = eax
return result
