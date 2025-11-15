// 函数: ??0HillClimbing@details@Concurrency@@QAE@IIPAVSchedulerProxy@12@@Z
// 地址: 0x6f55d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
long double x87_r7 = float.t(0)
double* eax = arg1 + 8
int32_t i_1 = 0x40
int32_t i

do
    eax[-1] = fconvert.d(x87_r7)
    *eax = fconvert.d(x87_r7)
    eax[1].d = 0
    *(eax + 0xc) = 0
    eax[2].d = 0
    eax = &eax[4]
    i = i_1
    i_1 -= 1
while (i != 1)
long double x87_r7_1 = float.t(arg3)
*(arg1 + 0x800) = arg4
*(arg1 + 0x81c) = arg2
*(arg1 + 0x814) = 0
*(arg1 + 0x818) = 0
__builtin_memset(arg1 + 0x820, 0, 0x14)
*(arg1 + 0x834) = 1

if (arg3 s< 0)
    x87_r7_1 = x87_r7_1 + fconvert.t(4294967296.0)

*(arg1 + 0x810) = arg3
*(arg1 + 0x808) = fconvert.d(x87_r7_1)
return arg1
