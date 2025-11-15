// 函数: sub_59f3c0
// 地址: 0x59f3c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
int32_t i = 0
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x4da637d, arg1[2] - arg1[1])
int32_t edx_3 = edx_2 s>> 4

if ((edx_3 u>> 0x1f) + edx_3 s> 0)
    int32_t* ecx = arg1[1]
    int32_t* esi_1 = ecx
    int32_t edx_5
    
    do
        if (*esi_1 == arg2)
            return i * 0x34c + ecx
        
        i += 1
        int32_t eax_4
        int32_t edx_4
        edx_4:eax_4 = muls.dp.d(0x4da637d, arg1[2] - arg1[1])
        esi_1 = &esi_1[0xd3]
        edx_5 = edx_4 s>> 4
    while (i s< (edx_5 u>> 0x1f) + edx_5)

return 0
