// 函数: sub_5c0770
// 地址: 0x5c0770
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1

if (arg1 == 0xffffff28)
    int32_t eax
    int32_t edx
    return sub_5c24e0(eax, edx, arg1, arg1, 0x6e6260)

int32_t eax_2 = sub_5d5dc0(&arg1[0x5b])
struct sys43vm::CPage::VTable*** esi = arg1[0x5d] + (eax_2 << 2)
struct sys43vm::CPage::VTable** eax_3
int32_t* ecx_4
int32_t edx_1
eax_3, ecx_4, edx_1 = sub_5d5870(&arg1[0x62])
*esi = eax_3

if (eax_2 s< 0)
    return sub_5c24e0(eax_2, edx_1, ecx_4, arg1, 0x6e62e8)

arg1[0x60] = eax_2
sub_5c0670(arg1)

if (sub_5d3720(arg1[0x498], &arg1[0x36], arg1[0x54], 1) != 0 && sub_5c0830(arg1) != 0)
    *arg1[0x393] = 4
    int32_t* result
    result.b = 1
    arg1[0x393] += 4
    return result

return 0
