// 函数: sub_47fcf0
// 地址: 0x47fcf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
EnterCriticalSection(arg1[6] + 4)
void arg_4
sub_42eb70(&arg1[3], &var_4, &arg_4)
void** ecx_1 = var_4

if (ecx_1 == arg1[3])
    LeaveCriticalSection(arg1[6] + 4)
    int32_t eax_4
    eax_4.b = 0
    return eax_4

int32_t ebx
ebx.b = sub_4811f0(ecx_1[5])
LeaveCriticalSection(arg1[6] + 4)
int32_t eax_6
eax_6.b = ebx.b
return eax_6
