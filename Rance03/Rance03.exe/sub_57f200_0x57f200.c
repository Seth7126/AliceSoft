// 函数: sub_57f200
// 地址: 0x57f200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xae4c415d, esi_1)

if (esi_1 s/ 0xbc u>= 1)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0xbc

if (0x15c9882 - ecx_5 u>= 1)
    return sub_57f6b0(arg1, sub_57f660(arg1, ecx_5 + 1))

sub_69a551("vector<T> too long")
noreturn
