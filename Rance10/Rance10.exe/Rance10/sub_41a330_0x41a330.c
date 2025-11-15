// 函数: sub_41a330
// 地址: 0x41a330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* result = arg3
int32_t var_4 = 0
char* result_1 = result
void* esi

if (*arg2 != 0)
    char* esi_1 = arg2
    arg3 = &esi_1[1]
    
    do
        arg1 = *esi_1
        esi_1 = &esi_1[1]
    while (arg1 != 0)
    
    esi = esi_1 - arg3
else
    esi = nullptr

void* var_14 = esi
int32_t* eax = sub_41a4e0(arg4, arg3, arg2)
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
sub_4056a0(result, eax)
return result
