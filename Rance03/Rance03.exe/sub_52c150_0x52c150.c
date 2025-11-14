// 函数: sub_52c150
// 地址: 0x52c150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[1]
int32_t esi_1 = arg1[2] - ebx
void* result
int32_t edx
edx:result = muls.dp.d(0x92492493, esi_1)

if (esi_1 s/ 0x38 u>= 1)
    return result

int32_t ecx_5 = (ebx - *arg1) s/ 0x38

if (0x4924924 - ecx_5 u>= 1)
    return sub_52c210(arg1, sub_5281a0(arg1, ecx_5 + 1))

sub_69a551("vector<T> too long")
noreturn
