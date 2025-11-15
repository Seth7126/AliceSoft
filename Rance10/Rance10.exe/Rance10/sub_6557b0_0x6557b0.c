// 函数: sub_6557b0
// 地址: 0x6557b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t (** result)(int32_t* arg1) = (**(arg1 + 4))(arg1, 1, 0xc0)
*(arg1 + 0x1b0) = result
int32_t i_2 = 0x10
*result = sub_655430
void* ecx = &result[0x1f]
result[2] = sub_4033e0
int32_t i

do
    *(ecx - 0x40) = 0
    ecx += 4
    *(ecx - 4) = 0
    i = i_2
    i_2 -= 1
while (i != 1)
result[0x2f].b = 0x71

if (*(arg1 + 0xc9) != i_2.b)
    result = (**(arg1 + 4))(arg1, 1, *(arg1 + 0x24) << 8)
    int32_t i_1 = 0
    int32_t (** result_1)(int32_t* arg1) = result
    *(arg1 + 0x8c) = result_1
    
    if (*(arg1 + 0x24) s> 0)
        do
            result = 0xffffffff
            i_1 += 1
            __builtin_memset(result_1, 0xffffffff, 0x100)
            result_1 = &result_1[0x40]
        while (i_1 s< *(arg1 + 0x24))

return result
