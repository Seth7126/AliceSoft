// 函数: sub_476710
// 地址: 0x476710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

arg3 = arg3
float edi = 0f
EnterCriticalSection(*(arg1 + 0x90) + 4)
int32_t* var_8
sub_42f3d0(arg1 + 0x84, &var_8, &arg3)
int32_t* eax_3 = var_8

if (eax_3 != *(arg1 + 0x84))
    edi = eax_3[5]

LeaveCriticalSection(*(arg1 + 0x90) + 4)

if (edi == 0)
    int32_t result
    result.b = 0
    return result

*(edi i+ 0x10) = arg2
long double x87_r0
int32_t xmm0_1 = sub_473f80(*(arg1 + 0xb8), x87_r0, edi)
int32_t* ecx_2 = *(edi i+ 4)
int32_t* var_20 = ecx_2
return (*(*ecx_2 + 0x44))(arg4, xmm0_1, arg5, arg6)
