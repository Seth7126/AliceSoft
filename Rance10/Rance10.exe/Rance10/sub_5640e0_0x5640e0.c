// 函数: sub_5640e0
// 地址: 0x5640e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
EnterCriticalSection(arg1[1] + 4)
CRITICAL_SECTION* arg_4
sub_4cedf0(&arg1[4], &var_4, &arg_4)
void** eax_2 = var_4

if (eax_2 == arg1[4])
    arg_4 = arg1[1] + 4
    return LeaveCriticalSection(arg_4) __tailcall

void** var_10_2 = eax_2
sub_564740(&arg1[4], &arg_4)
arg_4 = arg1[1] + 4
return LeaveCriticalSection(arg_4) __tailcall
