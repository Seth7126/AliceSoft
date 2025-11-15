// 函数: sub_5c8070
// 地址: 0x5c8070
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = arg1[6]

if (ecx != 0)
    int32_t* var_c_1 = arg1
    int32_t* var_10_1 = ecx
    sub_4ac600(ecx, arg1[7])
    int32_t eax_1
    int32_t edx_2
    edx_2:eax_1 = muls.dp.d(0x2aaaaaab, arg1[8] - arg1[6])
    int32_t edx_3 = edx_2 s>> 1
    sub_403160(arg1[6], (edx_3 u>> 0x1f) + edx_3, 0xc)
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0

void* ecx_3 = arg1[3]

if (ecx_3 != 0)
    sub_403160(ecx_3, (arg1[5] - ecx_3) s>> 2, 4)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

void* ecx_4 = *arg1

if (ecx_4 == 0)
    return 

sub_403160(ecx_4, (arg1[2] - ecx_4) s>> 2, 4)
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
