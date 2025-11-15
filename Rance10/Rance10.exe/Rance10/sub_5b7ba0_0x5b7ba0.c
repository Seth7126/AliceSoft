// 函数: sub_5b7ba0
// 地址: 0x5b7ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = arg1[3]

if (ecx != 0)
    int32_t* var_10_1 = arg1
    int32_t* var_14_1 = ecx
    sub_4ac600(ecx, arg1[4])
    void* esi_1 = arg1[3]
    int32_t eax_1
    int32_t edx_2
    edx_2:eax_1 = muls.dp.d(0x2aaaaaab, arg1[5] - esi_1)
    int32_t edx_3 = edx_2 s>> 1
    sub_403160(esi_1, (edx_3 u>> 0x1f) + edx_3, 0xc)
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0

void* esi_2 = *arg1

if (esi_2 == 0)
    return 

int32_t eax_5
int32_t edx_4
edx_4:eax_5 = muls.dp.d(0x4ec4ec4f, arg1[2] - esi_2)
int32_t edx_5 = edx_4 s>> 4
sub_403160(esi_2, (edx_5 u>> 0x1f) + edx_5, 0x34)
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
