// 函数: ?AddCore@SchedulerProxy@details@Concurrency@@QAEXPAUSchedulerNode@23@I_N@Z
// 地址: 0x6f5e72
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[0x29]
int32_t ebx = arg1[0x24]

if (eax == 0)
    ebx -= 1
else
    arg1[0x29] = eax - 1

*(arg2 + 0x1c) += 1
arg1[0x28] += 1
int32_t* eax_3 = arg3 * 0x34 + *(arg2 + 0x30)
*eax_3 = 4
eax_3[9] = ebx
arg1[0x2c] += ebx

if (arg4 != 0)
    sub_6f6ccd(arg1, arg2, arg3)

void var_10
void* esi_1
void* var_c
int32_t var_8

if (ebx != 1)
    int32_t ecx_2
    ecx_2.b = mulu.dp.d(ebx, 4) u>> 0x20 != 0
    int32_t var_20_2 = neg.d(ecx_2) | (ebx * 4)
    esi_1 = sub_6e8787()
    var_c = esi_1
    var_8 = 0
    
    if (ebx != 0)
        goto label_6f5f22
else
    var_c = &var_10
    var_8 = 0
label_6f5f22:
    int32_t ecx_10
    
    do
        int32_t esi_2 = *(*arg1 + 0x18)
        j_sub_4033e0()
        esi_1 = var_c
        *(esi_1 + (var_8 << 2)) = esi_2(arg2, arg3)
        ecx_10 = var_8 + 1
        var_8 = ecx_10
    while (ecx_10 u< ebx)
Concurrency::details::SchedulerProxy::AddVirtualProcessorRoots(arg1, esi_1, ebx)
void* result = &var_10

if (esi_1 != &var_10)
    result = _free(esi_1)

return result
