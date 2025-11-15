// 函数: ?AttemptSchedulerSweep@SchedulerBase@details@Concurrency@@IAEXXZ
// 地址: 0x6f03b9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = 0x80000000

if (0x80000000 == arg1[0x65])
    arg1[0x65] = 0xc0000000
else
    eax = arg1[0x65]

if (eax != 0x80000000)
    return eax

int32_t* var_8_1 = arg1
int32_t edi
int32_t var_10 = edi
void* eax_1 = sub_6f09b1()
var_8_1:3.b = 1

if (eax_1 != 0 && *(eax_1 + 0x4c) == 0)
    var_8_1:3.b = 0

int32_t esi
int32_t var_14 = esi
int32_t esi_2 = *(*arg1 + 0x48)
j_sub_4033e0()
int32_t eax_3 = esi_2()
int32_t eax_4

if (eax_3 != 0)
    if (eax_3 == 2 && arg1[0x66] == 0)
        arg1[0x66]
        arg1[0x66] = 1
    
    int32_t eax_6 = arg1[0x65]
    int32_t edx_1
    
    do
        edx_1 = eax_6
        
        if (eax_6 == arg1[0x65])
            arg1[0x65] = eax_6 & 0xbfffffff
        else
            eax_6 = arg1[0x65]
    while (eax_6 != edx_1)
    eax_4 = Concurrency::details::SchedulerBase::ReleaseSuspendedVirtualProcessors(arg1, 
        eax_6 & 0x1fffffff)
else
    eax_4 = sub_6f1e88(arg1)

if (var_8_1:3.b != 0)
    return eax_4

return sub_40d500()
