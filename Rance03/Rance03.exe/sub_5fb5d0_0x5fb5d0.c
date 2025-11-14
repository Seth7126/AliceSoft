// 函数: sub_5fb5d0
// 地址: 0x5fb5d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
int32_t result
int32_t edx
edx:result = muls.dp.d(0x88888889, esi_1)

if (esi_1 s/ 0x78 u>= 1)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x78

if (0x2222222 - ecx_5 u>= 1)
    return sub_5fb690(arg1, sub_5fb640(arg1, ecx_5 + 1))

sub_69a551("vector<T> too long")
noreturn
