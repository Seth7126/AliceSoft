// 函数: sub_4299e0
// 地址: 0x4299e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t** ebx = arg3
int32_t* edi = arg1
void** eax
int32_t ecx
eax, ecx = sub_429950(arg1, ebx)

if (eax != *edi)
    arg3.b = 0
    int32_t** var_10_1 = arg3
    int32_t var_14_1 = ecx
    char eax_1
    eax_1, ecx = sub_42a380(eax, ebx[1], *ebx, eax[4], eax[5])
    
    if (eax_1 == 0)
        *arg2 = eax
        arg2[1].b = 0
        return arg2

int32_t var_10_2 = ecx
arg3 = ebx
int32_t*** var_14_2 = &arg3
int32_t* eax_3 = sub_42a020(ecx)
sub_42a050(edi, &arg3, eax, &eax_3[4], eax_3)
*arg2 = arg3
arg2[1].b = 1
return arg2
