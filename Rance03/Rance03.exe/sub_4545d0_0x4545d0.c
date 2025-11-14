// 函数: sub_4545d0
// 地址: 0x4545d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xd20d20d3, esi_1)

if (esi_1 s/ 0x9c u>= 1)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x9c

if (0x1a41a41 - ecx_5 u>= 1)
    return sub_4546e0(arg1, sub_454690(arg1, ecx_5 + 1))

sub_69a551("vector<T> too long")
noreturn
