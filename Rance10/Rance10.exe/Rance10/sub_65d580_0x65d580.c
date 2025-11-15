// 函数: sub_65d580
// 地址: 0x65d580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t (* eax_2)[0x4] = (**(arg1 + 4))(arg1, 1, 0x500)
uint32_t (* result)[0x4] = _memset(eax_2, 0, 0x200)
*(arg1 + 0x12c) = &eax_2[0x20]
char* i

for (i = nullptr; i s<= 0xff; i = &i[1])
    *(i + &eax_2[0x20]) = i.b

if (i s< 0x300)
    result = 0xffffffff
    __builtin_memset(__builtin_memset(&eax_2[0x20] + i, 0xffffffff, (0x300 - i) u>> 2 << 2), 0xff, 
        (0x300 - i) & 3)

return result
