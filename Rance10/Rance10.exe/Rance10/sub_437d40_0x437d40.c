// 函数: sub_437d40
// 地址: 0x437d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
int32_t ebp = *arg1
void* eax_1 = arg6

if (eax_1 s< 0)
    eax_1 -= 1

int32_t eax_2
int32_t edx_1
edx_1:eax_2 = sx.q(eax_1)
int32_t eax_4 = arg5

if (eax_4 s< 0)
    eax_4 -= 1

int32_t eax_5
int32_t edx_2
edx_2:eax_5 = sx.q(eax_4)
void* ebx_3 = ((eax_2 - edx_1) s>> 1) * ebp + ((eax_5 - edx_2) s>> 1)
sub_43a570(arg1, ebp * arg3 + arg2, ebp, arg4, ebx_3)
int32_t eax_8 = *arg1
sub_43a570(arg1, eax_8 * arg3 + 8 + arg2, eax_8, arg4, ebx_3)
int32_t ecx_3 = *arg1
sub_43a570(arg1, (arg3 + 8) * ecx_3 + arg2, ecx_3, arg4, ebx_3)
int32_t eax_15 = *arg1
return sub_43a570(arg1, eax_15 * (arg3 + 8) + arg2 + 8, eax_15, arg4, ebx_3)
