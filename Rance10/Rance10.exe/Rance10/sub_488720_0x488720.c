// 函数: sub_488720
// 地址: 0x488720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg3 = arg3
float edi = 0f
EnterCriticalSection(*(arg1 + 0x74) + 4)
void** var_8
sub_42eb70(arg1 + 0x68, &var_8, &arg3)
void** eax_3 = var_8

if (eax_3 != *(arg1 + 0x68))
    edi = eax_3[5]

LeaveCriticalSection(*(arg1 + 0x74) + 4)

if (edi == 0)
    int32_t result
    result.b = 0
    return result

void* ecx_1 = *(arg1 + 0x9c)
*(edi i+ 0x14) = arg2
long double x87_r0
sub_4864e0(ecx_1, x87_r0, edi)
int32_t var_18_4 = arg6
return sub_4893f0(edi, arg4, arg5)
