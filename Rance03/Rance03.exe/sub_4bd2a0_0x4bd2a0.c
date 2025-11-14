// 函数: sub_4bd2a0
// 地址: 0x4bd2a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0xb21642c9, esi_1)

if (esi_1 s/ 0x5c u>= arg2)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x5c

if (0x2c8590b - ecx_5 u>= arg2)
    return sub_4bd3b0(arg1, sub_4bd360(arg1, ecx_5 + arg2))

sub_69a551("vector<T> too long")
noreturn
