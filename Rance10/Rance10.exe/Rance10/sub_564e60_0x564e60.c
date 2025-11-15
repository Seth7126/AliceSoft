// 函数: sub_564e60
// 地址: 0x564e60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1[0xf]

if (esi != 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x2aaaaaab, arg1[0x11] - esi)
    int32_t edx_2 = edx_1 s>> 1
    sub_403160(esi, (edx_2 u>> 0x1f) + edx_2, 0xc)
    arg1[0xf] = 0
    arg1[0x10] = 0
    arg1[0x11] = 0

void* esi_1 = arg1[0xc]

if (esi_1 != 0)
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = muls.dp.d(0x2aaaaaab, arg1[0xe] - esi_1)
    int32_t edx_4 = edx_3 s>> 1
    sub_403160(esi_1, (edx_4 u>> 0x1f) + edx_4, 0xc)
    arg1[0xc] = 0
    arg1[0xd] = 0
    arg1[0xe] = 0

int32_t* ecx_4 = arg1[3]

if (ecx_4 != 0)
    int32_t* var_10_1 = arg1
    int32_t* var_14_3 = ecx_4
    sub_4ac600(ecx_4, arg1[4])
    void* esi_2 = arg1[3]
    int32_t eax_9
    int32_t edx_6
    edx_6:eax_9 = muls.dp.d(0x2aaaaaab, arg1[5] - esi_2)
    int32_t edx_7 = edx_6 s>> 1
    sub_403160(esi_2, (edx_7 u>> 0x1f) + edx_7, 0xc)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

void* esi_3 = *arg1

if (esi_3 == 0)
    return 

sub_403160(esi_3, (arg1[2] - esi_3) s/ 0x5c, 0x5c)
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
